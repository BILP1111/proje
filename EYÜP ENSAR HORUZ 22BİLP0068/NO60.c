#include <stdio.h>
#include <conio.h>
 
struct ogrenci
{
      char ad[25];  // ad 25 karaktere kadar girilebilir
      int yas; 
}p[5],temp;
 
void main(void)  // bo� 
{
      int m = 0;  
      int n = 0;
   
      clrscr();
  
      for(n = 0 ; n< 5; n++ )  
      {
            printf("\n Ogrenci : %i",n+1); 
 
            printf("\n Adi    : ");               // ��renci adi ve ya�� al�n�r.
            gets(p[n].ad); 
            fflush(stdin);
 
            printf("\n Yasi   : ");
            scanf("%i",&p[n].yas);
            fflush(stdin);
      }
 
 
      for( m = 0 ; m < 4; m++ )					// al�nan de�erlerin en b�y���ne ula��la kadar d�ng� devam eder. En k���k en ba�a en b�y�k en sona gelecek �ekilde s�ralanan kadar d�ng� devam eder.
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
 
      printf("\n Ogrencilerin Yaslari \n");    // ��rencilerin ya�lar� belirtilen �ekilde ekrana yans�tl�lr.
 
      for( n = 0;  n <5; n++ )
      {
          printf("\n %s \t %i",p[n].ad,p[n].yas);
      }
 
      getch();
}
