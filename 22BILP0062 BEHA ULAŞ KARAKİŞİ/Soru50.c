#include <stdio.h>
#include <string.h>

/*
 * Girilen 2 kelimeden string.h kütüphanesinde bulunan
 * strlen fonksiyonu kullanarak hangisinin daha büyük
 * olduğunu bulup conditional operator kullanarak ekrana yazdıran program
 */

int main() {







    char kelime[255];
    printf("Bir kelime girin: ");
    scanf("%s", kelime);


    char kelime2[255];
    printf("Bir kelime daha girin: ");
    scanf("%s", kelime2);



    printf("'%s' kelimesi '%s' kelimesinden daha uzun", strlen(kelime) > strlen(kelime2)?kelime:kelime2, strlen(kelime) > strlen(kelime2)?kelime2:kelime);



    return 0;
}


