//Kullan�c�dan iki say� girmesini isteyen ve say�lar�n b�y�kl���n� kar��la�t�ran program

#include <stdio.h>

main ()
{
	
	int sayi1,sayi2;
	printf("�lk sayiyi giriniz:");
	scanf("%d", &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d", &sayi2);
	
	if(sayi1==sayi2){
		printf("sayilar esittir");
	}
	if(sayi1<sayi2){
		printf("%d buyuktur",sayi2);
	}
		if(sayi1>sayi2){
		printf("%d buyuktur",sayi1);
	}
	
	getch();
	}	
