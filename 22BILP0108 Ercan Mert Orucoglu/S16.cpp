#include <stdio.h>


// HAFTANIN G�N NUMARASINA KAR�ILIK GELEN G�N ADINI VEREN PROGRAM
/*�lk olarak g�n ad�nda bir de�i�ken atad�m ve kullan�c�dan bir g�n numaras� istedim 1 ila 7 aras�nda ald�ktan
sonra scanf komutu ile okuttum kullan�c�n�n girdi�i de�eri
Ard�ndan switch-case yap�s� ile 7 case olu�turup ba�tan ba�layarak g�nleri yazd�m 7 case'e sonras�nda
en son 1 ila 7 de�ilde �rne�in 8 girildi�i durumlarda program�n ge�ersiz yazd�rmas�n� istedim switch-case default komutu ile*/

int main(void)
{
	int gun;
	
	printf("Haftanin gun numarasini giriniz. (1 ila 7 arasinda): ");
	scanf("%d",&gun);
	
	switch (gun) {
		case 1:
			printf("Haftanin gun numarasina karsilik gelen gunun adi: Pazartesi\n");
		break;
		
	    case 2:
	    	printf("Haftanin gun numarasina karsilik gelen gunun adi: Sali\n");
	    break;
	    
	    case 3:
	    	printf("Haftanin gun numarasina karsilik gelen gunun adi: Carsamba\n");
	    break;
	    
	    case 4:
	    	printf("Haftanin gun numarasina karsilik gelen gunun adi: Persembe\n");
	    break;
	    
	    case 5:
	    	printf("Haftanin gun numarasina karsilik gelen gunun adi: Cuma\n");
	    break;
	    
	    case 6:
	        printf("Haftanin gun numarasina karsilik gelen gunun adi: Cumartesi\n");
	    break;
	        
	    case 7:
	    	printf("Haftanin gun numarasina karsilik gelen gunun adi: Pazar\n");
	    break;
	    
	    default:
	    	printf("Gecersiz gun numarasi\n");
	    break;
	}
}
