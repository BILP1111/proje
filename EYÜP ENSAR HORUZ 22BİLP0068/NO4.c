#include <stdio.h>
main() 
{
	int kenar;
	int cevre;          /* KENAR ALAN VE �EVREY� PROGRAMA TANITTIK*/
	int alan;
	printf("Bir Kenari Giriniz:"); /*KENARI G�RMEM�Z� �STEYEN YAZIYI EKRANA YAZDIRDIK */
	scanf("%d",&kenar);           /*KENARI PROGRAMA TANITTIK*/
	cevre = 4 * kenar;            /*�EVREN�N KENAR �LE 4 �N �ARPILARAK BULUNDU�UNU PROGRAMA TANITTIK */
	alan= kenar * kenar;          
	printf("Cevresi = %d",cevre);      /*KAREN�N ALANINI VE �EVRES�N� HESAPLADIKTAN SONRA EKRANA YAZDIRMASINI SA�LADIK*/
	printf("\nAlani = %d",alan); 	
}
