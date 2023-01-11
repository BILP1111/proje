#include <stdio.h>

int main() {
    int sayi = 0;
    int min = 99999999;
    int max = -99999999;
    for(int i = 0; i<10; i++) {
        printf("Sayi giriniz:");
        scanf("%d", &sayi);    
        if(sayi < min) 
            min = sayi;
        if(sayi > max)
            max = sayi;
    }

    printf("Max: %d, Min: %d", max, min);
    
    return 0;
}