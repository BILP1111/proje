/* iki kenarı verilen dikdörtgenin alan ve çevresini hesaplayan program */
#include<stdio.h>
int main()

{
	int kenar1;
	int kenar2;
	int cevre;
	int alan;
	
	printf("ilk kenari giriniz : ");
	scanf("%d",&kenar1);
	
	printf("ikinci kenari giriniz : ");
	scanf("%d",&kenar2);
	
	cevre=(kenar1*2)+(kenar2*2);
	alan=kenar1*kenar2;
	
	printf("cevre : %d \n",cevre);
	printf("alani : %d",alan);
	getch();
	
}