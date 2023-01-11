//basit dört iþlem ve modüler aritmetik iþlemi yapabilen program (switch ile)

#include <stdio.h>
#include <stdlib.h>


int main(){
	
	system("COLOR D");
	
	int secim,sayi1,sayi2,a,b,c,d,e,f,tercih;
	a:
	
	printf("1-Toplama\n");
	printf("2-Cikarma\n");
	printf("3-Carpma\n");
	printf("4-Bolme\n");
	printf("5-Aritmetik Mod\n");
	printf("Bir islem seciniz: ");
	scanf("%d",&tercih);
	printf("\n---------------------\n");
	
	switch(tercih){
		case 1:
			printf("Secilen islem Toplama.\n");
			printf("Iki sayi girin: ");
			scanf("%d %d",&sayi1,&sayi2);
			printf("%d+%d=%d",sayi1,sayi2,sayi1+sayi2);
			printf("\n\n");
			b:
			printf("Devam etmek icin 0 rakamina programi bitirmek icin 1 rakamina basin!");
			scanf("%d",&secim);
			if(secim==1){
				return 0;
			}
			else if(secim==0){
				goto a;
			}
			else {
				goto b;
			}
			break;
	case 2:
		printf("Secilen islem Cikarma.\n");
		printf("Iki sayi girin: ");
		scanf("%d %d",&sayi1,&sayi2);
		printf("%d-%d=%d",sayi1,sayi2,sayi1-sayi2);
		printf("\n\n");
		c:
		printf("Devam etmek icin 0 rakamina programi bitirmek icin 1 rakamina basin!");
			scanf("%d",&secim);
			if(secim==1){
				return 0;
			}
			else if(secim==0){
				goto a;
			}
			else {
				goto b;
			}
			break;
	case 3:
		printf("Secilen islem Carpma.\n");
		printf("Iki sayi girin: ");
		scanf("%d %d",&sayi1,&sayi2);
		printf("%d*%d=%d",sayi1,sayi2,sayi1*sayi2);
		printf("\n\n");
		d:
		printf("Devam etmek icin 0 rakamina programi bitirmek icin 1 rakamina basin!\n\n");
			scanf("%d",&secim);
			if(secim==1){
				return 0;
			}
			else if(secim==0){
				goto a;
			}
			else {
				goto b;
			}
			break;
	case 4:
		printf("Secilen islem Bolme.\n");
		printf("Iki sayi girin: ");
		scanf("%d %d",&sayi1,&sayi2);
		printf("%d/%d=%.3f",sayi1,sayi2,(float)sayi1/sayi2);
		printf("\n\n");
		e:
		printf("Devam etmek icin 0 rakamina programi bitirmek icin 1 rakamina basin!");
			scanf("%d",&secim);
			if(secim==1){
				return 0;
			}
			else if(secim==0){
				goto a;
			}
			else {
				goto b;
			}
			break;
	case 5:
		printf("Secilen islem Aritmetik Mod.\n");
		printf("Iki sayi girin: ");
		scanf("%d %d",&sayi1,&sayi2);
		printf("%d%%%d=",sayi1,sayi2);
		printf("%d",sayi1%sayi2);
		printf("\n\n");
		f:
		printf("Devam etmek icin 0 rakamina programi bitirmek icin 1 rakamina basin!");
			scanf("%d",&secim);
			if(secim==1){
				return 0;
			}
			else if(secim==0){
				goto a;
			}
			else {
				goto b;
			}
			break;
	}
	
	return 0;
}
