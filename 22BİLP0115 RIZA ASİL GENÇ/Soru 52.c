#include<stdio.h>
#include<stdlib.h>

int main()
{
	char dizi[50];
	int i;
	printf("Lutfen metni giriniz:");
	gets(dizi);
	printf("Uzunluk:%d",strlen(dizi));
	
	printf("\n");
	return 0;
}
