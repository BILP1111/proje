#include <stdio.h>

int main()
{
int sayi;

printf("\n\tMUKEMMEL SAYI BULMA");
printf("\nSayi giriniz:");//�stenilen say�y� giriniz.
scanf("%d",&sayi);

int sum = 0;

for(int j=1;j<sayi;j++)//For d�ng�s� ile yapmak istedi�imiz i�lemi yapar�z.
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
	printf("%d bir mukemmel sayi degildir.");//M�kemmel say� giriniz.
}
return 0;
}
