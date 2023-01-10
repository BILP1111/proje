#include <stdio.h>

/*
 * Kullanıcıdan bir yaş soran ardından girmiş olduğu yaş 18 veya 18 den büyük ise oy verebilir
 * 18 den küçük ise oy veremez şeklinde ekrana yazdıran program yine conditional-operator ile
 */

int main() {
    int yas;
    printf("Kişinin yaşını giriniz: ");
    scanf("%i",&yas);




    printf("Girdiğiniz kişi oy %s",((yas >= 18)?"verebilir":"veremez"));
    return 0;
}
