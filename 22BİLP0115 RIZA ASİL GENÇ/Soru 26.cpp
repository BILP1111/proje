#include <stdio.h>
#include <math.h>

int main() 
{

    int sayi, carpim;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    carpim = sayi;

    if(sayi == 0) carpim = 1;

    for (int i = 1; i < sayi; ++i) 
	{
        carpim *= i;
    }


    printf("%i! = %i", sayi, carpim);


    return 0;
}
