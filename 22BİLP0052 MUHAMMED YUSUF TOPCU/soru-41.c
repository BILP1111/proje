#include <stdio.h>
#include <conio.h>
 
int main()
{
 float boy[2],kilo[2];
 float top_kilo=0,top_boy=0;
 float ort_boy=0,ort_kilo=0;
 int n = 0;
 //De�er atama i�lemi yap�l�r.
 
 
 printf("\n Boylar ve Kilolar: ");//Ki�iden boy ve kilo girilmesi istenir.
 printf("\n ================== ");
 
 for( n=0; n<2; n++)
 {
  printf("\n %i. Ogrencinin",n+1);
 
  printf("\nBoyu : ");//Ki�inin boyu ekrana yazar.
  scanf("%f",&boy[n]);
 
  printf("Kilosu : ");//Ki�inin kilosunu ekrana yazar.
  scanf("%f",&kilo[n]);
  top_boy = top_boy + boy[n];//Ki�inin boylar�n� toplar.
  top_kilo = top_kilo + kilo[n];//Ki�inin kilosunun toplar.
 }
 
 ort_boy = top_boy/2;//Ki�inin boylar�n�n toplam�n� ikiye b�ler toplar.
 ort_kilo = top_kilo/2;//Ki�inin kilolar�n�n toplam�n� ikiye b�ler toplar.
 
 printf("\n Agirlik Ortalamasi : %.2f ",ort_boy);//A��rl�k ortalamas�
 printf("\n Boy Ortalamasi : %.2f ",ort_kilo);//Boy ortalamas�
 
 getch();
}
