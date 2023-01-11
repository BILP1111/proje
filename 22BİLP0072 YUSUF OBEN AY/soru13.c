#include <stdio.h>

int main() {
    int yil = 0;
    printf("Yil giriniz:");
    scanf("%d", &yil);
    if(yil % 4 == 0) {
        printf("Artik yil");
    }else {
        printf("Artik yil degil");
    }
    return 0;
}