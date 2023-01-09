#include <stdio.h>
 
int main() // Girilen say�n�n m�kemmel say� olup olmad���n� bulan program
{
	// Kendisi hari� b�t�n pozitif b�lenlerinin toplam� kendisine e�it olan say�lara m�kemmel say� denir.
    int sayi;
    int toplam = 0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for(int i = 1; i < sayi; i++)
    {
        if(sayi % i == 0){
            toplam += i;                   
        }
    }
    if(sayi == toplam){
        printf("%d Sayisi mukemmel bir sayidir.",sayi);
    }
    else{
        printf("%d Sayisi mukemmel bir sayi degildir.",sayi);
    }
}
