/* Sayý piramidi olusturan program */

#include <stdio.h>
int main()
{
	int i,j,rows;
	
	printf("Satir sayisini girin: ");
	scanf("%d",&rows);
	
	for(i=1; i<=rows; ++i)
	{
		for(j=1; j<=1; ++j)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
