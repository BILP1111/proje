#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

// Girilen bir sayının kuvvetini hesaplayan program(normal ve pow() olarak)
    int girilenSayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&girilenSayi);

    int kuvvet;
    printf("Sayinin Kuvvetini giriniz: ");
    scanf("%d",&kuvvet);


    // Pow ile
    printf("\n Pow ile = %f ",pow(girilenSayi,kuvvet));

    //Normal şekilde

    int carpim=1;

        for(int i = 0; i<kuvvet; i++){
        carpim=girilenSayi;
    }
        printf("\n Normal = %d ",carpim);

}