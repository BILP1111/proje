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

//switch case yapýsý, belirli bir deðiþkenin deðerine göre farklý iþlemler yapmak için kullanýlýr.
// Örneðin, bir programda kullanýcýnýn girdiði bir sayýnýn deðerine göre farklý iþlemler yapýlmasýný isteyebilirsiniz. 
//Bu durumda, switch case yapýsýný kullanarak deðiþkenin deðerine göre farklý iþlemleri yapabilirsiniz.
