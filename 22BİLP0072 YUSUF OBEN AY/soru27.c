#include <stdio.h>
#include <math.h>

int main() {
    int sayi = 0;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    printf("Pow: %d, normal: %d", pow(sayi,2), (sayi*sayi));
    return 0;
}