#include <string.h>
#include <stdio.h>
 
main()
{
    int sayac = 0;
    char sesli_harf[] = {'a','e','i','o','u'}; // sesli hafler programa tan�t�l�r
    char cumle[100];  // 100 karakterlik char programa tan�t�l�r
     
    printf("Bir kelime giriniz: ");
    gets(cumle);
                 // bosluklu ifadeleri okumak icin kullan�l�r.
    if(strlen(cumle) > 100) // e�er 100 karakterden fazla kelime girilirse cok uzun cumle girdiniz uyar�s� verilir.
    {
        printf("Cok uzun kelime girdiniz!.");
    }
    else                 // 100 karakterden fazla de�il ise girilen kelimede ka� sesli harf oldu�u ekrana yazd�r�l�r.
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
