#include <stdio.h>

/*
 * Ayrı ayrı girilen ad ve soyadı birleştirip ekrana
 * yazdıran program
 */

int main() {







    char ad[255];
    printf("Adınızı girin: ");
    scanf("%s", ad);


    char soyad[255];
    printf("Soyadınızı girin: ");
    scanf("%s", soyad);



    printf("Adınız soyadınız: %s %s", ad, soyad);



    return 0;
}


