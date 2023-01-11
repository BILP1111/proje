/* girilen iki sayıyı toplayıp yazdıran program */
#include<stdio.h>
int main()
{
	int sayi;
	int sayi1;
	int toplam;
	
	printf("ilk sayiyi giriniz : ");
	scanf("%d",&sayi);
	
	printf("ikinci sayiyi giriniz : ");
	scanf("%d",&sayi1);
	
	toplam=sayi+sayi1;
	
	printf("toplam : %d",toplam);
	getch();
}