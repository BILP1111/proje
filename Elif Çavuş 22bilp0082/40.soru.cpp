#include<stdio.h>
int main()
{
    int sayilar[9]={2,24,58,45,60,90,95,100,75};
    int istsayi;
    int konum;
    int i;
    char bulundu = 'E';

    printf("Lütfen bulunması istenilen sayıyı giriniz :",istsayi);
    scanf("%d",&istsayi);

    for (i=0; i<9; i++)
    {
        if (sayilar[i]==istsayi)
        {
            bulundu = 'E';
            konum= i+1;
            break;
        }


    }

    if( bulundu=='E')
    printf("\n %i sayisi listenin %i.sırasında bulunuyor.",istsayi, konum);
    else 
    printf("%i sayısı geçerli değil",istsayi);


    return 0;
}