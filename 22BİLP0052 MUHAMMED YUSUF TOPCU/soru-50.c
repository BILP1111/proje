#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char kelime[100];
      int uzunluk = 0;
      int n = 0;
      int sayac = 0;
      char aranan;
      char harf;
      //De�er girilir. 
 
      printf("\n Uzun bir cumle giriniz : " );//K��iden uzun bir c�mle girilmesini ister�
      gets(kelime);
 
      printf("\n Cumle icerisinde aranacak harf : ");//Ki�iden c�mle i�eresinde aranacak harfi ister.
      scanf("%c",&aranan);
 
      uzunluk = strlen(kelime);
 
      for( n= 0; n < uzunluk ; n++)
      {
          harf = kelime[n];
 
          if(  aranan == harf)
              sayac++;
      }
 
      printf("\n \"%s\" cumlesi icinde %c harfi %i tane geciyor.",kelime,aranan,sayac);//�stedi�iniz sesli harfin ka� kez kullan�ld���n� yazar.
 
      getch();
}
