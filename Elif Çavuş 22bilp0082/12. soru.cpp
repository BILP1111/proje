#include <stdio.h>
int main()
{
	int yas;
	printf("Yasinizi giriniz\n",yas);
	scanf("%d",&yas);
	
	if (yas>=18)
	{
		printf("Yasi oy vermeye yeterlidir.",yas);
	}
	else 
	{
		printf("Yasi oy vermeye yeterli degildir.");
	}
	return 0;
}