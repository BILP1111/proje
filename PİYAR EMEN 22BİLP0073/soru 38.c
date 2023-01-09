#include<stdio.h>

//Kullanýcýnýn girdiði 5 sayýyý küçükten büyüðe doðru sýralayýp listeleyen program.

main(){
	int sayilar[5], gecici;
	
	for(int i=0; i < 5; i++){
		printf("%d. sayiyi giriniz: ", i+1);
		scanf("%d", &sayilar[i]);
	}
	
	for(int i = 0; i < 5; i++)
    {
        for(int a = i+1; a < 5; a++)
        {
            if(sayilar[a] < sayilar[i]){
                gecici = sayilar[i];
                sayilar[i] = sayilar[a];
                sayilar[a] = gecici;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",sayilar[i]);
    }
	
}
