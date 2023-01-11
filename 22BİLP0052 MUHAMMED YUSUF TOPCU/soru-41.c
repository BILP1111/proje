#include <stdio.h>
#include <conio.h>
 
int main()
{
 float boy[2],kilo[2];
 float top_kilo=0,top_boy=0;
 float ort_boy=0,ort_kilo=0;
 int n = 0;
 //Deðer atama iþlemi yapýlýr.
 
 
 printf("\n Boylar ve Kilolar: ");//Kiþiden boy ve kilo girilmesi istenir.
 printf("\n ================== ");
 
 for( n=0; n<2; n++)
 {
  printf("\n %i. Ogrencinin",n+1);
 
  printf("\nBoyu : ");//Kiþinin boyu ekrana yazar.
  scanf("%f",&boy[n]);
 
  printf("Kilosu : ");//Kiþinin kilosunu ekrana yazar.
  scanf("%f",&kilo[n]);
  top_boy = top_boy + boy[n];//Kiþinin boylarýný toplar.
  top_kilo = top_kilo + kilo[n];//Kiþinin kilosunun toplar.
 }
 
 ort_boy = top_boy/2;//Kiþinin boylarýnýn toplamýný ikiye böler toplar.
 ort_kilo = top_kilo/2;//Kiþinin kilolarýnýn toplamýný ikiye böler toplar.
 
 printf("\n Agirlik Ortalamasi : %.2f ",ort_boy);//Aðýrlýk ortalamasý
 printf("\n Boy Ortalamasi : %.2f ",ort_kilo);//Boy ortalamasý
 
 getch();
}
