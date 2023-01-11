// girilen sayý asal ise ondan sonraki asal sayýlarda da yazdýran program

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, i, j;
    bool isPrime;

    printf("Bir sayi giriniz: ");
    scanf("%d", &num);

    isPrime = true;
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        printf("Girilen sayi asaldir.\n");

        printf("Bundan sonraki 10 tane asal sayi: \n");
        num++;
        for (i = 1; i <= 10; i++) {
            isPrime = true;
            for (j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                printf("%d\n", num);
            }
            num++;
        }
    } else {
        printf("Girilen sayi asal degildir.\n");
    }

    return 0;
}
