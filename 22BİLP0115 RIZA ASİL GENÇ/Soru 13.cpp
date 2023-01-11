#include <stdio.h>

int main() {
    int yil;
    printf("Yil giriniz: ");
    scanf("%i",&yil);

    printf("%i yili %s",yil,((yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0))?"artik yildir":"artik yil degildir"));
    return 0;
}
