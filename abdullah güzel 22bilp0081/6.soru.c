/* yarıçapı girilen dairenin alanı ve çevresini hesaplayan program */
#include<stdio.h>
int main()
{
	int yaricap;
	int alani;
	int piDegeri = 3.14;
	
	printf("daire yaricapini giriniz : ");
	scanf("%d",&yaricap);
	
	alani=piDegeri*yaricap*yaricap;
	
	printf("girilen degerdeki daire alani : %d",alani);
	getch();
}