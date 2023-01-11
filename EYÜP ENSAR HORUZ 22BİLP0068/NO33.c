#include <stdio.h>
 
main()
{
    int sayi;     		// programa sayi ve toplam deðerlerini tanýttýk
    int toplam = 0;
     
    printf("Sayi giriniz: "); 	// ekrana sayi girilmesini isteyen deðerleri yazdýk
    scanf("%d",&sayi);			// girilen deðerin sayi1 olduðunu programa tanýttýk
     
    while(sayi > 0){			// while döngüsünü kullanarak sayinin 0 dan büyük olmasý gerektiðini yazdýk	
 									
        toplam +=  sayi % 10;	// sayýný rakamlarýný toplamasýný saðlayan deðerleri programa tanýttýk
        sayi = sayi / 10;
    }
    printf("Girilen sayinin rakamlarinin toplami  %d dir.",toplam);
