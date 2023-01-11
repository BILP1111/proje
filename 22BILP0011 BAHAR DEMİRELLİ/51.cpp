#include <stdio.h>
#include <conio.h>
#include <string.h>
 
main()
{
      char adi[25];		/* 25 harflik değer tanımlanıyor */
      char ad2[25];		/* 25 harflik değer tanımlanıyor */
      char soyadi[25];		/* 25 harflik değer tanımlanıyor */
      char tamadi[100];		/* 100 harflik değer tanımlanıyor */
 
      printf("\n Adi :");		/* değer tanımlanıyor */
      gets(adi);		/* kelime getirmesi isteniyor */
      fflush(stdin);		/* çıkış akışı */
 
      printf("\n Ikinci Adi :");		/* değer tanımlanıyor */
      gets(ad2);		/* kelime getirmesi isteniyor */
      fflush(stdin);		/* çıkış akışı */		
 
      printf("\n Soyadi :");		/* değer tanımlanıyor */
      gets(soyadi);		/* kelime getirmesi isteniyor */
      fflush(stdin);		/* çıkış akışı */
 
      strcpy(tamadi,adi);		/* parametre değerini geri döndürür */
      strcat(tamadi," ");		/* parametre değerini geri döndürür */
      strcat(tamadi,ad2);		/* parametre değerini geri döndürür */
      strcat(tamadi," ");		/* parametre değerini geri döndürür */
      strcat(tamadi,soyadi);		/* parametre değerini geri döndürür */
 
      printf("\n Adi Soyadi : %s",tamadi);		/* değer tanımlanıyor */
 
      getch();
}