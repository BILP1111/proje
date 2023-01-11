/* * karakteri ile piramit olusturan program */


#include <stdio.h>
int main()
{
	int i,j,rows;
	
	printf("Satir sayisini girin : ");
	scanf("%d",&rows);
	
	for(i=1;i<=rows; ++i)
	{
		for(j=1; j<=i; ++j)
		
		{
			printf("*");
		}
		printf("\n");
		
		
	}
	return 0;
}
