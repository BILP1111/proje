#include <stdio.h>
#include <conio.h>
 
int main()
{
 int yas = 0;
 //Yas a deðer atar.
 
 printf("\n Oy verme yeterligi....");//Oy verme Yaþý
 printf("\n");
 
 printf("\n Secmen yasi giriniz : ");//Girilen Seçmen Yaþi
 scanf("%i",&yas);
 
 if( yas >= 18 )//Eðer döngüsü yapýlýr.
 
  printf("\n Secimlerde oy verme yeterligine sahipsiniz.");//18 yaþ üstü ise oy verebilirsiniz.
 else
 
 printf("\n Secimlerde oy verme yeterligine sahip degilsiniz");//18 yaþýndan küçük olduðunuz için oy veremezsiniz.
 
 getch();
}
