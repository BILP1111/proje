//iki kenarý girilen dikdörtgenin karsi ve çevresini bulan program


#include <stdio.h>
int main()
{
	int kenar;
	int kenar2;
	int cevre;
	int alan;
	
	printf("ilk kenari giriniz:");
	scanf("%d",&kenar);
	
	printf("ikinci kenari giriniz:");
	scanf("%d",&kenar2);
	
	cevre=(kenar*2)+(kenar2*2);
	alan=kenar*kenar2;
	
	printf("cevre: %d\n",cevre);
	printf("alani:%d",alan);
	getch();
}
