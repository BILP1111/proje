#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int toplam = 0;
 int sayac = 0;
 int ogrsay = 0;
 int puan[50];
 
 clrscr();
 
 printf("\n Puanlar hesaplanýyor");
 printf("\n =========================\n");
 
 printf("%Öðrenci sayýsýný giriniz : ",ogrsay+1);
 scanf("%i",&ogrsay);
 fflush(stdin);
 
 for(sayac=0 ; sayac <= ogrsay-1 ; sayac++ )
 {
  printf("%i. Ögrenicinin puaný : ",sayac+1);
  scanf("%i",&puan[sayac]);
  fflush(stdin);
 
  toplam = toplam + puan[sayac];
 }
 
 printf("\n Ogrenci Sayisi = %i",sayac);
 printf("\n Puan Toplami = %i",toplam);
 printf("\n Puan Ortalamasi = %.1f\n",float(toplam)/sayac);
 
 getch();
}
