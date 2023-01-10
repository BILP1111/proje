#include <stdio.h>


/*
 * verilen sayi 1 eksiltiğinde 1 veya daha küçükse verilmiş olan faktoriyel sayısını
 * döndüren eğer değilse sayi değişkenini bir azaltıp verilen faktoriyel sayısını
 * azaltılmış sayi değişkeni ile çarptıktan sonra tekrardan fonksiyonu çağıran fonksiyon
 *
 * Böylece carp(n, n) girildiği zaman
 * fonksiyon n * (n - 1) * (n - 2) * ... (n - x) <= 1 olana kadar
 * çalıştıracaktır böylece faktoriyel almış olacağız
 */
int carp(int sayi, int faktoriyel) {
    if(sayi - 1 <= 1) return (sayi == 0)?1:faktoriyel;



    sayi--;
    faktoriyel *= sayi;

    return carp(sayi, faktoriyel);
}

/*
 * Kullanıcı tarafından girilmiş olan bir sayının carp fonksiyonu
 * ile faktoriyelinin bulunmasını sağlayan program
 */

int main() {

    int sayi;
    printf("Bir sayı giriniz: ");
    scanf("%i",&sayi);

    printf("%i! = %i\n", sayi, carp(sayi, sayi));


    return 0;
}


