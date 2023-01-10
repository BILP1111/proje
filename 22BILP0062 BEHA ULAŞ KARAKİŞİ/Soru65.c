#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * Kullanıcı tarafından girilen bir cümlenin ctype.h kütüphanesinde bulunan
 * toupper fonksiyonu ile sadece bir önceki harfi boşluk olan harflerin
 * büyük harflere çevrilmiş halini ekrana yazıran program
 */

int main() {






    char cumle[255];
    printf("Bir cümle girin: ");
    scanf("%[^\n]", cumle);

    int length = strlen(cumle);
    cumle[0] = toupper(cumle[0]);
    for (int i = 1; i < length; ++i) {
        if(cumle[i-1] == ' ') cumle[i] = toupper(cumle[i]);
    }

    printf("Cümlenin düzenlenmiş hali: %s", cumle);





    return 0;
}


