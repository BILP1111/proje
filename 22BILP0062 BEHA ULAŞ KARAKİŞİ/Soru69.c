#include <stdio.h>
#include <string.h>

typedef struct Kitap {
    char ad[255];
    char yazar[255];
    char konu[255];
    int sayfaSayisi;
    float fiyat;
    char yayinevi[255];
} Kitap;

/*
 * Kitap structını yazdıran fonksiyon
 */
void kitapPrint(Kitap kitapFound) {
    printf("Kitap Adı: %s\nKonusu: %s\nSayfa sayısı: %i\nYazar: %s\nYayınevi: %s\nFiyat: %.2f\n", kitapFound.ad,kitapFound.konu, kitapFound.sayfaSayisi, kitapFound.yazar, kitapFound.yayinevi, kitapFound.fiyat);
}

/*
 * Girilen sayıda kitapların girişlerini kullanıcıdan alan ve bunları bir
 * dizi üzerinde tutan ardından isim ile arama ve sıralama yapılmasını sağlayan uygulama
 */

int main() {







    int kitapCount;
    printf("Kitap sayısını giriniz: ");
    scanf("%i",&kitapCount);

    Kitap kitaplar[kitapCount];

    for (int i = 0; i < kitapCount; ++i) {
        Kitap kitap;

        printf("%i. kitabın adını giriniz: ", i+1);
        scanf(" %[^\n]",kitap.ad);

        printf("%i. kitabın yazarını giriniz: ", i+1);
        scanf(" %[^\n]", kitap.yazar);

        printf("%i. kitabın fiyatını giriniz: ", i+1);
        scanf("%f", &kitap.fiyat);

        printf("%i. kitabın konusunu giriniz: ", i+1);
        scanf(" %[^\n]", kitap.konu);

        printf("%i. kitabın sayfa sayısını giriniz: ", i+1);
        scanf("%i", &kitap.sayfaSayisi);

        printf("%i. kitabın yayınevini giriniz: ", i+1);
        scanf(" %[^\n]", kitap.yayinevi);

        kitaplar[i] = kitap;
    }


    while(1) {
        printf("----------------\nYapmak istediğiniz eylemi seçin:\n1- Kitapları sırala\n2- Kitaplarda ara\n");

        int eylemID;
        scanf("%i", &eylemID);

        switch (eylemID) {
            case 2:
                printf("Aramak istediğiniz kitabın adını giriniz: ");
                char kitapAd[255];
                scanf(" %[^\n]", kitapAd);

                Kitap kitapFound;
                int isfound = 0;
                for (int i = 0; i < kitapCount; ++i) {
                    Kitap k = kitaplar[i];
                    if(!strcasecmp(k.ad, kitapAd)) {
                        kitapFound = k;
                        isfound = 1;
                        break;
                    }
                }

                if(isfound != 0) {
                    kitapPrint(kitapFound);
                } else {
                    printf("Belirttiğiniz isimde bir kitap bulunamadı.\n");
                }
                break;
            case 1:
                printf("Sıralama çeşidini seçiniz: \n1- Fiyat (Artan)\n2- Fiyat (Azalan)\n3- Sayfa Sayısı (Artan)\n4- Sayfa Sayısı (Azalan)\n");
                int orderType;
                scanf("%i", &orderType);

                for (int i = 0; i < kitapCount; i++) {
                    for (int x = i+1; x < kitapCount; x++) {
                        Kitap a = kitaplar[i]; Kitap b = kitaplar[x];
                        if((orderType == 1 && a.fiyat > b.fiyat) || (orderType == 2 && a.fiyat < b.fiyat) || (orderType == 3 && a.sayfaSayisi > b.sayfaSayisi) || (orderType == 4 && a.sayfaSayisi < b.sayfaSayisi)) {
                            Kitap valTemp = a;
                            kitaplar[i] = b;
                            kitaplar[x] = valTemp;
                        }
                    }
                }


                printf("Sıralanmış kitaplar şu şekilde: \n");
                for (int i = 0; i < kitapCount; i++) {
                    printf("---------------\n");
                    kitapPrint(kitaplar[i]);
                }
        }

    }
    return 0;
}


