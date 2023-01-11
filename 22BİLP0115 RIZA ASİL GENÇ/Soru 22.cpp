#include <stdio.h>
#include <math.h>

int main() 
{
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%i", &sayi);




    for(int i = 0; i < sayi; i++) 
	{
        if(i == 0 || i == 1) continue;

        if(i == sayi) 
		{
            printf("%i sayisi asal.", sayi);
            break;
        }

        if(sayi%i == 0) 
		{
            printf("%i sayisi %i sayisina bolunur bu yuzden asal degildir", sayi, i);
            break;
        }


    }
    return 0;
}
