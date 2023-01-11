#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 
 printf("Tek mi, Cift mi? ");//Kiþinin girdiði sayýyý tek veya çift olduðunu sorar.
  printf("\n\n");
 printf("Bir sayi giriniz : ");//Kiþiden sayý istenir.
 scanf("%i",&sayi);
 
 if( sayi % 2 == 0 )//Eðer ile sorgu yapýlýr.
  printf("\n %i bir cift sayidir.",sayi);//Sayý çifttir.
 else
  printf("\n %i bir tek sayidir.",sayi);//Sayý tektir.
 
 getch();
}
