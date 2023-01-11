#include <stdio.h>

int main() {
    char ad[100];
    char soyad[100];
    char tamad[200];
    printf("Ad giriniz:");
    scanf("%d", ad);
    printf("Soyad giriniz:");
    scanf("%d", soyad);
    printf("%s", strcat(ad,soyad));
    return 0;
}