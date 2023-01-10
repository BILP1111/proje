#include <stdio.h>
#include <string.h>

typedef struct Ogrenci {
    char ad[255];
    int yas;
} Ogrenci;


/*
 * struct yapısı ile verilmiş olan sayıda öğrencinin adını ve yaşını
 * alan ve ardından bubble sort algoritması ile sıralandıran son olarak
 * for loop yardımı ile ekrana yazılmasını sağlayan program
 */
int main() {







    int ogrenciCount;
    printf("Öğrenci sayısını giriniz: ");
    scanf("%i",&ogrenciCount);

    Ogrenci ogrenciler[ogrenciCount];

    for (int i = 0; i < ogrenciCount; ++i) {
        int yas;
        char ad[255];

        printf("%i. öğrenci adını giriniz: ", i+1);
        scanf(" %[^\n]",ad);

        printf("%i. öğrenci yaşını giriniz: ", i+1);
        scanf("%i", &yas);

        ogrenciler[i] = (Ogrenci) {.yas = yas};
        strcpy(ogrenciler[i].ad, ad);
    }


    for (int i = 0; i < ogrenciCount; i++) {
        for (int x = i+1; x < ogrenciCount; x++) {
            if(ogrenciler[i].yas > ogrenciler[x].yas) {
                Ogrenci valTemp = ogrenciler[i];
                ogrenciler[i] = ogrenciler[x];
                ogrenciler[x] = valTemp;
            }
        }
    }

    printf("Öğrencilerin küçük yaştan büyük yaşa doğru sıralanışları: \n");

    for (int i = 0; i < ogrenciCount; ++i) {
        printf("%i- %s (%i)\n", i+1, ogrenciler[i].ad, ogrenciler[i].yas);
    }



    return 0;
}


