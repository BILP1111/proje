#include <stdio.h>
#include <string.h>

/*
 * Girilen kelime içerisinde sesli harf sayısını for loop içerisinde
 * harflerin teker teker karşılaştırılması sonucu bulup ekrana yazdıran program
 */

int main() {







    char kelime[255];
    printf("Kelime girin: ");


    scanf("%s",kelime);

    int count = 0;
    for (int i = 0; i < strlen(kelime); ++i) {
        if((kelime[i] == 'a' || kelime[i] == 'A') || (kelime[i] == 'e' || kelime[i] == 'E') || (kelime[i] == 'o' || kelime[i] == 'O') || (kelime[i] == 'u' || kelime[i] == 'U') || (kelime[i] == 'i' || kelime[i] == 'I')) {
           count++;
        }
    }






    printf("Girdiğiniz kelimede %i tane sesli harf bulunuyor", count);



    return 0;
}


