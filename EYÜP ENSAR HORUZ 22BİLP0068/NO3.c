#include<stdio.h> /*KÜTÜPHANEMÝZÝ TANITTIK */
 
int main() /* C DÝLÝNÝN OLMAZSA OLMAZI MAÝNDÝR ANA FONKSÝYONU YAZMALIYIZ */
{
  int sayi1, sayi2, toplam;   /*DEÐERLERÝMÝZÝ TANITTIK*/
  printf("iki tane sayi girin : "); /* EKRANA YAZDIRDIÐIMIZ YAZIYI TANITTIK*/
  scanf("%d%d", &sayi1, &sayi2); /*ÝÞLEM YAPILAN SAYILARI TANITTIK*/
  toplam = sayi1+sayi2; /*GÝRÝLEN DEÐERLERÝN TOPLAMI VERECEÐÝNÝ TANITTIK*/
  printf("\n %d ve %d sayilarinin toplami : %d", sayi1, sayi2, toplam); /*DEÐERLER GÝRÝLDÝKTEN SONRA SAYILARIN TOPLAMINI EKRANA NASIL YANSITACAÐINI YAZDIK*/
  
  return 0;
}
