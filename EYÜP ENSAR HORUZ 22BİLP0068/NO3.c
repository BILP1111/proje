#include<stdio.h> /*K�T�PHANEM�Z� TANITTIK */
 
int main() /* C D�L�N�N OLMAZSA OLMAZI MA�ND�R ANA FONKS�YONU YAZMALIYIZ */
{
  int sayi1, sayi2, toplam;   /*DE�ERLER�M�Z� TANITTIK*/
  printf("iki tane sayi girin : "); /* EKRANA YAZDIRDI�IMIZ YAZIYI TANITTIK*/
  scanf("%d%d", &sayi1, &sayi2); /*��LEM YAPILAN SAYILARI TANITTIK*/
  toplam = sayi1+sayi2; /*G�R�LEN DE�ERLER�N TOPLAMI VERECE��N� TANITTIK*/
  printf("\n %d ve %d sayilarinin toplami : %d", sayi1, sayi2, toplam); /*DE�ERLER G�R�LD�KTEN SONRA SAYILARIN TOPLAMINI EKRANA NASIL YANSITACA�INI YAZDIK*/
  
  return 0;
}
