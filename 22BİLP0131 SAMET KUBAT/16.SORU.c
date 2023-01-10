#include <stdio.h>


int main(){
	
    int k1, k2, alan, cevre;

    printf("Kisa Kenar giriniz: ");
    scanf("%d",& k1);
    
    printf("Uzun Kenar giriniz: ");
    scanf("%d",& k2);
   
    alan = k1*k2;
    cevre = 2*(k1+k2);
    
    printf("Dikdortgenin Cevresi : %d", cevre);
    printf("Dikdortgenin Alani : %d", alan);
    
    return 0;
}

//  kýsa ve uzun kenarýn girilmesini istedik ardýndan onlarý okuduk//
// alanýn ve cevrenin nasýl bulanacaðýný yazdýk//
// cevreyi ve alaný printf ile ekrana yazdýrdýk//
