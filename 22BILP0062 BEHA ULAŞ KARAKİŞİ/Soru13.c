#include <stdio.h>

/*
 * Kullanıcı tarafından girilen yılın artık yıl olup olmadığını bulması için girilen yılın
 * 400 ün katı ya da, 4 ün katı fakat 100 ün katı ise artık olduğunu değil ise artık yıl
 * olmadığını ekrana yazdıran program
 */

int main() {
    int yil;
    printf("Yil giriniz: ");
    scanf("%i",&yil);




    printf("%i yılı %s",yil,((yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0))?"artık yıldır":"artık yıl değildir"));
    return 0;
}
