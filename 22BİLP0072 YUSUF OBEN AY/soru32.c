#include <stdio.h>

int main() {
    int sayi1 = 0;
    int sayi2 = 0;
    int choice = 9;

    while(choice != 5) {
        printf("Sayi 1 giriniz:");
        scanf("%d", &sayi1);
        printf("Sayi 2 giriniz:");
        scanf("%d", &sayi2);

        printf("1. Toplama");
        printf("2. Cikarma");
        printf("3. Carpma");
        printf("4. Bolme");
        printf("5. Cikis");

        scanf("%d", &choice);

        if(choice == 1) {
            printf("%d", sayi1 + sayi2);
        }else if(choice == 2) {
            printf("%d", sayi1 - sayi2);
        }else if(choice == 3) {
            printf("%d", sayi1 * sayi2);
        }else if(choice == 4) {
            printf("%lf", sayi1 / sayi2);
        }
    }
    
    return 0;
}