#include <stdio.h>

int main() {
    int yas = 0;
    printf("Yas giriniz:");
    scanf("%d", &yas);
    if(yas < 18) {
        printf("Oy veremez");
    }else {
        printf("Oy verebilir");
    }
    return 0;
}