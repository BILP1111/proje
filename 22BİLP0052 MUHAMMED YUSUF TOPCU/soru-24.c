#include <stdio.h>
#include <conio.h>
 
int main()
{
 int no = 0;
 //De�er atar.
 
 printf("\n Dogal Sayilar");//1 den 50 ye kadar say�lar� ekrana yazar.
 printf("\n =============");
 
 for(no = 1; no <= 50; no=no+1)//For d�ng�s� ile 1 den 50 ye kadar sayar.
 {
  printf("\t %i",no);//Say�lar� ekrana yazar.
 }
 
 printf("\n\n Tek Sayilar");
 printf("\n ===========");
 
 for(no = 1; no <= 50; no=no+2)//for d�ng�s� ile 1den 50 ye kadar tek say�lar� sayar.
 {
  printf("\t %i",no);//1 den 50 ye kadar tek say�lar� ekrana yazar.
 }
 
 printf("\n\n Cift Sayilar");
 printf("\n ============");
 
 for(no = 0; no <= 50; no=no+2)//for d�ng�s� ile 1den 50 ye kadar �ift say�lar� sayar.
 {
  printf("\t %i",no);//1 den 50 ye kadar �ift say�lar� ekrana yazar.
 }
 
 getch();
}
