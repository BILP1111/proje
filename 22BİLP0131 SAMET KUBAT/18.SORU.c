#include <stdio.h>

int main(void) 
{
      
       int sayi,flag = 0, i ;
       
       printf("Bir sayi giriniz:");
       scanf("%d", &sayi);
       
       for( i = 2; i <= sayi/2; i++) {
          if(i % i == 0) {
           flag = 1;
           break;
         }
       } 
       
       if(flag == 0)
          printf("Sayi Asaldir\n");
       else
       
          printf("Sayi Asal Degildir\n");
          
       return 0;
}
