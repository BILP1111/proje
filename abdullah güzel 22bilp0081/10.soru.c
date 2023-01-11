/* grilen iki sayıdan karşılaştırma yapan program */

#include<stdio.h>

int main() {
 
 int sayi1, sayi2;
 printf("ilk sayiyi giriniz :");
 scanf("%d", &sayi1);
 printf("ikinci sayiyi giriniz :");
 scanf("%d",&sayi2);
 if (sayi1==sayi2){
 printf("sayilar esittir");}
 if (sayi1<sayi2){
 printf("%d buyuktur",sayi2);}
 if(sayi1>sayi2){
 printf ("%d buyuktur", sayi1);}
 
 getch();
}