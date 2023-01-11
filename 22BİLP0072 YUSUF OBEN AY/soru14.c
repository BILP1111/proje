#include <stdio.h>

int main() {
    int not = 0;
    printf("Not giriniz:");
    scanf("%d", &not);
    if(not <= 100 && not >80) {
        printf("A");
    }else if(not <= 79 && not >60) {
        printf("B");
    }else if(not <= 59 && not >50) {
        printf("C");
    }else if(not <= 49 && not > 40) {
        printf("D");
    }else {
        printf("F");
    }
    return 0;
}