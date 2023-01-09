#include <stdio.h>

int main() { // Girilen bir sayının ASAL olup olmadığını bulan program
      
    int sayi,fl = 0, i ;
       
    printf("Bir sayi giriniz:");
    scanf("%d", &sayi);
    for( i = 2; i <= sayi/2; i++) {
        if(sayi % i == 0) {
        fl = 1;
        break;
     }
    } 
    if(fl == 0)
      printf("Sayi Asaldir\n");
    else
      printf("Sayi Asal Degildir\n");
    return 0;
}