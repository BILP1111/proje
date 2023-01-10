#include <stdio.h>
#include <string.h>

/*
 * Girilen kelimenin karakter sayısını string.h kütüphanesinde
 * bulunan strlen fonksiyonu ile bulan ardından ekrana yazdıran
 * program
 */

int main() {







    char kelime[255];
    printf("Kelime girin: ");
    scanf("%s", kelime);






    printf("Girdiğiniz kelimenin uzunluğu %lu karakter", strlen(kelime));



    return 0;
}


