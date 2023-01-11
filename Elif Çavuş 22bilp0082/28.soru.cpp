#include <stdio.h>
#include <stdlib.h>

int main(){

// Girilen iki sayı arasında bulunan asal sayıları listeleyen program

    int baslangic;
    printf("Baslangici giriniz: ");
    scanf("%d",&baslangic);

    int son;
    printf("Sonu giriniz: ");
    scanf("%d",&son);

    for(int i = baslangic; i <= son; i++){

        bool kontrol = false;

        for(int j = 2; j<i; j++){
            if(i%j == 0){
                kontrol = true;
            }
        }

        if(!kontrol && i>1){
            printf("\n %d Asal sayidir",i);
        }

    }

}