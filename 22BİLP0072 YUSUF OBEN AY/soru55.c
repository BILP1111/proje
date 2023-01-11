#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[200];
    printf("kelime giriniz:");
    scanf("%s", kelime);

    printf("karakter sayisi: %s", strrev(kelime));
    return 0;
}