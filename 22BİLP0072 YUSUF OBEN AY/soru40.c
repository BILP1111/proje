#include <stdio.h>

int main() {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    
    int sayi = 0;
    printf("Sayi giriniz:");
    for(int i = 0; i<10; i++) {
        if(arr[i] == sayi) {
            printf("%d bulundu", sayi);
        }
    }
    return 0;
}