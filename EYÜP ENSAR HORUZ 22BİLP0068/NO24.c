#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int no = 0;
 
 clrscr();
 
 printf("\n Dogal Sayilar");
 printf("\n =============");
 
 for(no = 1; no <= 50; no=no+1)   // d�ng� ile  no 1 ve 50 aras� olmal� ve 1 er 1 er artmal�d�r
 {
  printf("\t %i",no);   
 }
 
 printf("\n\n Tek Sayilar");
 printf("\n ===========");
 
 for(no = 1; no <= 50; no=no+2)   // tek say�lar 1 den ba�lay�p 2 �er 2 �er ilerler ve tek say� olarak ekrana yazd�r�l�r
 {
  printf("\t %i",no);
 }
 
 printf("\n\n Cift Sayilar");
 printf("\n ============");
 
 for(no = 0; no <= 50; no=no+2)    // �ift say�lar da yukar�daki ko�ulla ayn�d�r
 {
  printf("\t %i",no);
 }
 
 getch();
}
