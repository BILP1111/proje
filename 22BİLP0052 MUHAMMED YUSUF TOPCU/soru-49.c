#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char adi[25];
      char ad2[25];
      char soyadi[25];
      char tamadi[100];
      //Deðer atanýr.
 
 
      printf("\n Adi        :");//Kiþinin adýný ister.
      gets(adi);
 
      printf("\n Ikinci Adi :");//Kiþinin ikincil adýný ister.
      gets(ad2);
 
      printf("\n Soyadi     :");//Kiþinin soyadýný ister.
      gets(soyadi);
 
      strcpy(tamadi,adi);
      strcat(tamadi," ");
      strcat(tamadi,ad2);
      strcat(tamadi," ");
      strcat(tamadi,soyadi);
 
      printf("\n Adi Soyadi : %s",tamadi);//Girdiðiniz bilgileri ekrana yazar.
 
      getch();
}
