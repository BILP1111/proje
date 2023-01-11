#include <stdio.h>

int main(void)
{
	int daireyaricapi;
	float pi=3.14,dairealan,dairecevre;

	printf("Dairenin yari capini girin: "); 
	scanf("%d",&daireyaricapi);

 
	dairealan = pi * daireyaricapi * daireyaricapi; 
	printf("Dairenin alani: %f \n",dairealan);

	dairecevre = 2 * pi * daireyaricapi;     
	printf("Dairenin cevresi : %f", dairecevre);
}
