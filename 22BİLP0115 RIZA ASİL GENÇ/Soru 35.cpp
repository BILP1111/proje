#include <stdio.h>
#include <string.h>


int asalMi(int sayi) 
{

    for (int i = 0; i < sayi; ++i) 
	{
        if(i <= 1 || sayi == i || sayi % i != 0) 
		{
            continue;
        }

        return 0;

    }

    return 1;
}
    int main() 
{



    int sayi;

    printf("Bir asal sayi giriniz: ");
    scanf("%i",&sayi);



    if(asalMi(sayi) == 0) 
	{
        printf("Girdiginiz sayi asal bir sayi degildir.");
    } else 
	{
        int count = 0;
        int devamSayi = sayi;
        printf("%i sayisindan sonraki ilk 10 asal sayi: ",sayi);

        while(count < 10) 
		{
            devamSayi++;


            if(asalMi(devamSayi) == 1) 
			{
                count++;
                printf("%i, ", devamSayi);
            }
        }
    }
    return 0;
}
