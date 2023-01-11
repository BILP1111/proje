#include <stdio.h>
#include <string.h>

int main()
{
    char kelime[200];
    printf("kelime giriniz:");
    scanf("%s", kelime);

    for (int i = 0; i <= strlen(kelime); i++)
    {
        if (kelime[i] >= 65 && kelime[i] <= 90)
            kelime[i] = kelime[i] + 32;
    }

    printf("karakter sayisi: %s", strrev(kelime));
    return 0;
}