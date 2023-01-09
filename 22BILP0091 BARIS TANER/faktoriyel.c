#include<stdio.h>

#include<stdio.h> // Girilen bir sayinin faktoriyelini hesaplayan program
main()
{
   int i;
   int faktoriyel=1;
   int sayi;
   printf("Faktoriyeli Alinacak Sayiyi Girin.:");
   scanf("%d",&sayi);  
   for(int i=1;i<=sayi;i++)
   {
      faktoriyel=faktoriyel*i;
   }
   printf("Sonuc = %d",faktoriyel);
}
