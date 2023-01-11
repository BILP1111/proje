#include <stdio.h>


int main()
{
	int i,bosluk,satir,k=0,say=0,say1=0;
	//Deðer atamasý yapýlýr.
	printf("Satir sayisini giriniz:");//Kullanýcýdan satýr sayýsý istenir.
	scanf("%d",&satir);
	
	for(i=1;i<=satir;i++)//For Döngüsü ile satýr sayýsý artar.
	{
		for(bosluk=1;bosluk<=satir-i;bosluk++)//Satýr kadar boþluk eklenir.
		{
		printf(" ");
		say++;	
		}
		while(k!=2*i-1)//While döngüsü ile yapýlýr.
		{
			if(say<=satir-1)
			{
				printf("%d",i+k);
				say++;
			}
			else
			{
				say1++;
				printf("%d",(i+k-2*say1));
			}
			k++;
	
		}
		say1=say=k=0;//Sonucu ekrana yazdýrýr.
		printf("\n");
	}
	return 0;
}
