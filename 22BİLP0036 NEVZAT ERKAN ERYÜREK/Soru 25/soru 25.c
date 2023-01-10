#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayi = 0;
 int n = 0;
 
 printf("\n Carpim Tablosu...");
 printf("\n =================");
 
 printf("\n Bir sayi girin : ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 printf("\n\n %i sayisi\n\n",sayi);
 
 for(n=1;n<=10;n++)
 {
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );
 }
 
 getch();
}
