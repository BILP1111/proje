#include <stdio.h>


int main()
{
	int i,bosluk,satir,k=0,say=0,say1=0;
	//De�er atamas� yap�l�r.
	printf("Satir sayisini giriniz:");//Kullan�c�dan sat�r say�s� istenir.
	scanf("%d",&satir);
	
	for(i=1;i<=satir;i++)//For D�ng�s� ile sat�r say�s� artar.
	{
		for(bosluk=1;bosluk<=satir-i;bosluk++)//Sat�r kadar bo�luk eklenir.
		{
		printf(" ");
		say++;	
		}
		while(k!=2*i-1)//While d�ng�s� ile yap�l�r.
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
		say1=say=k=0;//Sonucu ekrana yazd�r�r.
		printf("\n");
	}
	return 0;
}
