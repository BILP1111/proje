#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 float boy[5],kilo[5];
 float top_kilo=0,top_boy=0;
 float ort_boy=0,ort_kilo=0;
 int n = 0;
 
 printf("\n Boylar ve Kilolar: ");
 printf("\n ================== ");
 
 for( n=0; n<5; n++)
 {
  printf("\n %i. Ogrencinin",n+1);
 
  printf("\nBoyu : ");
  scanf("%f",&boy[n]);
  fflush(stdin);
 
  printf("Kilosu : ");
  scanf("%f",&kilo[n]);
  fflush(stdin);
  top_boy = top_boy + boy[n];
  top_kilo = top_kilo + kilo[n];
 }
 
 ort_boy = top_boy/5;
 ort_kilo = top_kilo/5;
 
 printf("\n Boy Ortalamasi : %.2f ",ort_boy);
 printf("\n Kilo Ortalamasi : %.2f ",ort_kilo);
 
 getch();
}
