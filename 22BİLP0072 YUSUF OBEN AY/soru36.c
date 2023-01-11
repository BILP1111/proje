#include <stdio.h>

int main() {
    int sayi = 0;
    printf("Sayi giriniz:");
    scanf("%d", &sayi);
    int total = 0;
    for(int i =0 ; i< sayi; i++) {
        printf("%d. Ogrenci notunu giriniz:", i+1);
        int not;
        scanf("%d", &not);
        total += not;
    }

    printf("Toplam: %d, Ortalama: %d", total, (total/sayi));
    return 0;
}