// YAPMAKTA ZORLANDI�IM ���N B�RAZ YARDIM ALDIM.

#include <stdio.h>
 
int main(void)
{
	float sayi1 = 0, sayi2 = 0; //float,double ve char de�i�keni atad�m
    double sonuc = 0;
    char islem = ' ';
{ 
    printf("1.Sayiyi girin. : "); // kullan�c�dan bir de�er girmesini isteyip scanf ile okuttum
	scanf("%f",&sayi1);
	fflush(stdin);
	
	printf("2.Sayiyi girin. : "); // kullan�c�dan bir de�er girmesini isteyip scanf ile okuttum
	scanf("%f",&sayi2);
	fflush(stdin);
	
	printf("Yapilacak islemi secin. (+  -  /  *  %): ");  // kullan�c�dan yap�lacak i�lemi girmesini isteyip scanf ile okuttum
	scanf("%c",&islem);
	fflush(stdin);
	
	if( islem == '+') // if-else komutunu i�lemleri yapt�rmak i�in kulland�m.
	    sonuc = sayi1 + sayi2; // toplama i�lemi yap�lmas� istendi�inde yap�lacak i�lem
	else if( islem == '-') // c�karma i�lemi yap�lmas� istendi�inde yap�lacak i�lem
	    sonuc = sayi1 - sayi2;
	else if( islem == '*') // �arpma i�lemi yap�lmas� istendi�inde yap�lacak i�lem
	    sonuc = sayi1 * sayi2;
	else if( islem == '/')
{
    if( sayi2 > 0) // b�lme i�lemi yap�lmas� istendi�inde yap�lacak i�lem
	    sonuc = sayi1/sayi2;
	else
	
	printf("Program sifira bolme hatasi verdi."); // kullan�c�n�n s�f�ra b�l dedi�inde yaz�lan �ey
}
    else
	printf("Gecerli bir islem girin."); // kullan�c�n�n istenilenler d���nda yap�lan bir i�lemde ekrana yaz�lacak yaz�
	printf("\n\n %.2f %c %.2f = %.3f",sayi1,islem,sayi2,sonuc); // sonu�lar� yazd�rd�m.
    printf("\n\n Baska hesaplama yapmak istermisiniz(E-H): "); // kullan�c�dan ba�ka hesap yap�l�p yap�lmayaca��n� girilmesini istedim.
	fflush(stdin);
}
}
