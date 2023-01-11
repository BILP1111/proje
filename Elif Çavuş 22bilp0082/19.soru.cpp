#include <stdio.h>

int main()
{
    float s1, s2, sonuc;
    char islem = ' ';
    
    printf("Yapilacak islemi giriniz( +,-,/,*,% ) = ");
    scanf("%c",&islem);
    
    printf("1.sayiyi girin = ");  scanf("%f",&s1);
    printf("\n2.sayiyi girin = ");  scanf("%f",&s2);
    
    if( islem == '+')
         printf("%f", s1 + s2);
    else if( islem == '-')
         printf("%f", s1 - s2);
    else if( islem == '*')
         printf("%f", s1 * s2);
    else if( islem == '/')
        printf("%f", s1 + s2);
    else
        printf("\nGecerli bir islem girmedin.");
        
    return 0;
}