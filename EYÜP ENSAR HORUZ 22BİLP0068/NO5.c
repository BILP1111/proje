#include <stdio.h>
 
main()      
{
    int kisakenar;
    int uzunkenar;
    int cevre;
    int alan;			/* BURADA DE�ERLER� TANITTIK*/
     
     
    printf("Kisa kenari giriniz: ");  /*EKRANA KISA KENARI G�RMES�N� �STEYEN B�R YAZI YAZDIRDIK*/
    scanf("%d",&kisakenar);           /*DE�ER G�R�LD�KTEN SONRA BUNUN KISA KENAR OLDU�UNU PROGRAMA TANITTIK*/
    printf("Uzun kenari giriniz: ");	/*UZUN KENARI G�RMES�N� �STEYEN B�R YAZI YAZDIK*/
    scanf("%d",&uzunkenar);				/* G�R�KLEN DE�ER�N UZUN KENAR OLDU�UNU PROGRAMA TANITTIK*/
     
    cevre = 2 * (kisakenar + uzunkenar);	/*KISA KENAR VE UZUN KENARIN TOPLAMININ 2 KATININ �EVRE OLDU�UNU PROGRAMA TANITTIK*/	
    alan = kisakenar * uzunkenar;				/* KISA VE UZUN KENAR TOPLAMININ ALANI VERD���N� PROGRAMA TANITTIK*/
     				
    printf("Dikdortgenin cevresi = %d\n",cevre);	/*D�KT�RTGEN �EVRE VE ALANININ B�ZE VEREN EKRAN �IKTISINI YAZDIK*/
    printf("Dikdortgenin alani = %d",alan);
     
}
