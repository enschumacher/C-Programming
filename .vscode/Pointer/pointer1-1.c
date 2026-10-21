//Girilen 2 sayıyı sadece pointer değişkenler kullanarak toplayınız.(malloc ile)
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *sayi1ptr, *sayi2ptr, *toplamptr;

    sayi1ptr=(int*)malloc(sizeof(int));
    sayi2ptr=(int*)malloc(sizeof(int));
    toplamptr=(int*)malloc(sizeof(int));

    printf("Birinci sayiyi giriniz: ");
    scanf("%d",sayi1ptr);

    printf("İkinci sayiyi giriniz: ");
    scanf("%d",sayi2ptr);

    
    *toplamptr= *sayi1ptr + *sayi2ptr;
    printf("Toplam: %d\n",*toplamptr);

    free(sayi1ptr);
    free(sayi2ptr);
    free(toplamptr);

    return(0);
}
