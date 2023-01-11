#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void)  // boþ 
{
      char adi[25];   // ad soyad tamad  25 karaktere kadar giriþlidir
      char ad2[25]; 
      char soyadi[25];
      char tamadi[100];
 
      clrscr();
 
      printf("\n Adi        :");    // ad ikinci ad soyad sorulur ve giriþ yapýlýr
      gets(adi);
      fflush(stdin);
 
      printf("\n Ikinci Adi :");
      gets(ad2);
      fflush(stdin);
 
      printf("\n Soyadi     :");
      gets(soyadi);
      fflush(stdin);
 
      strcpy(tamadi,adi);
      strcat(tamadi," ");          /// girilen ad ve soyad bilgileri birleþtirilir ve tam ad olarak tanýmlanýr
      strcat(tamadi,ad2);
      strcat(tamadi," ");
      strcat(tamadi,soyadi);
 
      printf("\n Adi Soyadi : %s",tamadi);
 
      getch();
}
