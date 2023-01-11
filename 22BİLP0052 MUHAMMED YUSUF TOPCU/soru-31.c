#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 //sayý deðeri atanýr.
 
 while( sayi >= 0)//While döngüsü ile 0 dan büyük sayý girmesini ister ve ekrana yazdýrýr.
 {
  printf("\nSayi? : ");//Sayýyý giriniz
  
  scanf("%i",&sayi);
 
  printf("%i sayisini girdiniz.",sayi);//En son ki aþama ekrana yazdýrýr.
 }
}
