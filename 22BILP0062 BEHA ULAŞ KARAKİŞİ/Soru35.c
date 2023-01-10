#include <stdio.h>



/*
 * Bir sayının asal olup olmadığını döndüren fonksiyon
 */
int asalMi(int sayi) {

    for (int i = 0; i < sayi; ++i) {
        if(i <= 1 || sayi == i || sayi % i != 0) {
            continue;
        }

        return 0;

    }

    return 1;
}

/*
 * Girilen sayının asal olup olmadığını kontrol eden asal ise
 * ondan sonraki ilk 10 asal sayıyı while döngüsü ile bulup ekrana yazdıran program
 */
int main() {



    int sayi;

    printf("Bir asal sayı giriniz: ");
    scanf("%i",&sayi);



    if(asalMi(sayi) == 0) {
        printf("Girdiğiniz sayı asal bir sayı değildir.");
    } else {
        int count = 0;
        int devamSayi = sayi;
        printf("%i sayısından sonraki ilk 10 asal sayı: ",sayi);

        while(count < 10) {
            devamSayi++;


            if(asalMi(devamSayi) == 1) {
                count++;
                printf("%i, ", devamSayi);
            }
        }
    }




    return 0;
}


