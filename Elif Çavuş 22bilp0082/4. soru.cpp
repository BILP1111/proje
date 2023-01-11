#include <stdio.h>
int main()
{
	int kenar,alan,cevre;
	printf("Karenin kenarini giriniz\n",kenar);
	scanf("%d",&kenar);
	alan=kenar*kenar;
	cevre=4*kenar;
	printf("Karenin cevresi %d dir , Karenin alani %d dir\n",cevre,alan);
	return 0;
}