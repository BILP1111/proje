#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void main(void)  // bo�
{
 int SAYI = 0;
 int sayi = 0;
 
 clrscr();
 
 printf("\n Birinci Sayi : ");  // girilen say�lar�n ne oldu�unu programa tan�tt�k
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
