#include <stdio.h>

int main() {
    int sayi1, sayi2;
    printf("Sayi giriniz:");
    scanf("%d", &sayi1);
    printf("Sayi giriniz:");
    scanf("%d", &sayi2);
    for(int i = sayi1; i<sayi1; i++) {
        int asalmi = 1;
        for(int j = 0; j<i; j++) {
            if(i%j == 0)
                asalmi = 0;
        }
        if(asalmi)
            printf("%d", i);
    }
    return 0;
}