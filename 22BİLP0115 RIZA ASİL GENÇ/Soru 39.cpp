#include <stdio.h>
#include <limits.h>

int main() 
{

    int sayilar[10];

    for (int i = 0; i < 10; ++i) 
	{
        printf("Bir sayi giriniz: ");
        int t;
        scanf("%i",&sayilar[i]);
    }

    printf("Cift Sayilar: ");
    for (int i = 0; i < 10; ++i) 
	{
        if(sayilar[i] % 2 == 0) printf("%i,",sayilar[i]);
    }


    printf("\nTek Sayilar: ");
    for (int i = 0; i < 10; ++i) 
	{
        if(sayilar[i] % 2 == 1) printf("%i,",sayilar[i]);
    }

    printf("\nAsal Sayilar: ");
    for (int i = 0; i < 10; ++i)
	{
        int found = 0;
        for (int j = 2; j < sayilar[i]; ++j) 
		{
            if(sayilar[i] % j == 0) 
			{
                found = 1;
                break;
            }
        }

        if(!found) printf("%i,", sayilar[i]);
    }
    return 0;
}
