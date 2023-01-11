/* girilen sayının mükemmel olup olmaıdğını bulan program */

#include <stdio.h>
int main(){
	int sayi;
	printf("Sayi? \n");
	scanf("%d",&sayi);
	int sum = 0;
	for(int j=1; j<sayi; j++){
		if(sayi%j==0){
			sum = sum + j;
		}
	}
	if(sum == sayi){
		printf("%d bir mukemmel sayidir\n",sayi );
	}
	else{
		printf("%d bir mukemmel sayi degildir\n",sayi );
	}

	return 0;
}