#include <stdio.h>

int main(void) 
{
    int kenar1, kenar2, alan, cevre; /*Dikd�rtgenin kenarlar�n� de�i�ken olarak tan�mlad�m*/

    printf("Lutfen dikdortgenin bir kenarini girin: "); /* Dikd�rtgenin 1. kenar�n� isteyip istedikten sonra girilen de�eri okuttum. */
    scanf("%d", &kenar1);

    printf("Lutfen dikdortgenin diger kenarini girin: ");
    scanf("%d", &kenar2);

    alan = kenar1 * kenar2; /*Girilen de�erlere g�re dikd�rtgenin alanini ve cevresini hesapla*/
    cevre = 2 * (kenar1 + kenar2);

    printf("Dikdortgenin alani: %d\n", alan); /*Sonu�alar� ekrana yaz*/
    printf("Dikdortgenin cevresi: %d", cevre);

}
