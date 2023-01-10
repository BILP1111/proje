#include <stdio.h>
#include <string.h>

typedef struct Ogrenci 
{
    char ad[255];
    int yas;
} Ogrenci;
int main() 
{
    int ogrenciCount;
    printf("Ogrenci sayisini giriniz: ");
    scanf("%i",&ogrenciCount);

    Ogrenci ogrenciler[ogrenciCount];

    for (int i = 0; i < ogrenciCount; ++i) 
	{
        int yas;
        char ad[255];

        printf("%i. ogrenci adini giriniz: ", i+1);
        scanf(" %[^\n]",ad);

        printf("%i. ogrenci yasini giriniz: ", i+1);
        scanf("%i", &yas);

        ogrenciler[i] = (Ogrenci) {.yas = yas};
        strcpy(ogrenciler[i].ad, ad);
    }
    for (int i = 0; i < ogrenciCount; i++) 
	{
        for (int x = i+1; x < ogrenciCount; x++) 
		{
            if(ogrenciler[i].yas > ogrenciler[x].yas) 
			{
                Ogrenci valTemp = ogrenciler[i];
                ogrenciler[i] = ogrenciler[x];
                ogrenciler[x] = valTemp;
            }
        }
    }
    printf("Ogrencilerin kucuk yastan buyuk yasa dogru siralanislari: \n");

    for (int i = 0; i < ogrenciCount; ++i) {
        printf("%i- %s (%i)\n", i+1, ogrenciler[i].ad, ogrenciler[i].yas);
    }
    return 0;
}
