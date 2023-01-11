#include <stdio.h>
#include <conio.h>
#include <string.h>
 
 main(void)
{
      char adi[25];
      char ad2[25];
      char soyadi[25];
      char tamadi[100];
 
 
      printf("\n Adi        :");
      gets(adi);
 
      printf("\n Ikinci Adi :");
      gets(ad2);
 
      printf("\n Soyadi     :");
      gets(soyadi);
 
      strcpy(tamadi,adi);
      strcat(tamadi," ");
      strcat(tamadi,ad2);
      strcat(tamadi," ");
      strcat(tamadi,soyadi);
 
      printf("\n Adi Soyadi : %s",tamadi);
 
      getch();
}
