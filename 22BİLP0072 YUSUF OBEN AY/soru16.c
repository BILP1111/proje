#include <stdio.h>

int main() {
    int numara = 0;
    printf("Numara giriniz:");
    scanf("%d", &numara);
    if(numara == 1) {
        printf("Pazartesi");
    }else if(numara == 2) {
        printf("Sali");
    }else if(numara == 3) {
        printf("Carsamba");
    }else if(numara == 4) {
        printf("Persembe");
    }else if(numara == 5) {
        printf("Cuma");
    }else if(numara == 6) {
        printf("Cumartesi");
    }else if(numara == 7) {
        printf("Pazar");
    }
    return 0;
}