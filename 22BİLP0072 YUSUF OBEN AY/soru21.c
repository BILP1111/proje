#include <stdio.h>

int main() {
    int medeniHal = 0;
    printf("1. Evliyim");
    printf("2. Bekarim");
    scanf("%d", &medeniHal);
    int cocukSayisi = 0;
    if(medeniHal == 1) {
        printf("Cocuk sayisini giriniz:");
        scanf("%d", &cocukSayisi);
    }
    return 0;
}