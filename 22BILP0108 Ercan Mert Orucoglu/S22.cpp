#include <stdio.h>

int main() 
{
      
    int sayi,n = 0,i; // de�i�ken atad�k
       
    printf("Bir sayi girin: "); // kullan�c�dan bir de�er girmesini istedik
    scanf("%d", &sayi); // yukar�da istenilen de�eri sayi de�i�keni olarak okuttuk.
    for( i = 2; i <= sayi/2; i++) { // if d�ng�s� ile bir d�ng� olu�turduk.
         if(sayi % i == 0) { 
           n = 1;
           break; // durdur
    }
    } 
       if(n == 0) // e�er n==0 ise sayi asald�r yazd�r.
          printf("Sayi Asaldir\n");
       else // de�ilse sayi asal de�ildir yazd�r
          printf("Sayi Asal Degildir\n");
}
