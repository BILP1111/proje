#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int yas = 0;
 
 clrscr();
 printf("\n Oy verme yeterligi"); 
 printf("\n ========================");
 
 printf("\n Ya��n�z� giriniz : ");  
 scanf("%i",&yas);
 fflush(stdin);
 
 if( yas > 18 )  // e�er 18 ya��nda ise oy vereebilir. De�ilse veremez
  printf("\n Secimlerde oy verme yeterligine sahipsiniz.");
 else
 printf("\n Secimlerde oy verme yeterligine sahip degilsiniz");
 
 getch();
}
