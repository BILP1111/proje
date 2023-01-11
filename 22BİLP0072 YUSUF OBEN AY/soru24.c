#include <stdio.h>

int main() {
    printf("Dogal sayilar:");
    for(int i = 1; i<=50; i++) {
        printf("%d", i);
    }
    printf("Cift sayilar:");
    for(int i = 1; i<=50; i++) {
        if(i % 2 == 0)
            printf("%d", i);
    }
    printf("Tek sayilar:");
    for(int i = 1; i<=50; i++) {
        if(i % 2 != 0)
            printf("%d", i);
    }
    return 0;
}