//i�lem secme hatas� 
#include <stdio.h>
#include <conio.h>
 
int main()
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 //De�er atama i�lemi yap�l�r.
 
 
 printf("\n Basit Hesap Makinasi...");//Toplama,��karma,B�lme,�arpma i�lemlerini yapar.
 printf("\n =======================");
 
 printf("\n 1. Sayi :");//Birinci say�y� giriniz.
 scanf("%f",&sayi1);
 
 printf("\n 2. Sayi : ");//�kinci say�y� giriniz.
 scanf("%f",&sayi2);

 printf("\n Yapilacak islemi giriniz ( + - / * % ) : ");//Yap�lacak i�lemi se�iniz.
 scanf("%c",&islem);
 

 
 if( islem == '+')//E�er �art� ile i�lemler yap�l�r.
  sonuc = sayi1 + sayi2;
 else if( islem == '-')
  sonuc = sayi1 - sayi2;
 else if( islem == '*')
  sonuc = sayi1 * sayi2;
 else if( islem == '/')
 {
  if( sayi2 > 0)//Say� iki 0 dan b�y�kt�r.
  
   sonuc = sayi1/sayi2;
  else
  
   printf("\n Hata: Sifira bolme hatasi");//Hatal� B�lme i�lemi
 }
 else
 
  printf("\n Gecerli bir islem isareti girmediniz.");//Sadece Basit ��lemler yap�l�r.
 
 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);//Sonucu ekrana yazd�r�r.
 
 getch();
}
