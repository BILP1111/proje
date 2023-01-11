#include <stdio.h>

int main() {
    int mesafe = 0;
    int hiz = 0;

    printf("Mesafe giriniz:");
    scanf("%d", &mesafe);
    printf("Mesafe giriniz:");
    scanf("%d", &hiz);
    printf("%d", (mesafe / hiz));
    return 0;
}