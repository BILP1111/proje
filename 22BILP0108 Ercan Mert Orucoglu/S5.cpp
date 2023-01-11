#include <stdio.h>

int main(void) 
{
    int kenar1, kenar2, alan, cevre; /*Dikdörtgenin kenarlarýný deðiþken olarak tanýmladým*/

    printf("Lutfen dikdortgenin bir kenarini girin: "); /* Dikdörtgenin 1. kenarýný isteyip istedikten sonra girilen deðeri okuttum. */
    scanf("%d", &kenar1);

    printf("Lutfen dikdortgenin diger kenarini girin: ");
    scanf("%d", &kenar2);

    alan = kenar1 * kenar2; /*Girilen deðerlere göre dikdörtgenin alanini ve cevresini hesapla*/
    cevre = 2 * (kenar1 + kenar2);

    printf("Dikdortgenin alani: %d\n", alan); /*Sonuçalarý ekrana yaz*/
    printf("Dikdortgenin cevresi: %d", cevre);

}
