/*Girilen bir sayinin asal sayi olup olmadýgýný bulan program*/ 


#include <stdio.h>
int main(){
	int sayi,i,asal=0;
	printf("Sayiyi girin : ");
	scanf("%d",&sayi);
	
	for(i=2; i<sayi; i++){
		if(sayi%i==0){
			asal++;
		}
	}
	if(asal==0)
	printf("Girdiginiz sayi asal");
	else 
	printf("Girdiginiz sayi asal degil");
return 0;
}
