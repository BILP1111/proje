//Girilen y�l�n art�k y�l olup olmad���n� tespit eden program 

#include <stdio.h>

int main()
{
  int yil;

  printf("Yili giriniz:");
  scanf("%d",&yil);

  if (yil % 4 == 0)
  {
    if (yil % 100 == 0)
    {
      if (yil % 400 == 0)
      {
        printf("%d, artik yildir.\n",yil);
      }
      else
      {
        printf("%d, artik yil degildir.\n",yil);
      }
    }
    else
    {
      printf("%d, artik yildir.\n",yil);
    }
  }
  else
  {
    printf("%d, artik yil degildir.\n",yil);
  }

  return 0;
}

