#include <stdio.h>

int main(void)
{
    float boy[5],kilo[5], top_kilo=0,top_boy=0, ort_boy=0,ort_kilo=0; // int ve float de�i�kenlerini atad�m.
    int n = 0;
	
	printf("\n Boylarizi ve Kilolarinizi girin: "); // ba�l�klar� yaz�rd�m.
	printf("\n =============");
	
	for( n=0; n<5; n++) // for komutu ile 5 ��rencinin boy ve kilolar�n� ald�m ve hesaplama yapt�rd�m.
{
    printf("\n %i. Ogrencinin",n+1);
	printf(" Boyu : ");
	scanf("%f",&boy[n]);
	
	printf("Kilosu : ");
	scanf("%f",&kilo[n]);
	top_boy = top_boy + boy[n];
	top_kilo = top_kilo + kilo[n];
 }
 
    ort_boy = top_boy/5; // hesaplamalar
    ort_kilo = top_kilo/5;
    
	printf("\n Kilo ortalamasi : %.2f ",ort_boy); // sonuclar
	printf("\n Boy ortalamasi : %.2f ",ort_kilo);
}
