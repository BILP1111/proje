#include <stdio.h>
 
int main()
{
 int sayi1 = 0;
 int sayi2 = 0;
 //Deðer Atama yapýlýr.
 
 printf("\n Birinci Sayi : ");//Birinci sayý istenir.
 scanf("%i",&sayi1);
 
 printf("\n Ikinci sayi : ");//Ýkinci sayý istenir.
 scanf("%i",&sayi2);
 
 if( sayi1 > sayi2 )//Eðer sorgusu yapýlýr.
  printf("Birinci sayi daha buyuk.");
 
 if( sayi1 == sayi2 )
  printf("\n Iki sayi birbirine esit.");//Her iki sayý birbirine eþittir.
 
 if( sayi1 < sayi2 )
  printf("\n Ikinci sayi daha buyuk.");//Ýkinci sayý daha büyüktür.
 
 getch();
}
