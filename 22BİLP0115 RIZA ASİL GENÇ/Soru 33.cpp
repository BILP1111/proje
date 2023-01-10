#include <stdio.h>
#include <string.h>

int main() 
{
    int sayi, kalansayi, toplam = 0;

    printf("Bir sayi girin: ");
    scanf("%i", &sayi);
kalansayi = sayi;

    while(kalansayi != 0) 
	{
        toplam += (kalansayi % 10);
        kalansayi /= 10;
    }

    printf("%i sayisinin rakamlarinin toplami %d eder", sayi, toplam);
    return 0;
}
