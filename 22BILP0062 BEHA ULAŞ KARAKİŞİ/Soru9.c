#include <stdio.h>

/*
 * Scanf komutu ile alınan sayının 2yle bölümünden 0 kalıyor ise çift olduğunu 0 kalmıyor ise tek olduğunu
 * bulan ve ekrana yazdıran program
 */

int main() {
    int sayi;
    printf("Bir sayı giriniz: ");
    scanf("%i",&sayi);

    printf("%i sayısı %s", sayi, (sayi % 2 == 0)?"çifttir":"tektir");
    return 0;
}
