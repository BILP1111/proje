#include <stdio.h>


/*
 * Girilen bir sayının asal olup olmadığını for döngüsü ile bulan ve ekrana yazdıran program
 * 2 den verilen sayıya kadar birer birer gidip i nin sayıya bölünüp bölünmediğini test ediyor
 * bölünüyor ise asal değildir diyor. Son olarak i sayısı verilen sayıya eşit olduğunda hiçbir
 * bölünme bulunamadığından dolayı asal olduğunu yazıyor.
 */
int main() {
    int sayi;

    printf("Bir sayı giriniz: ");
    scanf("%i", &sayi);


    for(int i = 2; i <= sayi; i++) {


        if(i == sayi) {
            printf("%i sayısı asal.", sayi);
            break;
        }

        if(sayi%i == 0) {
            printf("%i sayısı %i sayısına bölünür bu yüzden asal değildir", sayi, i);
            break;
        }


    }
    return 0;
}


