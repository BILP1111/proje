#include <stdio.h>
int main()
{
	int sayi1,sayi2;
	printf("Ilk sayiyi giriniz:\n",sayi1);
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz:\n",sayi2);
	scanf("%d",&sayi2);
	
	if (sayi1>sayi2)
	{
	   printf("Birinci sayi ikinci sayidan buyuktur\n");
	}
	else 
	{
		printf("Ikinci sayi birinci sayidan buyuktur.\n");
	}
	return 0;
}