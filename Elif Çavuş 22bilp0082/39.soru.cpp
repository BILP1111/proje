#include<stdio.h>
main()
{
    int sayilar[10] = {2,12,13,15,86,52,19,90,9,27};
    int i;
    int sayi;
    char asal;
 
    printf("\n Cift Sayilar : ");
 
    for(i=0;i<10;i++)
 {
     if (sayilar[i]%2 == 0 )
         printf("%i\t",sayilar[i]);
 }
 
    printf("\n\n Tek Sayilar : ");
 
     for(i=0;i<10;i++)
 {
        if( sayilar[i]%2 != 0 )
         printf("%i\t",sayilar[i]);
 }
 
    printf("\n\n Asal Sayilar : ");
 
     for(i=0;i<10;i++)
 {
     asal = 'E';
 
  for(i=2;i<sayilar[i];i++)
  {
   if(sayilar[i]%sayi == 0)
   {
    asal = 'H';
    break;
   }
  }
 
     if( asal == 'E' )
     printf("%i\t",sayilar[i]);
 }
 
 return 0;
}