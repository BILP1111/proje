#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
 
struct hecele
{
      char sayi;
      char *kelime;
};
 
struct hecele s[10] =  {
      {'0',"Sifir"},    /// girilen rakamlar yaz�ya �evrilerek ttan�t�l�r. 
      {'1',"Bir"},
      {'2',"Iki"},
      {'3',"Uc"},
      {'4',"Dort"},
      {'5',"Bes"},
      {'6',"Alti"},
      {'7',"Yedi"},
      {'8',"Sekiz"},
      {'9',"Dokuz"}
};
 
void main(void)
{
      char* hecele(int);     
 
      int sayi = 0;
      char *kelime;
 
      clrscr();
 
      printf("\n Bir sayi giriniz : ");   // kullan�c�san say� girmesi istenir.
      scanf("%i",&sayi);                  // girilen say� sayi1 olarak tan�t�l�r
      fflush(stdin);
 
      kelime = hecele(sayi);				
 
      printf("\n %i : %s ",sayi,kelime);   // sayi ve kelime de�erleri ekrana yazd�r�l�r
      getch();
}
 
char* hecele(int num)
{
      char *sayi;
      char heceleme[100] = " "; 		
 
      int n = 0;
      int p = 0;
      int uzunluk = 0;
      itoa(num,sayi,10);
 
      uzunluk = strlen(sayi);
 
      for(n=0;n<uzunluk;n++)
      {
            for(p = 0;p<10;p++)
            {
                if( s[p].sayi == sayi[n] )
              {
                    strcat(heceleme,s[p].kelime);
                    strcat(heceleme," ");
                    break;
              }
            }
      }
 
      return heceleme;
}
