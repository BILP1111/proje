#include <stdio.h>

/*
 * Girilen bir sayının mükemmel olup olmadığını for döngüsünde
 * tam bölündüğü sayıların toplamının sayının kendisini yapıp yapmadığını
 * kontrol eden yapıyor ise mükemmel yapmıyor ise mükemmel olmadığını olduğunu yazdıran program
 */

int main() {



    int sayi, bolenlertoplam = 0;

    printf("Bir sayı giriniz: ");
    scanf("%i",&sayi);

    for (int i = 0; i < sayi; ++i) {
        if(sayi % i == 0) bolenlertoplam += i;
    }

    if(bolenlertoplam == sayi) printf("%i sayısı mükemmel bir sayıdır", sayi);
    else printf("%i sayısı mükemmel bir sayı değildir", sayi);


    return 0;
}
