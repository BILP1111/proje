#include <stdio.h>

int main() {
    int sayi = 0;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    int total = 0;
    while(sayi >= 1) {
        total += sayi %10;
        sayi /= 10; 
    }

    printf("%d", total);
    return 0;
}