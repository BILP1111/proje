#include <stdio.h>
#include <conio.h>
 
struct ogrenci
{
      char ad[25];  // ad 25 karaktere kadar girilebilir
      int yas; 
}p[5],temp;
 
void main(void)  // boþ 
{
      int m = 0;  
      int n = 0;
   
      clrscr();
  
      for(n = 0 ; n< 5; n++ )  
      {
            printf("\n Ogrenci : %i",n+1); 
 
            printf("\n Adi    : ");               // öðrenci adi ve yaþý alýnýr.
            gets(p[n].ad); 
            fflush(stdin);
 
            printf("\n Yasi   : ");
            scanf("%i",&p[n].yas);
            fflush(stdin);
      }
 
 
      for( m = 0 ; m < 4; m++ )					// alýnan deðerlerin en büyüðüne ulaþýla kadar döngü devam eder. En küçük en baþa en büyük en sona gelecek þekilde sýralanan kadar döngü devam eder.
      {
            for( n = m + 1; n < 5;n++)
            {
                if( p[m].yas > p[n].yas )
                {
                    temp = p[m];
                    p[m] = p[n];
                    p[n] = temp;
                }
            }
      }
 
      printf("\n Ogrencilerin Yaslari \n");    // öðrencilerin yaþlarý belirtilen þekilde ekrana yansýtlýlr.
 
      for( n = 0;  n <5; n++ )
      {
          printf("\n %s \t %i",p[n].ad,p[n].yas);
      }
 
      getch();
}
