//ya�� girilen ki�inin se�imlerde oy verme yeterlili�i olup olmad�g�n� test eden program

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
