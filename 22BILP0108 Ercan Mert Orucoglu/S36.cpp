#include <stdio.h>
 
int main(void)
{
    int toplam = 0, sayac = 0, ogrencisayisi = 0, puan[50]; // int de�eri ile 4 de�i�ken tan�mlad�m
	
	printf("Kac ogrencinin notu girilecek? : ",ogrencisayisi+1); // Printf komutu ile kullan�c�dan ka� ��renci say�s� girilmesini sorup girilen de�ere g�re +1 verilmesini istedim.
	scanf("%i",&ogrencisayisi); // scanf komutu ile girilen say�y� okuttum
	fflush(stdin);
	
	for(sayac=0 ; sayac <= ogrencisayisi-1 ; sayac++ ) // for d�ng�s� ile bir saya� olu�turdum
	{
	printf("%i. ogrenicinin puani : ",sayac+1);
	scanf("%i",&puan[sayac]);
	fflush(stdin);
	
	toplam = toplam + puan[sayac];
}   
    printf("\nOgrenci Sayisi= %i",sayac); // kullan�c�dan de�erleri al�p ekrana yazd�rd�m.
	printf("\nPuan Toplami= %i",toplam);
	printf("\nPuan Ortalamasi= %d",(toplam)/sayac);
}
