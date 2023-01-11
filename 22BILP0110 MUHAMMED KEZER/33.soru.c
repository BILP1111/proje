//Girilen bir sayýdaki rakamlarýn toplamýný bulan program

#include<stdio.h>

int main()
{

    int adet, sayi, toplam=0;
    printf("Kac tane sayi var : ");
    scanf("%d", &adet);
    
    printf("%d tane sayi giriniz : \n", adet);
    for(int i=0 ; i<adet ; i++){
        scanf("%d", &sayi);
        toplam = toplam + sayi;
    }
    
    printf("Tum sayilarin toplami : %d", toplam);
}
