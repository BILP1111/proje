#include <stdio.h>
int main()
{
	int sayi1,sayi2;
	int islem;
//De�er atan�r.	
	
	printf("1. sayiyi giriniz:");//Ki�iden 1.say�y� girmesini ister.
	scanf("%d",&sayi1);
	
	printf("2. sayiyi giriniz:");//Ki�iden 2.say�y� girmesini ister.
	scanf("%d",&sayi2);
	
	printf("\n \n 1.Toplama\n");//Ki�inin yapabilece�i i�lemlerden birisinin se�ilmesi istenir.
	printf("2.cikarma\n");
	printf("3. bolme\n");
	printf("4. carpma\n");
	
	printf("\n islemi seciniz : ");
	scanf("%d",&islem);
	
	switch(islem)//Switch ile i�lem se�imlerini daha kolay hale getirilir.
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
			printf("lutfen gecerli bir sayi giriniz..");//Hatal� say� girdiniz.
}
	
	return  0;
}
