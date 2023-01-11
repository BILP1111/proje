//Kullanýcýdan gidilicek mesafe ve varýþ zamanýný sorarak olmasý gereken hýzý hesaplayan program

#include <stdio.h>
int main()
{
	float mesafe;
	int zaman;
	float hiz;
	
	printf("\n Gidilicek mesafe(m):");
	scanf("%f",&mesafe);
	
	printf("\n Varis zamaný (sn):");
	scanf("%d",&zaman);
	
	hiz=mesafe/zaman;
	
	printf("\n Hiziniz:%.2f m/s olmalidir.",hiz);
	
	getch();
	
	
}
