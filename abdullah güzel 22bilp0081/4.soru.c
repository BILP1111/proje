/* bir kenarı verilen karenin alanı ve çevresini hesaplayan program */
#include<stdio.h>
int main()

{
	int kareKenari;
	int cevre;
	int alan;
	
	printf("kare kenari giriniz : ");
	scanf("%d",&kareKenari);
	
	cevre=kareKenari*4;
	alan=kareKenari*kareKenari;
	
	printf("cevre : %d \n",cevre);
	printf("alani : %d",alan);
	getch();
	
}