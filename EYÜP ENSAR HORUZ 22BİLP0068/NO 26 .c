#include <stdio.h>
 
main()
{
    int faktoriyel = 1; // faktoriyel ve sayiyi programa tanýttýk
    int sayi;
     
    printf("Bir sayi giriniz: ");  //kullanýcýdan sayi girmesini ve girilen sayýnýn sayi olduðunu programa tanýttýk
    scanf("%d",&sayi);
     
    for(int i = 1; i <= sayi; i++)  // for döngüsü ile girilen sayinin faktoriyeli 1 e ulaþana dek dönmesini programa tanýttýk
    {
        faktoriyel *= i;                                      
    }
    printf("%d != %d",sayi, faktoriyel);
}
