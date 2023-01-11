#include <stdio.h>
#include <stdlib.h>

int main(){

    int uzunluk;
    printf("Oluşacak primaidin uzunluğunu giriniz: ");
    scanf("%d",&uzunluk);

    int baslangic = 1;
    int baslangicSayi = 1;


    for(int i = uzunluk; i>0; i--){ // 5 4 3 2 1

        for(int j = --uzunluk; j>0;j--){
            printf(" ");
        }

        for(int j = 0; j<baslangic;j++){
            printf("%d",baslangicSayi++);
        }

        baslangic +=2;
        printf("\n");
    }

}