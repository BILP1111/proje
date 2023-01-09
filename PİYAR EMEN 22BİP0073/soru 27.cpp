#include<stdio.h>
#include <math.h>

//Girilen bir sayinin kuvvetini hesaplayan program. (Normal ve pow() ile)

main(){
	int sayi, us, sonuc;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	printf("Sayinin kuvvetini giriniz: ");
	scanf("%d", &us);
	
	//pow()
	sonuc = pow(sayi, us);
	
	printf("%d ussu %d = %d\n", sayi, us, sonuc);
	
	
	//normal	
	for(int i=1; i >= us; i++){
		sonuc *= sayi;
	}
	
	printf("%d ussu %d = %d", sayi, us, sonuc);
}
