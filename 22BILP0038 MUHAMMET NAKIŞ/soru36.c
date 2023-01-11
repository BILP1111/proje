#include <stdio.h> // KÜTÜPHANE TANIMLAMA

int main() {
	
    int ogrenciSayisi,i; // SAYISAL DEÐÝÞKEN OLARAK DEÐERLERÝ TANIMLIYORUZ

    printf("Kac ogrenciniz bulunmakta: "); // KULLANICIDAN DEÐER ALMA
    scanf("%d",&ogrenciSayisi); // DEÐERÝ HAFIZADA TUTMA



    int toplam = 0; // SAYISAL DEÐÝÞKEN OLARAK toplam DEÐERÝNÝ TANIMLIYORUZ
    for (i = 0; i < ogrenciSayisi; ++i) { // i YÝ 0 A EÞÝTLÝYORUZ i ogrenciSayisi OLANA KADAR i yi 1 ARTTIRIYORUZ
        printf("%d. öðrencinin notunu girin: ", i+1); // ÖGRENCÝNÝN NOTUNU  GÝRDÝRÝYORUZ i DEÐERÝNÝ 1 ARTTIRIYOR
        int t; // SAYISAL DEÐÝÞKEN OLARAK t DEÐERÝNÝ TANIMLIYORUZ
        scanf("%d",&t); // DEÐERLERÝ HAFIZADA TUTMA

        toplam += t; // toplam DEÐERÝNÝ toplam + t DEÐERÝNÝ TOPLAYIP DEÐERE EÞÝTLÝYORUZ
    }

    printf("%d ogrencinin notlarýnýn toplami: %d \n ortalamasý: %.2f dir", ogrenciSayisi, toplam, (float)toplam/ogrenciSayisi); // ogrenciSayisi, toplam, ONDALIKLI SAYI OLARAK toplam/ogrenciSayisi DEÐERLERÝ EKRANA YAZDIRIYORUZ


    return 0;
}

