#include <stdio.h>

int main() {
    char harf = 0;
    printf("Harf giriniz:");
    scanf("%c", &harf);
    if(harf == 'a' || harf == 'e' || harf == 'ı' || harf == 'i' || harf == 'o' || harf == 'ü' || harf == 'u') {
        printf("Sesli harf");
    }else {
        printf("Sesli harf degil");
    }
    return 0;
}