#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)
{
      char metin[100];  // 100 er karatkterlik char de�eri atand�
      char tersi[100];
 
      int uzunluk = 0;
      int n = 0;
 
      clrscr();
 
      printf("\n Bir metin giriniz : " );  // metin girilmesi isteniyor. 
      gets(metin);
      fflush(stdin);
 
      uzunluk = strlen(metin);
 
      for( n = 0 ; n < uzunluk; n++ )  //for d�ng�s� sayesinde d�ng� kelime tersine gidene kadar devam eder.
      {
          ters[n] = metin[uzunluk-1-n];
      }
 
      ters[n] = '\0';
 
      printf("\n Girilen Metin : %s",metin);  // girilen metin ve bu metnin tersi ekrana ��kt� olarak yaz�l�r.
      printf("\n Metnin Tersi  : %s",ters);
      getch();
}
