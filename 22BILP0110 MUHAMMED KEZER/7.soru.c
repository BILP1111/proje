//Kullan�c�dan gidilicek mesafe ve var�� zaman�n� sorarak olmas� gereken h�z� hesaplayan program

#include <stdio.h>
int main()
{
	float mesafe;
	int zaman;
	float hiz;
	
	printf("\n Gidilicek mesafe(m):");
	scanf("%f",&mesafe);
	
	printf("\n Varis zaman� (sn):");
	scanf("%d",&zaman);
	
	hiz=mesafe/zaman;
	
	printf("\n Hiziniz:%.2f m/s olmalidir.",hiz);
	
	getch();
	
	
}
