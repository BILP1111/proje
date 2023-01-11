#include <stdio.h>

int main() {
    int kenar1 = 0;
    int kenar2 = 0;

    printf("Kenar 1 giriniz:");
    scanf("%d", &kenar1);
    printf("Kenar 1 giriniz:");
    scanf("%d", &kenar2);
    printf("Alan: %d, Çevre: ", (kenar1 * kenar2), ((kenar1+kenar2)*2));
    return 0;
}