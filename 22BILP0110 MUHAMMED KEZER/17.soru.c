//Girilen bir yasa karsilik gelen hayat dilimini ekrana yazan program

#include <stdio.h>

int main()
{
   
    int yas;
    printf("Yasinizi girin:");
    scanf("%d", &yas);

    if (yas < 0) {
        printf("Girilen yas negatif olamaz\n");
    }
    else if (yas < 2) {
        printf("bebek\n");
    }
    else if (yas < 12) {
        printf("cocuk\n");
    }
    else if (yas < 20) {
        printf("genc\n");
    }
    else if (yas < 60) {
        printf("yetiskin\n");
    }
    else {
        printf("yasli\n");
    }
    return 0;
}
