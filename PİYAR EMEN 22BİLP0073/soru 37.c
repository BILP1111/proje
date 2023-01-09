#include<stdio.h>

//Girilen 10 sayý içerisinde en büyük ve en küçük olan sayýlarý bulan program.

main(){
	int sayi, buyuk_sayi, kucuk_sayi;
	
	for(int i=1; i <= 10; i++){
		printf("%d. sayiyi giriniz: ", i);
		scanf("%d", &sayi);
		
		if(i == 1){
			buyuk_sayi = sayi;
			kucuk_sayi = sayi;
		}
		
		else{
			if(sayi >= buyuk_sayi){
				buyuk_sayi = sayi;
			}
			
			else if(sayi <= kucuk_sayi){
				kucuk_sayi = sayi;
			}
		}
	}
	
	printf("En buyuk sayi: %d\n", buyuk_sayi);
	printf("En kucuk sayi: %d", kucuk_sayi);
}
