#include <string.h>
#include <stdio.h>
 
main()
{
    int sayac = 0;
    char sesli_harf[] = {'a','e','i','o','u'}; // sesli hafler programa tanýtýlýr
    char cumle[100];  // 100 karakterlik char programa tanýtýlýr
     
    printf("Bir kelime giriniz: ");
    gets(cumle);
                 // bosluklu ifadeleri okumak icin kullanýlýr.
    if(strlen(cumle) > 100) // eðer 100 karakterden fazla kelime girilirse cok uzun cumle girdiniz uyarýsý verilir.
    {
        printf("Cok uzun kelime girdiniz!.");
    }
    else                 // 100 karakterden fazla deðil ise girilen kelimede kaç sesli harf olduðu ekrana yazdýrýlýr.
    {
        for (int i = 0; i < strlen(cumle); i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(cumle[i] == sesli_harf[j]){
                    sayac++;
                }
            }
        }
    }
    printf("\nGirilen kelimede %d adet sesli haf vardir", sayac);
}
