#include <stdio.h>

int main()
{
	int sayi = 0;
	int toplam = 0;
	int rakam = 0;
	
		printf("Bir sayi giriniz : ");
		scanf("%i",&sayi);
		
		while( sayi > 0 )
		{
	
		rakam = sayi%10;
		toplam = toplam + rakam;
		sayi = sayi / 10;
		}
		
		printf("Rakamlari toplami : %i ",toplam);
		
		return 0;
}