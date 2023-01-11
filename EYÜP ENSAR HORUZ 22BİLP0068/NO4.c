#include <stdio.h>
main() 
{
	int kenar;
	int cevre;          /* KENAR ALAN VE ÇEVREYÝ PROGRAMA TANITTIK*/
	int alan;
	printf("Bir Kenari Giriniz:"); /*KENARI GÝRMEMÝZÝ ÝSTEYEN YAZIYI EKRANA YAZDIRDIK */
	scanf("%d",&kenar);           /*KENARI PROGRAMA TANITTIK*/
	cevre = 4 * kenar;            /*ÇEVRENÝN KENAR ÝLE 4 ÜN ÇARPILARAK BULUNDUÐUNU PROGRAMA TANITTIK */
	alan= kenar * kenar;          
	printf("Cevresi = %d",cevre);      /*KARENÝN ALANINI VE ÇEVRESÝNÝ HESAPLADIKTAN SONRA EKRANA YAZDIRMASINI SAÐLADIK*/
	printf("\nAlani = %d",alan); 	
}
