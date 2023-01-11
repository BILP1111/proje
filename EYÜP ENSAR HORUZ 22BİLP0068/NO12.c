#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int yas = 0;
 
 clrscr();
 printf("\n Oy verme yeterligi"); 
 printf("\n ========================");
 
 printf("\n Yaþýnýzý giriniz : ");  
 scanf("%i",&yas);
 fflush(stdin);
 
 if( yas > 18 )  // eðer 18 yaþýnda ise oy vereebilir. Deðilse veremez
  printf("\n Secimlerde oy verme yeterligine sahipsiniz.");
 else
 printf("\n Secimlerde oy verme yeterligine sahip degilsiniz");
 
 getch();
}
