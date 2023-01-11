#include <stdio.h>

int main()
{
	float snot = 0;
	
	
	printf("\n bir not girin (0-100): ");
	scanf("%f", &snot);
	
	if( snot >= 85 && snot <= 100 )
	printf("\n pekiyi");
	
	if( snot >= 70 && snot <= 84 )
	printf("\n iyi");
	else if( snot >= 51 && snot < 69 )
	printf("\n Orta");
	else if( snot<68 && snot >=50 )
	printf("\n Gecer");
	else if( snot < 50 )
	printf("\n KALDI");
	else 
	printf("\n Gecersiz not!");
	
	return 0;
}