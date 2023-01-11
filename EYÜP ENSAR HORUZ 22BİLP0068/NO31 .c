#include <stdio.h>
#include <conio.h>
 
void main(void)  // deðiþkenin tipi belli olmadýðý için void deðerini atadýk
{
 int sayi = 0;
 
 clrscr();   // clrscr ekrandakileri siler. Yani yeni deðer girilene kadar sürekli silme iþlemi devam etmektedir.
 
 while( sayi >= 0)    // while döngüsü kullanýlarak sayinin koþullu þekilde ilerlemesi saðlanýr.
 {
  printf("\nSayi? : ");    // ekrana sayi girilmesi istenir ve girilen sayý programa tanýtýlýr.
  scanf("%i",&sayi);
  fflush(stdin);    //fflush, ara belleði temizlemek ve çýktý akýþýnýn (stdout) sonuçlarýný görüntülemek için kullanýlýr.
 
  printf("%i sayisini girdiniz.",sayi);  // girilen sayinin ekran çýktýsýný verir
 }
}
