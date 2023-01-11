#include <stdio.h>
#include <conio.h>
 
main(void)
{
 int yas = 0;
 
 printf("\n Oy verme yeterligi....");
 printf("\n ========================");
 
 printf("\n Secmen yasi giriniz : ");
 scanf("%i",&yas);

 if( yas > 18 )
  printf("\n Secimlerde oy verme yeterligine sahipsiniz.");
 else
 printf("\n Secimlerde oy verme yeterligine sahip degilsiniz");
 
 getch();
}
