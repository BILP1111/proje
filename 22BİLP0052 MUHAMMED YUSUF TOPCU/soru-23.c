#include <stdio.h>
#include <conio.h>

int main()
{
 	int sayi = 0;
 	//Sayı değer ataması yapılır.
 
 
 printf("1'den 25'e ileri sayma\n");//1 den 25 e kadar ileri sayar.
 printf("======================\n\n");
 
 for(sayi=1;sayi<=25;sayi++)//For döngüsü ile sayıları sayar.
 {
  printf("\t %i",sayi);//Ekrana sayıları girer.
 }
 printf("\n\n\n");
 printf("25'den 1'e geri sayma\n");//25 ten geriye doğru 1 e geri gider.
 printf("==================\n\n");
 
 for(sayi=25;sayi>=1;sayi--)//25 ten 1 e kadar geriye sarar.
 {
  printf("\t %i",sayi);//Sayıları Ekrana yazar.
 }
 
 getch();
}
