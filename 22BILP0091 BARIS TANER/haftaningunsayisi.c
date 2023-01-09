#include <stdio.h>


int main() { // Haftanın gün numarasına karşılık günü gösteren program 
    int gun = 0;

    printf("Bir Gun Numarasi Giriniz : ");
    scanf("%d", &gun);

    if(gun == 1 ){ // her günü tek tek kontrol edip 1-7 arası başka rakam girildimi Gecersiz gun numarasi diye ekrana yazicak
        printf("Pazartesi");
    } else if (gun == 2) {
        printf("Sali");
    } else if (gun == 3) {
        printf("Carsamba");
    } else if (gun == 4) {
        printf("Persembe");
    } else if (gun == 5) {
        printf("Cuma");
    } else if (gun == 6) {
        printf("Cumartesi");
    } else if (gun == 7) {
        printf("Pazar");
    } else {
        printf("Gecersiz Gun Numarasi Girdin");
    }
    return 0;
}