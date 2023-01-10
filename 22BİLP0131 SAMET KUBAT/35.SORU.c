#include <stdio.h>

int main(void) {
    int saat1, dakika1, saniye1, saat2, dakika2, saniye2;
    int toplam_saat, toplam_dakika, toplam_saniye;

    printf("Birinci zaman diliminin saatini girin: ");
    scanf("%d", &saat1);
    printf("Birinci zaman diliminin dakikasini girin: ");
    scanf("%d", &dakika1);
    printf("Birinci zaman diliminin saniyesini girin: ");
    scanf("%d", &saniye1);

    printf("Ikinci zaman diliminin saatini girin: ");
    scanf("%d", &saat2);
    printf("Ikinci zaman diliminin dakikasini girin: ");
    scanf("%d", &dakika2);
    printf("Ikinci zaman diliminin saniyesini girin: ");
    scanf("%d", &saniye2);

    toplam_saat = saat1 + saat2;
    toplam_dakika = dakika1 + dakika2;
    toplam_saniye = saniye1 + saniye2;

    if (toplam_saniye >= 60) {
        toplam_dakika += toplam_saniye / 60;
        toplam_saniye %= 60;
    }

    if (toplam_dakika >= 60) {
        toplam_saat += toplam_dakika / 60;
        toplam_dakika %= 60;
    }

    printf("Toplam zaman dilimi: %d saat %d dakika %d saniye\n", toplam_saat, toplam_dakika, toplam_saniye);

    return 0;
}
//kullanýcýdan birinci zaman diliminin saat, dakika ve saniye deðerlerini alýr, ikinci zaman diliminin saat, dakika ve saniye deðerlerini alýr ve toplamlarýný hesaplar.//
