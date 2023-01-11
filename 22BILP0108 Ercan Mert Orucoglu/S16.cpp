#include <stdio.h>


// HAFTANIN GÜN NUMARASINA KARÞILIK GELEN GÜN ADINI VEREN PROGRAM
/*Ýlk olarak gün adýnda bir deðiþken atadým ve kullanýcýdan bir gün numarasý istedim 1 ila 7 arasýnda aldýktan
sonra scanf komutu ile okuttum kullanýcýnýn girdiði deðeri
Ardýndan switch-case yapýsý ile 7 case oluþturup baþtan baþlayarak günleri yazdým 7 case'e sonrasýnda
en son 1 ila 7 deðilde örneðin 8 girildiði durumlarda programýn geçersiz yazdýrmasýný istedim switch-case default komutu ile*/

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
