#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 float boy[5],kilo[5];
 float topkilo=0,topboy=0;
 float ortboy=0,ortkilo=0;
 int n = 0;
 
 clrscr();
 
 printf("\n Boy ve kilolarý giriniz: ");
 
 
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
 
 printf("\n Kilo Ortalamasi : %.2f ",ort_boy);
 printf("\n Boy Ortalamasi : %.2f ",ort_kilo);
 
 getch();
}
