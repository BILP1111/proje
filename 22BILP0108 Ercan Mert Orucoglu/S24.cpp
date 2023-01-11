#include <stdio.h>

int main(void)
{
    
    int no = 0; // int ile deðiþken tanýmladým
	printf("\n Dogal Sayilar"); // ekrana baþlýðý yazdýrdým
	printf("\n -------------");
	for(no = 1; no <= 50; no=no+1)
	{
	printf("\t %i",no);
	}
	
	printf("\n\n Tek Sayilar"); // ekrana baþlýðý yazdýrdým
	printf("\n -------------");
	
	    for(no = 1; no <= 50; no=no+2)
		{
	printf("\t %i",no); //satýr atlatýp ekrana deðeri yazdýrdým
		}
	printf("\n\n Cift Sayilar"); // ekrana baþlýðý yazdýrdým
	printf("\n -------------"); // birbirine karýþmamasý için boþluk býrakýp ----- yazdýrdým
	    for(no = 0; no <= 50; no=no+2)
		{
	printf("\t %i",no);
	}
}
