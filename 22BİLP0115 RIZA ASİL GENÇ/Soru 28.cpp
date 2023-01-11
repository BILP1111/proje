#include <stdio.h>


int main() 
{

    int sayi, sayi2;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    printf("Bir sayi daha giriniz: ");
    scanf("%d", &sayi2);

    printf("%i ile %i sayisi arasindaki sayilar: ", sayi, sayi2);

    int buyuk = (sayi >sayi2)?sayi:sayi2;
    int kucuk = (buyuk == sayi)?sayi2:sayi;
    for (int i = kucuk; i <= buyuk; ++i) 
	{

        for (int j = 0; j < i; ++j) 
		{
            if(j <= 1 || j == i || i % j == 0) continue;
            printf("%i, ", i);
            break;

        }




    }
    return 0;
}
