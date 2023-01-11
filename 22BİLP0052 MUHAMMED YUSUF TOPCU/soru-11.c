#include <stdio.h>
#include <conio.h>
#include <math.h>
 
int main()
{
 int x1 = 0, y1 = 0;
 int x2 = 0, y2 = 0;
 float mesafe = 0 ;
 //Deðer Atama
 
 printf("\n 1. Nokta (X Y): ");//Koordinat Deðerlerini Giriniz.
 scanf("%d %d",&x1,&y1);
 
 printf("\n 2. Nokta (X Y): ");//2.Koordinat deðerlerini Giriniz.
 scanf("%d %d",&x2,&y2);
 
 mesafe = ( pow( (y2-y1),2) + pow((x2-x1),2));//Mesafe Deðerleri ekrana yazar.
 printf("\n Mesafe : %.2f",mesafe);
 
 getch();
}
