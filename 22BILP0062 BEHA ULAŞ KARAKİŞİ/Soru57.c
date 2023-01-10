#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * Kullanıcı tarafından girilen bir cümlenin ctype.h kütüphanesinde bulunan
 * toupper fonksiyonu ile harflerinin büyük harflere çevrilmiş halini ekrana yazıran program
 */
int main() {






    char cumle[255];
    printf("Bir cümle girin: ");
    scanf("%[^\n]", cumle);

    int length = strlen(cumle);

    for (int i = 0; i < length; ++i) {
        cumle[i] = toupper(cumle[i]);
    }

    printf("Verilen cümlede kelimelerin düzenlenmiş hali: %s", cumle);





    return 0;
}


