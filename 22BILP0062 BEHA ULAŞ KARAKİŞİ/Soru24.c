#include <stdio.h>

/*
 * 1 den 50 ye kadar olan sayıların tek olması halinde tek çift olması halinde çift olduğunu
 * teker teker yazdıran program
 */

int main() {

    printf("1 den 50 ye ek sayılar: \n");
    for (int i = 1; i <= 50; ++i) {
        if(i % 2 == 1)
            printf("%i bir tek sayıdır\n", i);
        else
            printf("%i bir çift sayıdır\n", i);
    }

    return 0;
}


