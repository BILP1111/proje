#include <stdio.h>

int main()
{
	int yaricap;
	float alan,cevre,pi;
	printf("Dairenin yaricapini giriniz\n");
	scanf("%d",&yaricap);
	pi=3,14;
	alan= pi*yaricap*yaricap;
	printf("Dairenin alani %f dir.\n",alan);
	cevre=2*pi*yaricap;
	printf("Dairenin cevresi %f dir.",cevre);
	return 0;
}