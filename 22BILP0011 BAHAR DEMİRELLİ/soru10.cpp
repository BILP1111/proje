#include<stdio.h>

int main()
{
   int sayi1, sayi2;

   printf("Lutfen ilk sayiyi giriniz: ");
   scanf("%d", &sayi1);

   printf("Lutfen ikinci sayiyi giriniz: ");
   scanf("%d", &sayi2);

   if(sayi1 > sayi2)
   {
      printf("İlk sayi ikinci sayidan daha buyuktur.\n");
   }
   else if(sayi1 < sayi2)
   {
      printf("Ikinci sayi ilk sayidan daha buyuktur.\n");
   }
   else
   {
      printf("Iki sayi birbirine esittir.\n");
   }

   return 0;
}
//Koşul için if-else, kullanıcıdan iki tane sayı girmesini ister ve bu sayıların büyüklüğünü karşılaştırır.
//Eğer ilk sayı ikinci sayıdan daha büyükse, ekrana "İlk sayı ikinci sayıdan daha büyüktür." yazdırılır. 
//Eğer ikinci sayı ilk sayıdan daha büyükse, ekrana "İkinci sayı ilk sayıdan daha büyüktür." yazdırılır. 
//Eğer iki sayı birbirine eşitse, ekrana "İki sayı birbirine eşittir." yazdırılır.
