#include <stdio.h>
 
main()
{
    int faktoriyel = 1; // faktoriyel ve sayiyi programa tan�tt�k
    int sayi;
     
    printf("Bir sayi giriniz: ");  //kullan�c�dan sayi girmesini ve girilen say�n�n sayi oldu�unu programa tan�tt�k
    scanf("%d",&sayi);
     
    for(int i = 1; i <= sayi; i++)  // for d�ng�s� ile girilen sayinin faktoriyeli 1 e ula�ana dek d�nmesini programa tan�tt�k
    {
        faktoriyel *= i;                                      
    }
    printf("%d != %d",sayi, faktoriyel);
}
