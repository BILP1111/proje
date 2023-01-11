//bir kenarý girilen karenin alaný ve çevresini hesaplayan program

#include <stdio.h>
int main()
{
	int KareKenari;
	int cevre;
	int alan;
	
	printf("Kare kenarini giriniz:");
	scanf("%d",&KareKenari);
	
	cevre=KareKenari*4;
	alan=KareKenari*KareKenari;
	
	printf("cevre: %d\n",cevre);
	printf("alani: %d",alan);
	getch();
	
}


