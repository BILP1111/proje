//Girilen bir nota karþýlýk gelen durumu yazdýran program 



#include <stdio.h>

int main(void){
    float yuzde=0;

    printf("\nBir not girin (0-100): ");
    scanf("%f", &yuzde);

    if (yuzde >= 80 && yuzde<=100) {
        printf("\nCOKIYI");
    } else if (yuzde >= 60 && yuzde<80) {
        printf("\nIYI");
    } else if (yuzde >= 40 && yuzde<60) {
        printf("\nORTA");
    } else if (yuzde >= 20 && yuzde<40) {
        printf("\nGECER");
    } else if (yuzde >= 0 && yuzde<20) {
        printf("\nKALDI");
    } else {
        printf("\nGECERSIZ NOT");
    }

    return 0;
}
