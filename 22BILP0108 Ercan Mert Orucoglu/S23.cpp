
//for döngüsü ile 1 den 25 e kadar ve 25 ten 1 e kadar sayýlarý yazdýrdýk.
//printf ile sayýlarý ve baþlýklarý ekrana yazdýrdýk.


#include <stdio.h>

    int main()
{
    int sayi = 0; // int ile sayi deðerini tanýmladýn
	printf("1'den 25'e ileri sayma\n"); // printf ile baþlýðý yazdýrdým
	
	for(sayi=1;sayi<=25;sayi++) // for döngüsü ile sayýlarý 1-25 ve 25-1'e yazdýrdým
    {
    printf("\t%i",sayi);
    }
    printf("\n\n\n"); // iç içe girmemesi için satýr atlattýrdým
    printf("25'den 1'e geri sayma\n"); // printf ile baþlýðý yazdýrdým
 
 for(sayi=25;sayi>=1;sayi--)
 {
  printf("\t%i",sayi);
}

}
