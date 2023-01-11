#include <stdio.h>

int main() {
    int sayi;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    if(sayi % 2 == 0) {
        printf("Tek");
    }else {
        printf("Cift");
    }
    return 0;
}