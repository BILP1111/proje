#include <stdio.h>
#include <string.h>

typedef struct Kitap
{
    char ad[255];
    char yazar[255];
    char konu[255];
    int sayfaSayisi;
    float fiyat;
    char yayinevi[255];
} Kitap;
void kitapPrint(Kitap kitapFound) 
{
    printf("Kitap Adi: %s\nKonusu: %s\nSayfa sayisi: %i\nYazar: %s\nYayinevi: %s\nFiyat: %.2f\n", kitapFound.ad,kitapFound.konu, kitapFound.sayfaSayisi, kitapFound.yazar, kitapFound.yayinevi, kitapFound.fiyat);
}
int main() 
{
    int kitapCount;
    printf("Kitap sayisini giriniz: ");
    scanf("%i",&kitapCount);

    Kitap kitaplar[kitapCount];

    for (int i = 0; i < kitapCount; ++i) 
	{
        Kitap kitap;
		printf("%i. kitabin adini giriniz: ", i+1);
        scanf(" %[^\n]",kitap.ad);
		printf("%i. kitabin yazarini giriniz: ", i+1);
        scanf(" %[^\n]", kitap.yazar);
		printf("%i. kitabin fiyatini giriniz: ", i+1);
        scanf("%f", &kitap.fiyat);
		printf("%i. kitabin konusunu giriniz: ", i+1);
        scanf(" %[^\n]", kitap.konu);
		printf("%i. kitabin sayfa sayisini giriniz: ", i+1);
        scanf("%i", &kitap.sayfaSayisi);
        printf("%i. kitabin yayinevini giriniz: ", i+1);
        scanf(" %[^\n]", kitap.yayinevi);

        kitaplar[i] = kitap;
    }
    while(1) 
	{
        printf("----------------\nYapmak istediginiz eylemi secin:\n1- Kitaplari sirala\n2- Kitaplarda ara\n");

        int eylemID;
        scanf("%i", &eylemID);

        switch (eylemID) 
		{
            case 2:
                printf("Aramak istediginiz kitabin adini giriniz: ");
                char kitapAd[255];
                scanf(" %[^\n]", kitapAd);

                Kitap kitapFound;
                int isfound = 0;
                for (int i = 0; i < kitapCount; ++i) 
				{
                    Kitap k = kitaplar[i];
                    if(!strcasecmp(k.ad, kitapAd)) 
					{
                        kitapFound = k;
                        isfound = 1;
                        break;
                    }
                }

                if(isfound != 0) {
                    kitapPrint(kitapFound);
                } else 
				{
                    printf("Belirttiginiz isimde bir kitap bulunamadi.\n");
                }
                break;
            case 1:
                printf("Siralama cesidini seciniz: \n1- Fiyat (Artan)\n2- Fiyat (Azalan)\n3- Sayfa Sayisi (Artan)\n4- Sayfa Sayisi (Azalan)\n");
                int orderType;
                scanf("%i", &orderType);

                for (int i = 0; i < kitapCount; i++) 
				{
                    for (int x = i+1; x < kitapCount; x++) 
					{
                        Kitap a = kitaplar[i]; Kitap b = kitaplar[x];
                        if((orderType == 1 && a.fiyat > b.fiyat) || (orderType == 2 && a.fiyat < b.fiyat) || (orderType == 3 && a.sayfaSayisi > b.sayfaSayisi) || (orderType == 4 && a.sayfaSayisi < b.sayfaSayisi)) 
						{
                            Kitap valTemp = a;
                            kitaplar[i] = b;
                            kitaplar[x] = valTemp;
                        }
                    }
                }
                printf("Siralanmis kitaplar su sekilde: \n");
                for (int i = 0; i < kitapCount; i++) 
				{
                    printf("---------------\n");
                    kitapPrint(kitaplar[i]);
                }
        }

    }
    return 0;
}
