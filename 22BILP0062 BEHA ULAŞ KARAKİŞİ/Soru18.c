#include <stdio.h>

/*
 * Dört işlem ve mod alma işlemi yapabilen bir program, kullanıcıdan önce işlem no istiyor ardından
 * 2 sayı istiyor. Verilen işlem numarasına göre 2 sayıyı işleme sokup sonucu yazdırıyor.
 */

int main() {
    int islemNo;
    int sayi1, sayi2;
    printf("Hangi işlemi yapmak isterseniz?\n");
    printf("1-Toplama\n");
    printf("2-Çıkarma\n");
    printf("3-Çarpma\n");
    printf("4-Bölme\n");
    printf("5-Mod\n");


    scanf("%i",&islemNo);

    printf("İlk sayıyı giriniz: ");
    scanf("%d", &sayi1);

    printf("İkinci sayıyı giriniz: ");
    scanf("%d", &sayi2);



    if(islemNo == 1) printf("Sayıların toplamı: %d", sayi1+sayi2);
    else if(islemNo == 2) printf("Sayıların farkı: %d", sayi1-sayi2);
    else if(islemNo == 3) printf("Sayıların çarpımı: %d", sayi1*sayi2);
    else if(islemNo == 4) printf("Sayıların bölümü: %.2f", (float)sayi1/sayi2);
    else if(islemNo == 5) printf("Sayıların modu: %d", sayi1%sayi2);





    return 0;
}
