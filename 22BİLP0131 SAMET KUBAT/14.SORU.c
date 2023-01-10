#include <stdio.h>
#include <math.h>

int main() {
    int decimal;
    printf("Bir ondalik sayi girin: ");
    scanf("%d", &decimal);
    printf("ikili eþdeðer ile %d dir: ", decimal);
    int remainder, quotient;
    quotient = decimal;
    int binary[100], i=1, j;

    while(quotient!=0) {
         binary[i++]= quotient % 2;
         quotient = quotient / 2;
    }
    for(j = i -1 ;j> 0;j--)
         printf("%d",binary[j]);

    return 0;
}
//kullanýcý tarafýndan girilen bir sayýyý binary formatýna dönüþtürebiliriz//
