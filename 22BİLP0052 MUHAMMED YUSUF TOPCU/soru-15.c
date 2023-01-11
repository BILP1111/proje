#include <stdio.h>
#include <conio.h>
 
int main()
{
 char harf = ' ';
 
 
 printf("\n Sesli harflerin kontrolu...");//Girilen harfin kontorülünü yapar.
 printf("\n ===========================");
 
 printf("\n Bir harf giriniz :");//Harf girmenizi ister.
 scanf("%c",&harf);
 
 if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O'  || harf == 'U' )//eðer þartýnda olan sesli harflar
  printf("\n %c bir SESLI harftir.",harf);//Girdiðiniz harf sesli harftir.
 else
  printf("\n %c bir sesli harf DEGILDIR.",harf);//Girdiðiniz harf sesli harf deðildir.
 
 getch();
}
