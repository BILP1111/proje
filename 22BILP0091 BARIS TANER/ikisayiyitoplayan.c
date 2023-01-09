#include<stdio.h>

int main(){ // İki asyiyi toplayan program
    int sayi1,sayi2; // İki sayinin degiskenini scanf ile alıp islem değişkeni ile toplayıp ekrana yazdırıyoruz
	printf("Ilk sayiyi giriniz : ");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&sayi2);
	
	int islem = sayi1 + sayi2;
	
	printf("İki sayinin toplami : %d ",islem);
}
