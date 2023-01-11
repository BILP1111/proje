#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayi = 0;   // sayi ve n deðelreri tanýtýldý
 int n = 0;
 
 clrscr();
 
 printf("\n Girilen sayinin çarpim tablosu");
 printf("\n =================");
 
 printf("\n Bir sayi girin : ");
 scanf("%i",&sayi);    // girilen sayýnýn sayi olduðunu tanýttýk
 fflush(stdin);
 
 printf("\n\n %i sayisi\n\n",sayi);
 
 for(n=1;n<=10;n++)     // girilen sayý 1 ve 10 arasýnda çarpanlarýný yazdýrýr (döngü boyunca)
 {
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );
 }
 
 getch();
}
