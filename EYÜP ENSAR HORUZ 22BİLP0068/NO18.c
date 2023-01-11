#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 
 clrscr();
 
 printf("\n Hesap Makinesi);
 printf("\n =======================");
 
 printf("\n 1. Sayi : ");
 scanf("%f",&sayi1);
 fflush(stdin);
 
 printf("\n 2. Sayi : ");
 scanf("%f",&sayi2);
 fflush(stdin);
 
 printf("\n Yapilacak islemi giriniz ( + - / * % ) : ");  // yapýlacak iþlem bilgisayar dili ile sembollerle girilir
 scanf("%c",&islem);
 fflush(stdin);
 
 if( islem == '+')
  sonuc = sayi1 + sayi2;   // bölme toplama çýkarma gibi iþlemlerin nasýl yapýldýðý bilgisayara tanýtýlýr
 else if( islem == '-')
  sonuc = sayi1 - sayi2;
 else if( islem == '*')
  sonuc = sayi1 * sayi2;
 else if( islem == '/')
 {
  if( sayi2 > 0)
   sonuc = sayi1/sayi2;
  else
   printf("\n Hata: Sifira bolme hatasi");  // 0 a bölme yapýldýðýnda sistem uyarý verir
 }
 else
  printf("\n Gecerli bir islem isareti girmediniz.");  // iþlem iþareti bilgisayar dilinde girilmez veya tanýnmaz ise bu hatayý verir
 
 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);
 
 getch();
}
