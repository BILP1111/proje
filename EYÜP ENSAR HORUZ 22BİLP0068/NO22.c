#include <stdio.h>
int main(){
     int sayi,asal=0;  //SAYI VE ASAL DE�ERLER�N� TANITTIK
     printf("Sayiyi girin : ");  // KULLANICIYA SAYIYI G�RMES�N� S�YLEYEN �IKTIYI YAZDIK
     scanf("%d",&sayi);				//SAY�1 DE�ER�N� PROGRAMA TANITTIK	

     for(int i=2 ; i<sayi ; i++){   // FOR D�NG�S� 2 DEN BA�LAYIP G�R�LEN SAYI KADAR ARTAR
          if(sayi % i == 0){
               asal++;			
          }
     }
     
     if(asal==0)	// E�ER SAYI D�NG�DEN SONRA ASAL �SE EKRANA G�RD���N�Z SAYI ASAL YAZDIRILIR 
          printf("Girdiginiz sayi asal");
     else									// DE��LSE EKRANA G�RD���N�Z SAYI ASAL DE��L YAZDIRILIR
          printf("Girdiginiz sayi asal degil.");
}
