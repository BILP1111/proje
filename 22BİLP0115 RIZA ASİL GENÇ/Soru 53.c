#include <stdio.h>
#include <string.h>
#include <wchar.h>

int main() 
{
    wchar_t kelime[255];
    printf("Kelime girin: ");

    wscanf(L"%s",kelime);

    for (int i = 0; i < wcslen(kelime); ++i) 
	{
        if(kelime[i] == L'Ç') 
		{
            printf("asdkjasdlk");
        }
    }
    printf("Girdiginiz kelimenin uzunlugu %lu karakter", strlen(kelime));
    return 0;
}
