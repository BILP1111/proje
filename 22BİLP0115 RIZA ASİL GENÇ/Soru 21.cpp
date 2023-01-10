#include <stdio.h>


int main() 
{
    int num;
    printf("Medeni haliniz: \n1- Bekar\n2- Evli\n");
    scanf("%i",&num);

    int cocukSayisi = 0;
    if(num == 2) {
        printf("Kac cocugunuz var: ");
        scanf("%i", &cocukSayisi);

        printf("Evli ve %i cocuklusunuz", cocukSayisi);
    } else {
        printf("Bekarsiniz");
    }
    return 0;
}
