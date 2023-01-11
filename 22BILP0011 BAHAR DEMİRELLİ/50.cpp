#include <stdio.h>
#include <conio.h>
#include <string.h>
 
main()
{
      char kelime1[25];		/* 25 harflik kelime tanımlanıyor */
      char kelime2[25];		/* 25 harflik kelime tanımlanıyor */	
      int sonuc;		/* değer tanımlanıyor */
 
      printf("\n Birinci kelimeyi giriniz :");		/* ekrana yazı yazdırılıyor */
      gets(kelime1);		/* kelime getirmesi isteniyor */
      fflush(stdin);		/* çıkış akışı */
 
      printf("\n Ikinci kelimeyi giriniz :");		/* ekrana yazı yazdırılıyor */
      gets(kelime2);		/* kelime getirmesi isteniyor */
      fflush(stdin);		/* çıkış akışı */
 
      sonuc = strcmp(kelime1,kelime2);
 
      if( sonuc == 0 )		/* eğer sonuç 0'a eşit ise */
          printf("\n kelimeler aynidir. ");		/* ekrana yazı yazdırılıyor */
      else /* değilse */
      if( sonuc > 1 )		/* eğer sonuç 1'den büyük ise */
    {
          printf("\n Birinci kelime daha uzun.");		/* ekrana yazı yazdırılıyor */
      }
      else	/* değilse */
      if( sonuc < 1)			/* eğer sonuç 1'den küçük ise */
      {
          printf("\n Ikinci kelime daha uzun.");		/* ekrana yazı yazdırılıyor */
      }
 
      getch();
}