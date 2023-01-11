#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[200];
    char karakter;
    printf("kelime giriniz:");
    scanf("%s", kelime);
    printf("Karakter giriniz:");
    scanf("%c", karakter);
    int count = 0;
    for (int i = 0; i < strlen(kelime); i++)
    {
        if (kelime[i] == karakter)
            count++;
    }

    printf("karakter sayisi: %d", count);
    return 0;
}