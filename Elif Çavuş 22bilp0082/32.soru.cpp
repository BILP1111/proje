#include <stdio.h>
#include <conio.h>

int main()
{
	int sayi1;
	int sayi2;
	int sonuc = 0;
	char devam;
	char islem = ' ';
	do
	{
	
	printf("\nBirinci sayiyi giriniz : ");
	scanf("%i",&sayi1);
	fflush(stdin);
	
	printf("\nIkinci sayiyi giriniz : ");
	scanf("%i",&sayi2);
	fflush(stdin);
	
	printf("\nYapilacak islemi seciniz : ");
	scanf("%c",&islem);
	fflush(stdin);

	if( islem == '+')
		sonuc = sayi1 + sayi2;
	
	else if(islem == '-')
		sonuc = sayi1 - sayi2;
	
	else if(islem == '*')
		sonuc = sayi1 * sayi2;
		
	else if(islem == '/')
	{
		if(sayi2 > 0)
			sonuc = sayi1 / sayi2;
		else
			printf("\nBolme islemi hatasi! ");
	}
	
	else 
		printf("\nGecerli bir islem giriniz : ");
			
	printf("\n\n %.2i %c %.2i =  %.3i",sayi1,islem,sayi2,sonuc);
	
	printf("\n\n Baska bir islem yapicak misiniz? : ");
	devam = getchar();
	fflush(stdin);
	}
	while(devam == 'E' || devam == 'e');
	
}