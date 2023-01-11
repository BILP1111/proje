#include <stdio.h>

int main() {
    int yas = 0;
    printf("Yas giriniz:");
    scanf("%d", &yas);
    if(yas >= 0 && yas < 10) {
        printf("Cocuk");
    }else if(yas >= 11 && yas < 18) {
        printf("Ergen");
    }else if(yas >= 19 && yas < 30) {
        printf("Genc");
    }else if(yas >= 30 && yas < 40) {
        printf("Orta Yasli");
    }else {
        printf("Yasli");
    }
    return 0;
}