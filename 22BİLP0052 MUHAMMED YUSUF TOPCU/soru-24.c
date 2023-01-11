#include <stdio.h>
#include <conio.h>
 
int main()
{
 int no = 0;
 //Deðer atar.
 
 printf("\n Dogal Sayilar");//1 den 50 ye kadar sayýlarý ekrana yazar.
 printf("\n =============");
 
 for(no = 1; no <= 50; no=no+1)//For döngüsü ile 1 den 50 ye kadar sayar.
 {
  printf("\t %i",no);//Sayýlarý ekrana yazar.
 }
 
 printf("\n\n Tek Sayilar");
 printf("\n ===========");
 
 for(no = 1; no <= 50; no=no+2)//for döngüsü ile 1den 50 ye kadar tek sayýlarý sayar.
 {
  printf("\t %i",no);//1 den 50 ye kadar tek sayýlarý ekrana yazar.
 }
 
 printf("\n\n Cift Sayilar");
 printf("\n ============");
 
 for(no = 0; no <= 50; no=no+2)//for döngüsü ile 1den 50 ye kadar çift sayýlarý sayar.
 {
  printf("\t %i",no);//1 den 50 ye kadar çift sayýlarý ekrana yazar.
 }
 
 getch();
}
