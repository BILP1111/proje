#include <stdio.h>
#include <conio.h>
 
 main(void)
{
 int no = 0;
 
 printf("\n Dogal Sayilar");
 printf("\n =============");
 
 for(no = 1; no <= 50; no=no+1)
 {
  printf("\t %i",no);
 }
 
 printf("\n\n Tek Sayilar");
 printf("\n ===========");
 
 for(no = 1; no <= 50; no=no+2)
 {
  printf("\t %i",no);
 }
 
 printf("\n\n Cift Sayilar");
 printf("\n ============");
 
 for(no = 0; no <= 50; no=no+2)
 {
  printf("\t %i",no);
 }
 
 getch();
}
