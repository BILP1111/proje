#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int no = 0;
 
 clrscr();
 
 printf("\n Dogal Sayilar");
 printf("\n =============");
 
 for(no = 1; no <= 50; no=no+1)   // döngü ile  no 1 ve 50 arasý olmalý ve 1 er 1 er artmalýdýr
 {
  printf("\t %i",no);   
 }
 
 printf("\n\n Tek Sayilar");
 printf("\n ===========");
 
 for(no = 1; no <= 50; no=no+2)   // tek sayýlar 1 den baþlayýp 2 þer 2 þer ilerler ve tek sayý olarak ekrana yazdýrýlýr
 {
  printf("\t %i",no);
 }
 
 printf("\n\n Cift Sayilar");
 printf("\n ============");
 
 for(no = 0; no <= 50; no=no+2)    // çift sayýlar da yukarýdaki koþulla aynýdýr
 {
  printf("\t %i",no);
 }
 
 getch();
}
