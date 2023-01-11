//yaþý girilen kiþinin seçimlerde oy verme yeterliliði olup olmadýgýný test eden program

#include<stdio.h>
int main()
{
	int yas;
	
	printf("Yasinizi giriniz:");
	scanf("%d",&yas);
	
	if(yas >= 18)
	{
		printf("Oy verme yeterliligine sahipsiniz\n");
	}
	else
	{
		printf("Oy verme yeterliligine sahip degilsiniz\n");
	}
	return 0;
}
