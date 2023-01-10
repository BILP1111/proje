#include <stdio.h>
#include <string.h>

#define MAX_AD 50
#define MAX_SPORCU 3

struct Sporcu {
    char ad[MAX_AD];
    int kilo;
    int boy;
};

int main(void) {
    int i, j;
    struct Sporcu sporcu[MAX_SPORCU];

    for (i = 0; i < MAX_SPORCU; i++) {
        printf("Sporcu %d icin adi girin: ", i+1);
        scanf("%s", sporcu[i].ad);
        printf("Sporcu %d icin kilosunu girin: ", i+1);
        scanf("%d", &sporcu[i].kilo);
        printf("Sporcu %d icin boyunu girin: ", i+1);
        scanf("%d", &sporcu[i].boy);
    }

    // Sporcu adlarýný alfabetik olarak sýrala
    for (i = 0; i < MAX_SPORCU - 1; i++) {
        for (j = i + 1; j < MAX_SPORCU; j++) {
            if (strcmp(sporcu[i].ad, sporcu[j].ad) > 0) {
                struct Sporcu tmp = sporcu[i];
                sporcu[i] = sporcu[j];
                sporcu[j] = tmp;
            }
        }
    }

    printf("\nSporcu Listesi:\n");
    for (i = 0; i < MAX_SPORCU; i++) {
        printf("%d. %s %d kg %d cm\n", i+1, sporcu[i].ad, sporcu[i].kilo, sporcu[i].boy);
    }

    return 0;
}
//Programda, strcmp fonksiyonu kullanýlarak sporcu adlarý karþýlaþtýrýlýr. Eðer ilk adýn alfabedeki sýrasý ikinci adýnkinden daha büyükse, sporcu yapýlarý yer deðiþtirir.//
