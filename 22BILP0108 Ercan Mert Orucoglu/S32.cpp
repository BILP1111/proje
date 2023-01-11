// YAPMAKTA ZORLANDIÐIM ÝÇÝN BÝRAZ YARDIM ALDIM.

#include <stdio.h>
 
int main(void)
{
	float sayi1 = 0, sayi2 = 0; //float,double ve char deðiþkeni atadým
    double sonuc = 0;
    char islem = ' ';
{ 
    printf("1.Sayiyi girin. : "); // kullanýcýdan bir deðer girmesini isteyip scanf ile okuttum
	scanf("%f",&sayi1);
	fflush(stdin);
	
	printf("2.Sayiyi girin. : "); // kullanýcýdan bir deðer girmesini isteyip scanf ile okuttum
	scanf("%f",&sayi2);
	fflush(stdin);
	
	printf("Yapilacak islemi secin. (+  -  /  *  %): ");  // kullanýcýdan yapýlacak iþlemi girmesini isteyip scanf ile okuttum
	scanf("%c",&islem);
	fflush(stdin);
	
	if( islem == '+') // if-else komutunu iþlemleri yaptýrmak için kullandým.
	    sonuc = sayi1 + sayi2; // toplama iþlemi yapýlmasý istendiðinde yapýlacak iþlem
	else if( islem == '-') // cýkarma iþlemi yapýlmasý istendiðinde yapýlacak iþlem
	    sonuc = sayi1 - sayi2;
	else if( islem == '*') // çarpma iþlemi yapýlmasý istendiðinde yapýlacak iþlem
	    sonuc = sayi1 * sayi2;
	else if( islem == '/')
{
    if( sayi2 > 0) // bölme iþlemi yapýlmasý istendiðinde yapýlacak iþlem
	    sonuc = sayi1/sayi2;
	else
	
	printf("Program sifira bolme hatasi verdi."); // kullanýcýnýn sýfýra böl dediðinde yazýlan þey
}
    else
	printf("Gecerli bir islem girin."); // kullanýcýnýn istenilenler dýþýnda yapýlan bir iþlemde ekrana yazýlacak yazý
	printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc); // sonuçlarý yazdýrdým.
    printf("\n\n Baska hesaplama yapmak istermisiniz(E-H): "); // kullanýcýdan baþka hesap yapýlýp yapýlmayacaðýný girilmesini istedim.
	fflush(stdin);
}
}
