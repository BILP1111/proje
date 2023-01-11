#include <stdio.h>


int carpimBul(int carp, int sayi) 
{
    printf("%ix%i = %i\n", carp, sayi, carp*sayi);
}
int main() 
{

    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%i",&sayi);

    for (int i = 1; i <= 10; ++i) 
	{
        carpimBul(i, sayi);
    }
    return 0;
}
