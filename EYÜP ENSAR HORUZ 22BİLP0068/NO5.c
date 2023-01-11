#include <stdio.h>
 
main()      
{
    int kisakenar;
    int uzunkenar;
    int cevre;
    int alan;			/* BURADA DEÐERLERÝ TANITTIK*/
     
     
    printf("Kisa kenari giriniz: ");  /*EKRANA KISA KENARI GÝRMESÝNÝ ÝSTEYEN BÝR YAZI YAZDIRDIK*/
    scanf("%d",&kisakenar);           /*DEÐER GÝRÝLDÝKTEN SONRA BUNUN KISA KENAR OLDUÐUNU PROGRAMA TANITTIK*/
    printf("Uzun kenari giriniz: ");	/*UZUN KENARI GÝRMESÝNÝ ÝSTEYEN BÝR YAZI YAZDIK*/
    scanf("%d",&uzunkenar);				/* GÝRÝKLEN DEÐERÝN UZUN KENAR OLDUÐUNU PROGRAMA TANITTIK*/
     
    cevre = 2 * (kisakenar + uzunkenar);	/*KISA KENAR VE UZUN KENARIN TOPLAMININ 2 KATININ ÇEVRE OLDUÐUNU PROGRAMA TANITTIK*/	
    alan = kisakenar * uzunkenar;				/* KISA VE UZUN KENAR TOPLAMININ ALANI VERDÝÐÝNÝ PROGRAMA TANITTIK*/
     				
    printf("Dikdortgenin cevresi = %d\n",cevre);	/*DÝKTÖRTGEN ÇEVRE VE ALANININ BÝZE VEREN EKRAN ÇIKTISINI YAZDIK*/
    printf("Dikdortgenin alani = %d",alan);
     
}
