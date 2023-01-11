#include <stdio.h>
int main()
{
	int sayi1,sayi2;
	int islem;
//Deðer atanýr.	
	
	printf("1. sayiyi giriniz:");//Kiþiden 1.sayýyý girmesini ister.
	scanf("%d",&sayi1);
	
	printf("2. sayiyi giriniz:");//Kiþiden 2.sayýyý girmesini ister.
	scanf("%d",&sayi2);
	
	printf("\n \n 1.Toplama\n");//Kiþinin yapabileceði iþlemlerden birisinin seçilmesi istenir.
	printf("2.cikarma\n");
	printf("3. bolme\n");
	printf("4. carpma\n");
	
	printf("\n islemi seciniz : ");
	scanf("%d",&islem);
	
	switch(islem)//Switch ile iþlem seçimlerini daha kolay hale getirilir.
	{
	case 1:
	   printf("toplama isleminin sonucu : %d",sayi1+sayi2);
	    break;
	case 2:
	    printf("cikarma isleminin sonucu : %d",sayi1-sayi2);
	    break;
	case 3:
	    printf("bolem islemini sonucu: %f",(float) sayi1/ (float) sayi2);
	    break;
	case 4:
	    printf("carpma isleminin sonucu :%d ",sayi1 * sayi2 );
	    break;	
	default:
			printf("lutfen gecerli bir sayi giriniz..");//Hatalý sayý girdiniz.
}
	
	return  0;
}
