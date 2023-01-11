
#include<stdio.h>
#include<string.h>
int main()
{
    char metin[100];
    char temp;

    int uzunluk;
    int m=0,n=0;

    printf("\n Bir metin giriniz : ");
    gets(metin);

    uzunluk= strlen(metin);

    for(m=0;m<uzunluk-1;m++)
    {
        for(n=m+1; n< uzunluk; n++)
        {
            if (metin[m] > metin[n])
            {
                temp= metin[m];
                metin[m]= metin[n];
                metin[n]=temp;
            }
        }
    }

    printf("\n Harflerin siralaması %s",metin);
    
    return 0;
}