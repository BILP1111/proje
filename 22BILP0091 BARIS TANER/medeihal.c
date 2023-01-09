#include <stdio.h>

int main() { // Kullanıcıya medeni halini,evli ise kaç çocuğu olduğunu soran ve gerekli mesajı veren program
    int evli = 0;
	int cocuk;
	char ad[35];
	char soyad[35];
	printf("Adinizi giriniz : ");
	scanf("%s",&ad); 
	printf("Soyadinizi giriniz : ");
	scanf("%s",&soyad);
	
	printf("Evli misiniz ?\n");
	printf("Evet : 1\n");
	printf("Hayir : 0\n");
	printf("Deger Giriniz : ");
	scanf("%d",&evli);
	
	if(evli == 1){
		printf("Kac cocugunuz var ? :");
		scanf("%d",&cocuk);
		printf("*****************************\n");
		printf("Ad Soyad : %s %s \n",ad,soyad);
		printf("*****************************\n");
		printf("Medeni Durum : Evli\n");
		printf("*****************************\n");
		if(cocuk >= 1){
			printf("Cocuk Sayisi : %d \n",cocuk);
		}
		else{
			printf("Cocuk Sahibi Degil");
		}
		
	}
	else
	{
		printf("*****************************\n");
		printf("AD :%s Soyad : %s \n",ad,soyad);
		printf("*****************************\n");
		printf("Medeni Durum : Bekar\n");
		printf("*****************************\n");
	}
    return 0;
}