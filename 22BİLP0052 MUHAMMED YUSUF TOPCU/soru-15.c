#include <stdio.h>
#include <conio.h>
 
int main()
{
 char harf = ' ';
 
 
 printf("\n Sesli harflerin kontrolu...");//Girilen harfin kontor�l�n� yapar.
 printf("\n ===========================");
 
 printf("\n Bir harf giriniz :");//Harf girmenizi ister.
 scanf("%c",&harf);
 
 if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O'  || harf == 'U' )//e�er �art�nda olan sesli harflar
  printf("\n %c bir SESLI harftir.",harf);//Girdi�iniz harf sesli harftir.
 else
  printf("\n %c bir sesli harf DEGILDIR.",harf);//Girdi�iniz harf sesli harf de�ildir.
 
 getch();
}
