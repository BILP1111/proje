#include <stdio.h>

int main(){ 
	int sayi;
     
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
 
	if(sayi%2 == 0)  /* BURADA MOD D�NG�S�N� KULLANDIK 2 �LE MODU 0 �SE ��FTT�R. YAN� 2 YE B�L�MDEN KALAN 0 �SE ��FTT�R*/
		printf("%d sayisi cifttir.", sayi); 	/*E�ER MOD 0 �SE ��FT YAZISINI G�STER�R ANCAK DE��L �SE TEK G�STER�R*/
	else
		printf("%d sayisi tektir.", sayi);
}
