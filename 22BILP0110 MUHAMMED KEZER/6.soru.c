//Yar� �ap� girilen dairenin alan�n� ve �evresini bulan program


#include <stdio.h>

int main(){

int yaricap;
int alani;
int pidegeri=3.14;

printf("Daire yar capini giriniz:");
scanf("%d",&yaricap);

alani=pidegeri*yaricap*yaricap;

printf("Girilen degerdeki daire alan�:%d",alani);

getch();
}
