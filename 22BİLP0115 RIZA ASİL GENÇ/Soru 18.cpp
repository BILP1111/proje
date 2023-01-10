#include <stdio.h>


int main() 
{
    int islemNo;
    int sayi1, sayi2;
    printf("Hangi islemi yapmak istersiniz?\n");
    printf("1-TOPLAMA\n");
    printf("2-CIKARMA\n");
    printf("3-CARPMA\n");
    printf("4-BOLME\n");
    printf("5-MOD\n");
    scanf("%i",&islemNo);

    printf("Ilk sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    if(islemNo == 1) printf("Sayilarin toplami: %d", sayi1+sayi2);
    else if(islemNo == 2) printf("Sayilarin farki: %d", sayi1-sayi2);
    else if(islemNo == 3) printf("Sayilarin carpimi: %d", sayi1*sayi2);
    else if(islemNo == 4) printf("Sayilarin bölumu: %.2f", (float)sayi1/sayi2);
    else if(islemNo == 5) printf("Sayilarin modu: %d", sayi1%sayi2);
    return 0;
}
