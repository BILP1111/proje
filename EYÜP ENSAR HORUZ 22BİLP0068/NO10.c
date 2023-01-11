#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void main(void)  // boþ
{
 int SAYI = 0;
 int sayi = 0;
 
 clrscr();
 
 printf("\n Birinci Sayi : ");  // girilen sayýlarýn ne olduðunu programa tanýttýk
 scanf("%i",&SAYI);
 fflush(stdin);
 
 printf("\n Ikinci sayi : ");
 scanf("%i",&sayi);
 fflush(stdin);
 
 if( SAYI > sayi )
  printf("Birinci sayi daha buyuktur");
 
 if( SAYI == sayi )
  printf("\n Iki sayi birbirine esittir");
 
 if( SAYI < sayi )
  printf("\n Ikinci sayi daha buyuktur");
 
 getch();
}
