#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    printf("x1 giriniz:");
    scanf("%d", &x1);
    printf("y1 giriniz:");
    scanf("%d", &y1);
    printf("x2 giriniz:");
    scanf("%d", &x2);
    printf("y2 giriniz:");
    scanf("%d", &y2);
    float uzaklik = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
    uzaklik = sqrt(uzaklik);
    printf("%d", uzaklik);
    return 0;
}