#include <stdio.h>
 
int main()
{
 int sayi1 = 0;
 int sayi2 = 0;
 //De�er Atama yap�l�r.
 
 printf("\n Birinci Sayi : ");//Birinci say� istenir.
 scanf("%i",&sayi1);
 
 printf("\n Ikinci sayi : ");//�kinci say� istenir.
 scanf("%i",&sayi2);
 
 if( sayi1 > sayi2 )//E�er sorgusu yap�l�r.
  printf("Birinci sayi daha buyuk.");
 
 if( sayi1 == sayi2 )
  printf("\n Iki sayi birbirine esit.");//Her iki say� birbirine e�ittir.
 
 if( sayi1 < sayi2 )
  printf("\n Ikinci sayi daha buyuk.");//�kinci say� daha b�y�kt�r.
 
 getch();
}
