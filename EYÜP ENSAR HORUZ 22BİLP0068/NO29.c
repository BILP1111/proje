#include<stdio.h>
int main() {
    int i, uzun, yan, k=0;  // uzun ve yan deðerlerini programa tanýttýk
    printf("Satýr Sayýsý : ");   // kullanýcýya satýr sayýsýný soran yazýyý yazdýrdýk
    scanf("%d", &yan);            // kullanýcý deðerin girdikten sonra o deðerin yan olduðunu tanýttýk
    for (i=1; i<=yan; ++i,k=0) {   // for döngüsü kullanarak  uzun deðeri 1 den baþlayan ve girilen yan deðerine kadar giden döngüyü yazdýk  
        for (uzun=1; uzun<=yan-i; ++uzun)
        { printf("*"); }          // burada girilen deðerlere göre ekran çýktýsý hazýrlanýr
        while (k!=2*i-1) {          // while döngüsü kullanýlarak koþul saðlanana kadar döngüyü döndürürüz. Buradaki koþul girilen deðerin piramit tamamlanana kadar ekrana yazýlmasýdýr
            printf("*");
            ++k;
        }
        printf("\n");
    }    
    return 0;
}
