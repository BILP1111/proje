#include <stdio.h>

int main()
{
    int age;

    printf("Lutfen yasinizi giriniz: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Bu kiþi seçimlerde oy verme yeterliliðine sahiptir.\n");
    } else {
        printf("Bu kiþi seçimlerde oy verme yeterliliðine sahip deðildir.\n");
    }

    return 0;
}
//kullanýcýdan yaþýný girmesi beklenir ve girilen yaþ deðeri age deðiþkenine atanýr. Daha sonra, if koþulu kullanýlarak age deðiþkeninin 18 veya daha büyük olup olmadýðý test edilir. Eðer age 18 veya daha büyükse, kullanýcýnýn seçimlerde oy verme yeterliliðine sahip olduðu belirtilir//
