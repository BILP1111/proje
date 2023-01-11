#include <stdio.h>


int main() 
{
    int values[5];
    for (int i = 0; i < 5; ++i) 
	{
        printf("Bir sayi giriniz: ");
        int t;
        scanf("%i",&t);

        values[i] = t;
    }

    printf("Siralama tipini secin:\n1- Kucukten buyuge\n2- Buyukten kucuge\n");

    int type;
    scanf("%d", &type);

    for (int i = 0; i < 5; i++) 
	{
        for (int x = i+1; x < 5; x++) 
		{
            if((type == 1 && values[i] > values[x]) || (type == 2 && values[i] < values[x])) 
			{
                int valTemp = values[i];
                values[i] = values[x];
                values[x] = valTemp;
            }
        }
    }

    printf(type==1?"Sayilar kucukten buyuge su sekildedir: ":"Sayilar  buyukten kucuge su sekildedir: ");
    for (int i = 0; i < 5; ++i) 
	{
        printf("%i, ", values[i]);
    }
    return 0;
}
