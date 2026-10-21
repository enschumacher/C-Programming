/*Girilen 5 sayıyı bir diziye aktardıktan sonra bu diziyi fonksiyona gönderip dizideki en büyük ve en küçük sayı
 ile dizi toplamını bulup sonuçları main içinde yazdırınız.*/
 #include <stdio.h>
 void dizi_yazdir(int uzunluk,int *dizi,int *buyuk, int *kucuk, int *toplam){
*buyuk=dizi[0];
*kucuk=dizi[0];
*toplam=0;
  
for(int i=0;i<uzunluk;i++){
    if(dizi[i]>*buyuk){
      *buyuk=dizi[i];
    }
     if(dizi[i]<*kucuk){
    *kucuk=dizi[i];
}
    *toplam+=dizi[i];
}
}

 int main(){
    int uzunluk=5;
    int dizi[5];
    int buyuk,kucuk,toplam;

    for(int i=0;i<uzunluk;i++){
    printf("%d. sayiyi giriniz: ",i+1);
    scanf("%d",&dizi[i]);
}

printf("Dizi: \n");
for(int i=0;i<uzunluk;i++){
    printf("%d ",dizi[i]);
}
printf("\n----------------");

dizi_yazdir(uzunluk,dizi,&buyuk,&kucuk,&toplam);

    printf("\nEn buyuk: %d\n",buyuk);

    printf("En kucuk: %d\n",kucuk);

    printf("Toplam: %d\n",toplam);

    return(0);
 }