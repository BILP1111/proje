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

    for (int i = 0; i < length-1; ++i) {
        if(cumle[i] == ' ') cumle[i+1] = toupper(cumle[i+1]);
    }

    printf("Verilen cümlede kelimelerin ilk harfi düzenlenmiş hali: %s", cumle);





    return 0;
}


