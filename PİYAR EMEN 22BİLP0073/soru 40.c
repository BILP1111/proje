#include<stdio.h>

//5 öðrencinin boylarýný ve kilolarýný sorarak boy ve kilo ortalamasýný bulan program.

main(){
	float boy[5], kilo[5], toplam_kilo, toplam_boy;
	for(int i = 0; i < 5; i++){
		printf("%d. ogrencinin boyunu giriniz: ", i+1);
		scanf("%f", &boy[i]);
		printf("%d. ogrencinin kilosunu giriniz: ", i+1);
		scanf("%f", &kilo[i]);
		toplam_boy += boy[i];
		toplam_kilo += kilo[i];
	}
	
	printf("Toplam boy: %.2f\nOrtalama boy: %.2f\nToplam kilo: %.2f\nOrtalama kilo: %.2f", toplam_boy, toplam_boy/5, toplam_kilo, toplam_kilo/5);
	
}
