#include <stdio.h>
#include <string.h>

typedef struct Kisi 
{
    char ad[255];
    int yas;
    char araba[255];
    int arabaFiyati;
} Kisi;
int main() 
{
    char ad[255];
    printf("Kisinin adini girin: ");
    scanf("%[^\n]", ad);

    int yas;
    printf("Kisinin yasini girin: ");
    scanf("%i", &yas);

    char araba[255];
    printf("Kisinin araba modelini girin: ");
    scanf(" %[^\n]", araba);

    int arabaFiyat;
    printf("Kisinin arabasinin fiyatini girin: ");
    scanf("%i", &arabaFiyat);

    Kisi kisi = {.yas = yas, .arabaFiyati = arabaFiyat};
    strcpy(kisi.ad, ad);
    strcpy(kisi.araba, araba);

    printf("Kisinin bilgileri: \nAdi: %s\nYasi: %i\nArabasi: %s\nArabasinin Fiyati: %i", kisi.ad, kisi.yas, kisi.araba, kisi.arabaFiyati);
    return 0;
}
