#include <stdio.h>
#include <conio.h>
 
main()
{
      char kelime[10];		/* 10 tane keline değeri tanımlanıyor */
 
      printf("\n Kelimeyi girin : ");		/* ekrana yazı yazdırılıyor */
      gets(kelime); 	/* kelime getirmesi isteniyor */
      fflush(stdin);		/* çıkış akışı */
 
      printf("\n Girilen Kelime : %s",kelime);			/* ekrana yazı yazdırılıyor */
      getch();
}