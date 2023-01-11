#include <stdio.h>
int main(void)
{
	int yas;
	
	printf("Secimlerde oy verip/veremediginizi ogrenmek icin yasinizi giriniz: ");
	scanf("%d",&yas);
	
	if (yas >= 18){
		printf("Secimlerde oy verebilirsiniz.\n");
	}else{
		printf("Secimlerde oy veremezsiniz.\n");
	}
}
