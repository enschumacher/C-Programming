/*Kullanıcıdan alınan bir sayı kadar elemanlı bir diziyi dinamik olarak oluşturun. 
Bu diziye kullanıcıdan alınan sayıları atayın. 
Daha sonra dizinin elemanlarının ortalamasını hesaplayan bir fonksiyon yazın*/
#include <stdio.h>
#include <stdlib.h>
float diziyazdir(int dizi[],int uzunluk){
    int toplam=0;
    for(int i=0;i<uzunluk;i++){
        printf("dizi[%d]=  ",i);
        scanf("%d",&dizi[i]);
        toplam += dizi[i];
    }
    for(int i=0;i<uzunluk;i++){
        printf("%d ",dizi[i]);
    }
printf("\n");
    return (float)toplam / uzunluk;
}

int main(){
    int uzunluk,ortt;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d",&uzunluk);
 int *dizi = (int *)malloc(uzunluk * sizeof(int));
 if (dizi == NULL) {
        printf("Bellek tahsisi başarısız.\n");
        return 1;
    }

    float ortalama=diziyazdir(dizi,uzunluk);
    printf("\nOrtalama: %.2f ",ortalama);
        free(dizi);

}