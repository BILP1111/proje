#include <stdio.h>
#include <conio.h>
 
main(void)
{
 int toplam = 0;
 int sayac = 0;
 int ogrsay = 0;
 int puan[50];
 
 
 printf("\n Puanlarin hesaplanmasi...");
 printf("\n =========================\n");
 
 printf("%Kac Ogrencinin Notu girilecek? : ",ogrsay+1);
 scanf("%i",&ogrsay);

 for(sayac=0 ; sayac <= ogrsay-1 ; sayac++ )
 {
  printf("%i. Ogrenicinin puani : ",sayac+1);
  scanf("%i",&puan[sayac]);
 
  toplam = toplam + puan[sayac];
 }
 
 printf("\n Ogrenci Sayisi = %i",sayac);
 printf("\n Puan Toplami = %i",toplam);
 printf("\n Puan Ortalamasi = %.1f\n",float(toplam)/sayac);
 
 getch();
}
