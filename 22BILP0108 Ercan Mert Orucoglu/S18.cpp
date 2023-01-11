#include <stdio.h>

main()
{
	int sayi1,sayi2; /* int deðiþkenlerini atadým*/
	int secim;
	
	printf("1.Sayiyi secin: "); /*Kullanýcýnýn 1. ve 2. sayýyý seçmesini istedim ve girilen sayýlarý okuttum*/
	scanf("%d",&sayi1);
	printf("2.Sayiyi girin: ");
	scanf("%d",&sayi2);
	
	printf("Hangi islemi yapmak istiyorsaniz seciniz\n");/* if else komutu ile seçimleri tanýtacaðýmdan dolayý seçim yapmasýný istedim kullanýcýnýn*/
	printf("1.Toplama\n");
	printf("2.Cikarma\n");
	printf("3.Carpma\n");
	printf("4.Bolme\n");
	
	printf("Seciminizi girin: "); /*Yaptýðý seçimi okuttum.*/
	scanf("%d",&secim);
	
	if(secim == 1){ /*Ýf else komutu ile seçtiði seçime göre matematiksel iþlemleri yaptýrdým ve en sonda else komutu ile yanlýþ seçim yaptýðý halde yazdýrmak istediðim þeyi yapmasýný istedim.*/
		printf("Toplama isleminin sonucu %d",sayi1 + sayi2);
	}
	else if(secim == 2){
		printf("Cikarma isleminin sonucu %d",sayi1 - sayi2);
	}
	else if(secim == 3){
		printf("Carpma isleminin sonucu %d",sayi1 * sayi2);
	}else if(secim == 4){
		printf("Carpma isleminin sonucu %d",sayi1 / sayi2);
	}
	else{
		printf("Dogru secim yap");
	}
}
