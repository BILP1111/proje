#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 
 clrscr();
 
 printf("\n Hesap Makinesi");
 printf("\n =======================");
 
 printf("\n 1. sayi : ");
 scanf("%f",&sayi1);
 fflush(stdin);
 
 printf("\n 2. sayi : ");
 scanf("%f",&sayi2);
 fflush(stdin);
 
 printf("\n Yapilacak islem ( + - / * % ) : ");
 scanf("%c",&islem);
 fflush(stdin);
 
 switch( islem )    // swich ile girilen sembollerin bilgisayar dili ile ne yapaca��n� programa tan�tt�k
 {
  case '+': sonuc = sayi1 + sayi2; break;
  case '-': sonuc = sayi1 - sayi2; break;
  case '*': sonuc = sayi1 * sayi2; break;
  case '/':
  {
  if( sayi2 > 0)    // e�er say�  dan b�y�kse 1 ve 2 . say� birbirine b�l�n�r
   sonuc = sayi1/sayi2;
  else
   printf("\n HATA : Sifira bolunme hatasi");  // de�ilse  a b�l�nme hatas� al�r�z
  } ; break;
  default: printf("\n Gecerli bir islem belirtmediniz.");  // bilgisayar�n anlamad��� sembol giri�i yapt���m�zda bu hatay� al�r�z
 }
 
 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);
 
 getch();
}
