#include <stdio.h>
#include <conio.h>

int main()
{
 	int sayi = 0;
 	//Say� de�er atamas� yap�l�r.
 
 
 printf("1'den 25'e ileri sayma\n");//1 den 25 e kadar ileri sayar.
 printf("======================\n\n");
 
 for(sayi=1;sayi<=25;sayi++)//For d�ng�s� ile say�lar� sayar.
 {
  printf("\t %i",sayi);//Ekrana say�lar� girer.
 }
 printf("\n\n\n");
 printf("25'den 1'e geri sayma\n");//25 ten geriye do�ru 1 e geri gider.
 printf("==================\n\n");
 
 for(sayi=25;sayi>=1;sayi--)//25 ten 1 e kadar geriye sarar.
 {
  printf("\t %i",sayi);//Say�lar� Ekrana yazar.
 }
 
 getch();
}
