#include <stdio.h>
#include <conio.h>
 
int main()
{
 int yas = 0;
 //Yas a de�er atar.
 
 printf("\n Oy verme yeterligi....");//Oy verme Ya��
 printf("\n");
 
 printf("\n Secmen yasi giriniz : ");//Girilen Se�men Ya�i
 scanf("%i",&yas);
 
 if( yas >= 18 )//E�er d�ng�s� yap�l�r.
 
  printf("\n Secimlerde oy verme yeterligine sahipsiniz.");//18 ya� �st� ise oy verebilirsiniz.
 else
 
 printf("\n Secimlerde oy verme yeterligine sahip degilsiniz");//18 ya��ndan k���k oldu�unuz i�in oy veremezsiniz.
 
 getch();
}
