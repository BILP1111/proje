#include <stdio.h>
 
int main(void)
{
    int toplam = 0, sayac = 0, ogrencisayisi = 0, puan[50]; // int deðeri ile 4 deðiþken tanýmladým
	
	printf("Kac ogrencinin notu girilecek? : ",ogrencisayisi+1); // Printf komutu ile kullanýcýdan kaç öðrenci sayýsý girilmesini sorup girilen deðere göre +1 verilmesini istedim.
	scanf("%i",&ogrencisayisi); // scanf komutu ile girilen sayýyý okuttum
	fflush(stdin);
	
	for(sayac=0 ; sayac <= ogrencisayisi-1 ; sayac++ ) // for döngüsü ile bir sayaç oluþturdum
	{
	printf("%i. ogrenicinin puani : ",sayac+1);
	scanf("%i",&puan[sayac]);
	fflush(stdin);
	
	toplam = toplam + puan[sayac];
}   
    printf("\nOgrenci Sayisi= %i",sayac); // kullanýcýdan deðerleri alýp ekrana yazdýrdým.
	printf("\nPuan Toplami= %i",toplam);
	printf("\nPuan Ortalamasi= %d",(toplam)/sayac);
}
