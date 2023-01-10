#include <stdio.h>

int main()
{
	int sayi1;
	int sayi2;
	int sonuc;
	
	printf("Birinci sayiyi giriniz.\n");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz.\n");
	scanf("%d",&sayi2);
	
	sonuc = sayi1 + sayi2;
    
	printf("Sayiniz: %d\n",sonuc);
}
