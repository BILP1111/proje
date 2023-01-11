#include <stdio.h>

int main() {
    int sayi1 = 0;
    int sayi2 = 0;
    printf("1. Sayi giriniz:");
    scanf("%d", &sayi1);
    printf("2. Sayi giriniz:");
    scanf("%d", &sayi2);
    printf("%d", sayi1 + sayi2);
    return 0;
}