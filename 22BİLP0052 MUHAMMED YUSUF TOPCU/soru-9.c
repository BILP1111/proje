#include <stdio.h>
#include <conio.h>
 
int main()
{
 int sayi = 0;
 
 printf("Tek mi, Cift mi? ");//Ki�inin girdi�i say�y� tek veya �ift oldu�unu sorar.
  printf("\n\n");
 printf("Bir sayi giriniz : ");//Ki�iden say� istenir.
 scanf("%i",&sayi);
 
 if( sayi % 2 == 0 )//E�er ile sorgu yap�l�r.
  printf("\n %i bir cift sayidir.",sayi);//Say� �ifttir.
 else
  printf("\n %i bir tek sayidir.",sayi);//Say� tektir.
 
 getch();
}
