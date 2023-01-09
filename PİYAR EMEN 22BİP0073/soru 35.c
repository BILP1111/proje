#include<stdio.h>

//Girilen bir sayý asal sayý ise, bundan sonraki 10 asal sayýyý da listeleyen program.

main(){
	int sayi, sayac1 = 0, sayac2=0;
	
	printf("Sayi giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi < 2){
		printf("Sayi asal degil.");
	}
	
	else if(sayi == 2){
		printf("Sayi asal.");
	}
	
	else if(sayi > 2)
	{
		for(int i=2; sayi > i; i++)
		{
			if(sayi%i == 0)
			{
				sayac1++;
			}
		}
		
		if(sayac1 == 0)
		{
			printf("Girilen sayi asal.\n");
			for(int i=sayi+1; sayac2 < 10; i++)
			{
				sayac1=0;
				for(int k=2; i > k; k++)
				{
					if(i%k == 0)
					{
						sayac1++;
					}
				}
				
				if(sayac1 == 0){
					printf("%d\n", i);
					sayac2++;
				}
			}
		}
		
		else
		{
		printf("Sayi asal degil.");
		}
	}
			
}
