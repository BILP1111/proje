#include <stdio.h>
#include <string.h>

int main() {
    char kelime1[100];
    printf("1. Kelime giriniz:");
    scanf("%d", kelime1);

    char kelime2[100];
    printf("2. Kelime giriniz:");
    scanf("%d", kelime2);

    if(strlen(kelime1) > strlen(kelime2)) {
        printf("Kelime 1 daha uzun.");
    }else {
        printf("Kelime 2 daha uzun.");
    }
    return 0;
}