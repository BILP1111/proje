#include <stdio.h>
 
int main()
{
 int sayi1=0;
 int sayi2=0;
 int toplam=0;
 //De�er Atama 
 
 printf(" Iki sayi giriniz... ");//�ki sayi Giriniz.
 printf("\n");
 
 printf("\n Ilk Sayi: ");
 scanf("%i",&sayi1);
 
 printf("\n Ikinci sayi: ");
 scanf("%i",&sayi2);
 
 toplam = sayi1 + sayi2;//Toplam kutusuna sonucu atar.
 printf("\n %d + %d = %d eder.",sayi1, sayi2, toplam);//Sonucu ekrana yazd�r�r.
 
 getch();
}
