#include <stdio.h>
#include <conio.h>
 
void main(void)
{
 int sayilar[10] = {4,11,15,36,55,83,42,99,18,10};  // 10 say� programa tan�t�ld�
 int aranan = 0;
 int konum = 0;
 int sayac = 0;
 
 char bulundu = 'Y';
 
 clrscr();
 printf("\n Liste icerisinde aranacak sayi : ");  // aranacak sayi sorulur aranan diye programa tan�t�l�r
 scanf("%i",&aranan);
 fflush(stdin);
 
 for( sayac= 0; sayac < 10; sayac++ )   // for d�ng�s� boyunca 0 ile 10 aras�nda aranan say�y� bulanak adar d�ner
 {
  if( sayilar[sayac] == aranan )
  {
   bulundu = 'E';              // say� bulundu�u zaman E ile ekran ��kt�s�n� listenin ka��nc� s�ras�nda oldupuna kadar yazar.
   konum = sayac + 1;
   break;
  }
 }
 
 if(bulundu == 'E' )
  printf("\n %i sayisi listenin %i. sirasinda.",aranan,konum);
 else
  printf("\n %i sayisi gecerli degil.",aranan);
 
 getch();
}
