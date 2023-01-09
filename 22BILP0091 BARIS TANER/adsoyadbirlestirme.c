#include <stdio.h>
#include <conio.h>
#include <string.h>
 
void main(void) // Ayri ayri girilen adi ve soyadi bilgilerini birlestirerek tam adini gosteren program
{
      char adi[25];
      char ad2[25];
      char soyadi[25];
      char tamadi[100];
 

      printf("\n Adi        :");
      gets(adi);
      fflush(stdin);
 
      printf("\n Ikinci Adi :");
      gets(ad2);
      fflush(stdin);
 
      printf("\n Soyadi     :");
      gets(soyadi);
      fflush(stdin);
 
      strcpy(tamadi,adi);
      strcat(tamadi," ");
      strcat(tamadi,ad2);
      strcat(tamadi," ");
      strcat(tamadi,soyadi);
 
      printf("\n Adi Soyadi : %s",tamadi);
 
      getch();
}