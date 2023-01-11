#include <stdio.h>

int main() 
{
    int kenar;//Deðer Atama

    printf("Lutfen karenin bir kenarinin uzunlugunu girin: ");
    scanf("%d", &kenar);

    int alan = kenar * kenar;
    int cevre = 4 * kenar;
//Alan ve Çevre Formülleri 
    printf("Karenin alani: %d\n", alan);
    printf("Karenin cevresi: %d\n", cevre);
//Alaný ve Çevreyi ekrana yazdýran program
    return 0;
}

