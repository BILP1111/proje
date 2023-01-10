#include <stdio.h>


int main() {
    int num;
    printf("Medeni haliniz: \n1- Bekar\n2- Evli\n");
    scanf("%i",&num);

    int cocukSayisi = 0;
    if(num == 2) {
        printf("Kaç çocuğunuz var: ");
        scanf("%i", &cocukSayisi);

        printf("Evli ve %i çocuklusunuz", cocukSayisi);
    } else {
        printf("Bekarsınız");
    }
    return 0;
}
