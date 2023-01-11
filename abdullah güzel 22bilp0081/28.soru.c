#include <stdio.h>
/* Girilen 2 sayinin arasýndaki asal sayileri bulan program*/
int main(){

    int sayi1,sayi2,sayac;
    int i;
    int j;
    printf("Iki adet sayi giriniz :");
    scanf("%d  %d" ,&sayi1,&sayi2);

    printf("-- %d ve %d sayilari arasindaki asal sayilar -- \n",sayi1,sayi2);

    for( i=sayi1 ; i<=sayi2 ; i++){
        sayac=0;
        for(j=2 ; j<i ; j++){ /*Burayý internetten bakarak yaptým*/
            if(i%j == 0){
                sayac++;
            }
        }

        if(sayac == 0 && sayi1 != 0 && sayi1 != 1)
            printf("%d\n" ,i);
 
    }
}
