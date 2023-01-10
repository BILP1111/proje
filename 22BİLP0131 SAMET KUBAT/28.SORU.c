#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Bir metin girin: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Girilen metin büyük harflerle: %s\n", str);

    return 0;
}


// Metni büyük harflere çevirir ve çevrilmiþ metin ekrana yazdýrýlýr.//

