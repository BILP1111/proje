#include <stdio.h>
#include <math.h>

int main() 
{

    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    for (int i = 0; i < 11; ++i) 
	{
        printf("%ix%i = %i\n",sayi, i, sayi*i);
    }
     return 0;
}
