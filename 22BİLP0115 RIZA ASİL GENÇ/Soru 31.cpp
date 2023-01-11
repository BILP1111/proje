#include <stdio.h>



int main() 
{

    int sayi;

    do 
	{
        printf("Bir sayi giriniz: ");
        scanf("%i", &sayi);

        printf("Girdiginiz sayi: %i\n", sayi);

    } while(sayi >= 0);
    return 0;
}
