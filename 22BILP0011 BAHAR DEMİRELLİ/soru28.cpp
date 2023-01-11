#include <stdio.h>

 
int main(){

    int sayi1,sayi2,sayac;
    printf("Iki adet sayi giriniz :");
    scanf("%d%d" ,&sayi1,&sayi2);

    printf("-- %d ve %d sayilari arasindaki asal sayilar -- \n",sayi1,sayi2);

    for(int i=sayi1 ; i<=sayi2 ; i++){
        sayac=0;
        for(int j=2 ; j<i ; j++){
            if(i%j == 0){
                sayac++;
            }
        }

        if(sayac == 0 && sayi1 != 0 && sayi1 != 1)
            printf("%d\n" ,i);
 
    }
}
//for ve if-else kullanarak oluþturdum.
