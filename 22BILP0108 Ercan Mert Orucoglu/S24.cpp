#include <stdio.h>

int main(void)
{
    
    int no = 0; // int ile de�i�ken tan�mlad�m
	printf("\n Dogal Sayilar"); // ekrana ba�l��� yazd�rd�m
	printf("\n -------------");
	for(no = 1; no <= 50; no=no+1)
	{
	printf("\t %i",no);
	}
	
	printf("\n\n Tek Sayilar"); // ekrana ba�l��� yazd�rd�m
	printf("\n -------------");
	
	    for(no = 1; no <= 50; no=no+2)
		{
	printf("\t %i",no); //sat�r atlat�p ekrana de�eri yazd�rd�m
		}
	printf("\n\n Cift Sayilar"); // ekrana ba�l��� yazd�rd�m
	printf("\n -------------"); // birbirine kar��mamas� i�in bo�luk b�rak�p ----- yazd�rd�m
	    for(no = 0; no <= 50; no=no+2)
		{
	printf("\t %i",no);
	}
}
