#include <stdio.h>

main()
{
	int sayi1,sayi2; /* int de�i�kenlerini atad�m*/
	int secim;
	
	printf("1.Sayiyi secin: "); /*Kullan�c�n�n 1. ve 2. say�y� se�mesini istedim ve girilen say�lar� okuttum*/
	scanf("%d",&sayi1);
	printf("2.Sayiyi girin: ");
	scanf("%d",&sayi2);
	
	printf("Hangi islemi yapmak istiyorsaniz seciniz\n");/* if else komutu ile se�imleri tan�taca��mdan dolay� se�im yapmas�n� istedim kullan�c�n�n*/
	printf("1.Toplama\n");
	printf("2.Cikarma\n");
	printf("3.Carpma\n");
	printf("4.Bolme\n");
	
	printf("Seciminizi girin: "); /*Yapt��� se�imi okuttum.*/
	scanf("%d",&secim);
	
	if(secim == 1){ /*�f else komutu ile se�ti�i se�ime g�re matematiksel i�lemleri yapt�rd�m ve en sonda else komutu ile yanl�� se�im yapt��� halde yazd�rmak istedi�im �eyi yapmas�n� istedim.*/
		printf("Toplama isleminin sonucu %d",sayi1 + sayi2);
	}
	else if(secim == 2){
		printf("Cikarma isleminin sonucu %d",sayi1 - sayi2);
	}
	else if(secim == 3){
		printf("Carpma isleminin sonucu %d",sayi1 * sayi2);
	}else if(secim == 4){
		printf("Carpma isleminin sonucu %d",sayi1 / sayi2);
	}
	else{
		printf("Dogru secim yap");
	}
}
