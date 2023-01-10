#include <stdio.h>

/*
 * While 1 döngüsü ile kullanıcı bitir islemini verene kadar sürekli çalışan
 * ve 4 işlem ve mod yapabilen bir hesap makinesi
 */

int main() {


    while (1) {
        int islemNo;
        int sayi1, sayi2;
        printf("Hangi işlemi yapmak isterseniz?\n");
        printf("1-Toplama\n");
        printf("2-Çıkarma\n");
        printf("3-Çarpma\n");
        printf("4-Bölme\n");
        printf("5-Mod\n");
        printf("6-Bitir\n");


        scanf("%i", &islemNo);
        if (islemNo == 6) break;

        printf("İlk sayıyı giriniz: ");
        scanf("%d", &sayi1);

        printf("İkinci sayıyı giriniz: ");
        scanf("%d", &sayi2);


        if (islemNo == 1) printf("Sayıların toplamı: %d\n", sayi1 + sayi2);
        else if (islemNo == 2) printf("Sayıların farkı: %d\n", sayi1 - sayi2);
        else if (islemNo == 3) printf("Sayıların çarpımı: %d\n", sayi1 * sayi2);
        else if (islemNo == 4) printf("Sayıların bölümü: %.2f\n", (float) sayi1 / sayi2);
        else if (islemNo == 5) printf("Sayıların modu: %d\n", sayi1 % sayi2);

    }





    return 0;
}
