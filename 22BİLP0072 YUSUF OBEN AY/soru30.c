#include <stdio.h>

int main() {
    for(int i = 1; i < 30; i++) {
        for(int j = 0; j<i; j++) {
            printf("%d", j);
        } 
        printf("\n");
    }
    return 0;
}