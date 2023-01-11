#include <stdio.h>

int main() 
{
      
    int sayi,n = 0,i; // deðiþken atadýk
       
    printf("Bir sayi girin: "); // kullanýcýdan bir deðer girmesini istedik
    scanf("%d", &sayi); // yukarýda istenilen deðeri sayi deðiþkeni olarak okuttuk.
    for( i = 2; i <= sayi/2; i++) { // if döngüsü ile bir döngü oluþturduk.
         if(sayi % i == 0) { 
           n = 1;
           break; // durdur
    }
    } 
       if(n == 0) // eðer n==0 ise sayi asaldýr yazdýr.
          printf("Sayi Asaldir\n");
       else // deðilse sayi asal deðildir yazdýr
          printf("Sayi Asal Degildir\n");
}
