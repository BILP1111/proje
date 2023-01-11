#include <stdio.h>
int main(){
	int toplam=0;
	int sayac=0;
	int ogrsay=0;
	int puan[50];
	//Deðer Girilir.
	
	printf("\n Puan Hesaplama\?\t");//Kiþinin gireceði notlarý hesaplayan c kodlamasý.
	printf("\n%Kac Ogrencinin notu girilecek?:",ogrsay+1);
	scanf("%d",&ogrsay);
	
	for(sayac=0;sayac<=ogrsay-1;sayac++)
	{
		printf("%d. Ogrencinin puani:",sayac+1);//Öðrencinin puaný istenir.
		scanf("%d",&puan[sayac]);
		toplam = toplam+puan[sayac];
	}
	printf("\n Ogrenci Sayisi = %d",sayac);
	printf("\n Puan Toplami = %d",toplam);
	printf("\n Puan Ortalamasi = %.1f\n",float(toplam)/sayac);//Ekrana istenilen bilgileri yazar.
	return 0;
}
