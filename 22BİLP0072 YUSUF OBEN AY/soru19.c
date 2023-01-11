#include <stdio.h>

int main() {
    int sayi1 = 0;
    int sayi2 = 0;

    printf("Sayi 1 giriniz:");
    scanf("%d", &sayi1);
    printf("Sayi 2 giriniz:");
    scanf("%d", &sayi2);

    printf("1. Toplama");
    printf("2. Cikarma");
    printf("3. Carpma");
    printf("4. Bolme");
    printf("5. Mod");
    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d", sayi1 + sayi2);
        break;
    case 2:
        printf("%d", sayi1 - sayi2);
        break;
    case 3:
        printf("%d", (float)sayi1 * sayi2);
        break;
    case 4:
        printf("%lf", sayi1 / sayi2);
        break;
    case 5:
        printf("%d", sayi1 % sayi2);
        break;
    default:
        break;
    }
    return 0;
}