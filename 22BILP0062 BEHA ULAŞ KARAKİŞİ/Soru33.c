#include <stdio.h>

/*
 * Önce numara sayısını isteyen ardından bu sayıyı for ile çalıştırıp
 * hepsinde istenen sayıyı toplayıp ekrana yazdıran program
 */

int main() {



    int sayi, kalansayi, toplam = 0;

    printf("Bir sayı girin: ");
    scanf("%i", &sayi);
kalansayi = sayi;

    while(kalansayi != 0) {
        toplam += (kalansayi % 10);
        kalansayi /= 10;
    }

    printf("%i sayısının rakamlarının toplamı %d eder", sayi, toplam);

    return 0;
}
