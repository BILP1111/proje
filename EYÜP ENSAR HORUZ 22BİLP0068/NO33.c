#include <stdio.h>
 
main()
{
    int sayi;     		// programa sayi ve toplam de�erlerini tan�tt�k
    int toplam = 0;
     
    printf("Sayi giriniz: "); 	// ekrana sayi girilmesini isteyen de�erleri yazd�k
    scanf("%d",&sayi);			// girilen de�erin sayi1 oldu�unu programa tan�tt�k
     
    while(sayi > 0){			// while d�ng�s�n� kullanarak sayinin 0 dan b�y�k olmas� gerekti�ini yazd�k	
 									
        toplam +=  sayi % 10;	// say�n� rakamlar�n� toplamas�n� sa�layan de�erleri programa tan�tt�k
        sayi = sayi / 10;
    }
    printf("Girilen sayinin rakamlarinin toplami  %d dir.",toplam);
