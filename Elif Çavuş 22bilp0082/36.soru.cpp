#include<stdio.h>
#include<math.h>
int main()
{
    int sayi,i,ogrencisay; //
    int puan[50];
    int toplam;
    float ort;


    printf("\n Puanlarin hesaplanmasi...");
    printf("\n =========================\n");
 
    printf("%Kac Ogrencinin Notu girilecek? : ",ogrencisay+1);
    scanf("%i",&ogrencisay);
    fflush(stdin);
 
    for(i=0 ; i <= ogrencisay-1 ;i++ )
 {
      printf("%i. Ogrenicinin puani : ",i+1);
         scanf("%i",&puan[i]);

     toplam = toplam + puan[i];
 }
 
    printf("\n Ogrenci Sayisi = %i",i);
    printf("\n Puan Toplami = %i",toplam);
     ort=toplam/i ;
    printf("\n Puan Ortalamasi = %f\n",ort);

 return 0;

}