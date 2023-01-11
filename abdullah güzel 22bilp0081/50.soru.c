//karakterleri alfabetik sýralayan program
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main() {
   int i,j,a,temp;
   char d;
   do {
      char word[20]={0};
      a=0;
      printf("\nBir Kelime Girin ---> "); scanf("%s",&word);
      printf("\nGirdiginiz Kelime ---> %s",word);
      for(i=0;i<20;i++) {
         if(word[i]>0) a++; }
 //Yukarýdaki for döngüsünde girilen kelimenin kaç karakterden oluþtuðu bulunuyor.
      for(i=0;i<a;i++) {
         for(j=0;j<i;j++) {
            if(word[i]<word[j]) {
               temp=word[i];
               word[i]=word[j];
               word[j]=temp;
            }
         }
      }
      printf("\n\nKelimenin Alfabatik Sirali Sekli ---> ");
      for(i=0;i<a;i++)
         printf("%c",word[i]);
   printf("\n\nTekrar Denemek Ister Misiniz ? E/H ---> "); d=getch();
   } while ( d=='e' || d=='E' );
   getch();
}

