#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayi = 0;   // sayi ve n de�elreri tan�t�ld�
 int n = 0;
 
 clrscr();
 
 printf("\n Girilen sayinin �arpim tablosu");
 printf("\n =================");
 
 printf("\n Bir sayi girin : ");
 scanf("%i",&sayi);    // girilen say�n�n sayi oldu�unu tan�tt�k
 fflush(stdin);
 
 printf("\n\n %i sayisi\n\n",sayi);
 
 for(n=1;n<=10;n++)     // girilen say� 1 ve 10 aras�nda �arpanlar�n� yazd�r�r (d�ng� boyunca)
 {
  printf("\n %i * %i = %i",sayi,n,(sayi*n) );
 }
 
 getch();
}
