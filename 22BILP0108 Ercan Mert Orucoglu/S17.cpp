#include <stdio.h>

/*Ýlk olarak deðiþken olarak yaþý tanýmladým ve kullanýcýdan yaþýný girmesini isteyip scanf komutu ile girilen yaþý okuttum
Sonrasýnda if-else komutu ile girilen yaþlarýn belirlediðim karþýlýðý olan hayat dilimlerini if-else ile tanýmladým ve en sonda
65 üstü bir yaþ girildiðinde yaþlýsýnýz diye yazdýrmak istedim.*/

int main(void) {
    int yas;
    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &yas);

    if (yas < 0) {
        printf("Geçersiz yaþ lutfen tekrar giriniz.\n");
    } else if (yas < 13) {
        printf("Cocuksunuz\n");
    } else if (yas < 20) {
        printf("Gencsiniz.\n");
    } else if (yas < 65) {
        printf("Yetiskinsiniz.\n");
    } else {
        printf("Yaslisiniz.\n");
    }
}
