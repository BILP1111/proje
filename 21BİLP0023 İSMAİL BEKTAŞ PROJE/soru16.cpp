#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 char harf = ' ';
 
 printf("\n Sesli harflerin kontrolu...");
 
 printf("\n Bir harf giriniz :");
 scanf("%c",&harf);

 if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O'  || harf == 'U' )
  printf("\n %c bir SESLI harftir.",harf);
 else
  printf("\n %c bir sesli harf DEGILDIR.",harf);
 
 getch();
}
