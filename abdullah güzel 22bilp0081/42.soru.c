#include <stdio.h>
 
main(void)
{
 char harf = ' ';
 
 
 
 printf("\n Sesli harflerin kontrolu...");
 printf("\n ===========================");
 
 printf("\n Bir harf giriniz :");
 scanf("%c",&harf);
 fflush(stdin);
 
 if( harf == 'A' || harf == 'E' || harf == 'I' || harf == 'O'  || harf == 'U' )
  printf("\n %c bir SESLI harftir.",harf);
 else
  printf("\n %c bir sesli harf DEGILDIR.",harf);
 
 getch();
}
