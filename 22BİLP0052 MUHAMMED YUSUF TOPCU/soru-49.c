#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
      char adi[25];
      char ad2[25];
      char soyadi[25];
      char tamadi[100];
      //De�er atan�r.
 
 
      printf("\n Adi        :");//Ki�inin ad�n� ister.
      gets(adi);
 
      printf("\n Ikinci Adi :");//Ki�inin ikincil ad�n� ister.
      gets(ad2);
 
      printf("\n Soyadi     :");//Ki�inin soyad�n� ister.
      gets(soyadi);
 
      strcpy(tamadi,adi);
      strcat(tamadi," ");
      strcat(tamadi,ad2);
      strcat(tamadi," ");
      strcat(tamadi,soyadi);
 
      printf("\n Adi Soyadi : %s",tamadi);//Girdi�iniz bilgileri ekrana yazar.
 
      getch();
}
