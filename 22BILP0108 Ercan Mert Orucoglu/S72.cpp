#include <stdio.h>


// POÝNTER KULLANARAK BELÝRLENEN ÝKÝ SAYININ TOPLAMINI VE FARKINI VEREN PROGRAM
 
int main(void)
{
    int sayi1 = 50, sayi2 = 30;
 
    int *ptr1;
    int *ptr2;
 
    int toplam = 0, fark = 0;
 
    ptr1 = &sayi1;
    ptr2 = &sayi2;

    toplam = *ptr1 + *ptr2;
    fark   = *ptr1 - *ptr2;
 
    printf("Toplamlari : %i",toplam);
    printf("\tFarklari : %i",fark);
}

