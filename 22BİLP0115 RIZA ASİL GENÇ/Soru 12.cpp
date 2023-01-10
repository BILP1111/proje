#include <stdio.h>

int main() {
    int yas;
    printf("Kisinin yasini giriniz: ");
    scanf("%i",&yas);

    printf("Girdiginiz kisi oy %s",((yas >= 18)?"verebilir":"veremez"));
    return 0;
}
