#include <stdio.h>
#include <conio.h>
 
int main()
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 

 
 printf("\n Basit Hesap Makinasi...");
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
 
 switch( islem )
 {
  case '+': sonuc = sayi1 + sayi2; break;
  case '-': sonuc = sayi1 - sayi2; break;
  case '*': sonuc = sayi1 * sayi2; break;
  case '/':
  {
  if( sayi2 > 0)
   sonuc = sayi1/sayi2;
  else
   printf("\n HATA : Sifira bolunme hatasi");
  } ; break;
  default: printf("\n Gecerli bir islem belirtmediniz.");
 }
 
 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);
 
 getch();
}

//switch case yap�s�, belirli bir de�i�kenin de�erine g�re farkl� i�lemler yapmak i�in kullan�l�r.
// �rne�in, bir programda kullan�c�n�n girdi�i bir say�n�n de�erine g�re farkl� i�lemler yap�lmas�n� isteyebilirsiniz. 
//Bu durumda, switch case yap�s�n� kullanarak de�i�kenin de�erine g�re farkl� i�lemleri yapabilirsiniz.
