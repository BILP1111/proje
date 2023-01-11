//iþlem secme hatasý 
#include <stdio.h>
#include <conio.h>
 
int main()
{
 float sayi1 = 0;
 float sayi2 = 0;
 double sonuc = 0;
 char islem = ' ';
 //Deðer atama iþlemi yapýlýr.
 
 
 printf("\n Basit Hesap Makinasi...");//Toplama,Çýkarma,Bölme,Çarpma iþlemlerini yapar.
 printf("\n =======================");
 
 printf("\n 1. Sayi :");//Birinci sayýyý giriniz.
 scanf("%f",&sayi1);
 
 printf("\n 2. Sayi : ");//Ýkinci sayýyý giriniz.
 scanf("%f",&sayi2);

 printf("\n Yapilacak islemi giriniz ( + - / * % ) : ");//Yapýlacak iþlemi seçiniz.
 scanf("%c",&islem);
 

 
 if( islem == '+')//Eðer þartý ile iþlemler yapýlýr.
  sonuc = sayi1 + sayi2;
 else if( islem == '-')
  sonuc = sayi1 - sayi2;
 else if( islem == '*')
  sonuc = sayi1 * sayi2;
 else if( islem == '/')
 {
  if( sayi2 > 0)//Sayý iki 0 dan büyüktür.
  
   sonuc = sayi1/sayi2;
  else
  
   printf("\n Hata: Sifira bolme hatasi");//Hatalý Bölme iþlemi
 }
 else
 
  printf("\n Gecerli bir islem isareti girmediniz.");//Sadece Basit Ýþlemler yapýlýr.
 
 printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc);//Sonucu ekrana yazdýrýr.
 
 getch();
}
