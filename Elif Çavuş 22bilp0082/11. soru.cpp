#include <stdio.h>
#include <math.h>

int main()
{
	int x1,y1,x2,y2;
	double mes;
	
	printf("1.nokta (x,y)= ");
	scanf("%d \n %d",&x1,&y1);
	printf("2. nokta (x,y)= ");
	scanf("%d \n %d",&x2,y2);
	
	mes = sqrt(pow((y2-y1),2) + pow((x2-x1),2));
	printf("\nMesafe = %f",mes);
	
	return 0;
}