/* girilen sayı tek mi çift mi bulan program */
#include <stdio.h>

 
main()
{
    int a,b;
    printf("Sayiyi gir: ");
	scanf("%d",&a);
    if (a%2==0){
	printf("sayi Cift");}
    else{
	printf("sayi Tek");}
    getch();
}