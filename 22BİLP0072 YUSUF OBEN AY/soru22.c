#include <stdio.h>

int main() {
    int sayi = 0;
    int asal = 1;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    for(int i = 0; i<sayi; i++) {
        if(sayi % i == 0) {
            asal = 0;
        }
    }
    if(asal) {
        printf("Asal sayi");
    }else {
        printf("Asal sayi degil");
    }
    return 0;
}