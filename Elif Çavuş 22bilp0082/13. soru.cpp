#include <stdio.h>

int main()
{
	int yil;
	printf("Yili giriniz\n");
	scanf("%d",& yil);
	
	if(yil%4==0)
	{ 
	   printf("Girdiginiz yil artik yildir.");
	}
	
	else 
	{
		printf("girdiginiz yil artik yil degildir");
	}
	
	return 0;
}