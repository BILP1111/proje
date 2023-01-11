#include <stdio.h>
int main(){
     int sayi,asal=0;  //SAYI VE ASAL DEÐERLERÝNÝ TANITTIK
     printf("Sayiyi girin : ");  // KULLANICIYA SAYIYI GÝRMESÝNÝ SÖYLEYEN ÇIKTIYI YAZDIK
     scanf("%d",&sayi);				//SAYÝ1 DEÐERÝNÝ PROGRAMA TANITTIK	

     for(int i=2 ; i<sayi ; i++){   // FOR DÖNGÜSÜ 2 DEN BAÞLAYIP GÝRÝLEN SAYI KADAR ARTAR
          if(sayi % i == 0){
               asal++;			
          }
     }
     
     if(asal==0)	// EÐER SAYI DÖNGÜDEN SONRA ASAL ÝSE EKRANA GÝRDÝÐÝNÝZ SAYI ASAL YAZDIRILIR 
          printf("Girdiginiz sayi asal");
     else									// DEÐÝLSE EKRANA GÝRDÝÐÝNÝZ SAYI ASAL DEÐÝL YAZDIRILIR
          printf("Girdiginiz sayi asal degil.");
}
