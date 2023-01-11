#include <stdio.h>

int main() {
   int sayi1 = 0;
   int sayi2 = 0;
    printf("1. Sayi giriniz:");
    scanf("%d", &sayi1);
    printf("2. Sayi giriniz:");
    scanf("%d", &sayi2);
    if(sayi1 < sayi2) {
        printf("2. sayi daha buyuktur.");
    }else {
        printf("1. sayi daha buyuktur.");
    }
    printf("%d", sayi);
    return 0;
}