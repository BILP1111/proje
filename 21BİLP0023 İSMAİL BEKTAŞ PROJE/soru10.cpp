#include <stdio.h>
#include <conio.h>
#include <math.h>
 
 main(void)
{
 int SAYI = 0;
 int sayi = 0;
 
 printf("\n Birinci Sayi : ");
 scanf("%i",&SAYI);
 
 printf("\n Ikinci sayi : ");
 scanf("%i",&sayi);

 if( SAYI > sayi )
  printf("Birinci sayi daha buyuk.");
 
 if( SAYI == sayi )
  printf("\n Iki sayi birbirine esit.");
 
 if( SAYI < sayi )
  printf("\n Ikinci sayi daha buyuk.");
 
 getch();
}
