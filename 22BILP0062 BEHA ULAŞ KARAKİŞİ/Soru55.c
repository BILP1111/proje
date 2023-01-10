#include <stdio.h>
#include <string.h>

/*
 * Kullanıcı tarafından girilen bir metnin array yardımı ile
 * tam tersini ekrana yazdıran bir program.
 */

int main() {







    char cumle[255],ters[255];
    printf("Cümle girin: ");
    scanf("%[^\n]",cumle);
    int kelimeUzun = strlen(cumle);

    for (int i = 0; i < kelimeUzun; ++i) {
        ters[kelimeUzun-i-1] = cumle[i];
    }
    printf("Girdiğiniz cümlenin tersi: %s", ters);



    return 0;
}


