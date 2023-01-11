#include <stdio.h>
int main()
{
	int kk,uk,cevre,alan;
	printf("Dikdortgenin kisa kenarini giriniz\n", kk);
	scanf("%d",&kk);
	printf("Dikdortgenin uzun kenarini giriniz", uk);
	scanf("%d", &uk);
	cevre=2*(kk*uk);
	printf("Dikdortgenin cevresi %d dir.",cevre);
	alan=uk*kk;
	printf("Dikdortgenin alani %d dir.",alan);
	return 0;
	
}