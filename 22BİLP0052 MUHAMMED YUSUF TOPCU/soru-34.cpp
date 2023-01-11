#include <stdio.h>

int main()
{
int sayi;

printf("\n\tMUKEMMEL SAYI BULMA");
printf("\nSayi giriniz:");//Ýstenilen sayýyý giriniz.
scanf("%d",&sayi);

int sum = 0;

for(int j=1;j<sayi;j++)//For döngüsü ile yapmak istediðimiz iþlemi yaparýz.
{
	if(sayi%j==0)
	{
		sum=sum+j;
	}
}	
if(sum==sayi)
{
	printf("%d bir mukemmel sayidir.");
}
else
{
	printf("%d bir mukemmel sayi degildir.");//Mükemmel sayý giriniz.
}
return 0;
}
