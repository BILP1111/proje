#include <stdio.h>

int main() {
    int sayi = 0;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    for(int i = 0; i<9; i++) {
        printf("%d x %d = %d", i, sayi, (i*sayi));
    }
    return 0;
}