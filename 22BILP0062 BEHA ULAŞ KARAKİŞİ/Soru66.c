#include <stdio.h>
#include <string.h>

typedef struct Kisi {
    char ad[255];
    int yas;
    char araba[255];
    int arabaFiyati;
} Kisi;

/*
 * Kisi struct yardımı ile ad, yas, araba ve fiyatını soran ardından
 * bunları structa çevirip ekrana yazdıran program
 */

int main() {






    char ad[255];
    printf("Kişinin adını girin: ");
    scanf("%[^\n]", ad);

    int yas;
    printf("Kişinin yaşını girin: ");
    scanf("%i", &yas);


    char araba[255];
    printf("Kişinin araba modelini girin: ");
    scanf(" %[^\n]", araba);

    int arabaFiyat;
    printf("Kişinin arabasının fiyatını girin: ");
    scanf("%i", &arabaFiyat);


    Kisi kisi = {.yas = yas, .arabaFiyati = arabaFiyat};
    strcpy(kisi.ad, ad);
    strcpy(kisi.araba, araba);


    printf("Kişinin bilgileri: \nAdı: %s\nYaşı: %i\nArabası: %s\nArabasının Fiyatı: %i", kisi.ad, kisi.yas, kisi.araba, kisi.arabaFiyati);




    return 0;
}


