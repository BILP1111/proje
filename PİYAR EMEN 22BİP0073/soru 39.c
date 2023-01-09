#include<stdio.h>

//Bir dizi içerisinde verilen sayılar arasından aranan bir sayıyı bulan program.

main(){
	int sayilar[5] = {2, 6, 1, 0, 9};
	int aranan = 0;
	
	printf("sayilar[]={%d, %d, %d, %d, %d}\n", sayilar[0], sayilar[1], sayilar[2], sayilar[3], sayilar[4], sayilar[5]);
	
	for(int i=0; i < 5; i++){
		if(sayilar[i] == aranan){
			printf("%d, dizinin %d. elemanidir.", aranan, i+1);
		}
	}
}
