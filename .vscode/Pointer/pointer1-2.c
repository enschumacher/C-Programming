/*Girilen A ve B sayılarını yer değiştiren fonksiyonu yazınız.
(Sayı alma ve sonuçları yazdırma işlemleri “main” içinde yapılacaktır.) */
#include <stdio.h>
void yerdegistirme(int *sayi1, int *sayi2){
int gecici=*sayi1;

*sayi1=*sayi2;
*sayi2=gecici;
}

int main(){
    int sayi1,sayi2,gecici=0;

    printf("Birinci sayiyi giriniz:");
    scanf("%d",&sayi1);

    printf("İkinci sayiyi giriniz: ");
    scanf("%d",&sayi2);
  

 yerdegistirme(&sayi1,&sayi2);

printf("\nSayi1= %d \nSayi2= %d",sayi1,sayi2);
    return(0);
}

