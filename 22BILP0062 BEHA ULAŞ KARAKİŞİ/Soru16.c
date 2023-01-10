#include <stdio.h>

/*
 * Bir string array yardımı ile girilmiş olan gün numarasının array üzerindeki konumunu bulup ekrana yazdıran uygulama
 * 0 dan başlamak yerine 1. gün Pazartesi ile başlamak için girilen rakamdan 1 çıkartıyoruz. Böylece 1 yazıldığında aslında arraydeki
 * ilk element yani pazartesi gelicektir.
 */

char* gunler[] = {"Pazartesi", "Salı","Çarşamba","Perşembe", "Cuma", "Cumartesi", "Pazar"};
int main() {
    int num;
    printf("Gün numarasını girin: ");
    scanf("%i",&num);





    printf("Gün: %s",gunler[num-1]);
    return 0;
}
