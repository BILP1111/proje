/*tek ve �if yazd�rma k�sm�n� internet'ten yararland�m*/
/*1'den 50'kadar say�lar� yazd�r�p hangisinin tek ve �ift
say�lar� g�steren program*/
#include <stdio.h>
#include <conio.h>
 
 main(){
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
