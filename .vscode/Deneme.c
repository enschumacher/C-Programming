/*Girilen 5 adet sayıyı bir diziye aktardıktan sonra bu diziyi pointer kullanarak tersten yazdırınız.*/
#include <stdio.h>
int main(){
    int dizi[5]={1,2,3,4,5};
    int *p=dizi;

printf("\n5Orijinal dizi: ");
for(int i=0;i<5;i++){
    printf("%d ",*(p+i));
}
printf("\n\nTersten dizi: ");
for(int i=4;i>=0;i--){
    printf("%d ",*(p+i)); // dizi+i de yazılır.
}
}

//Mevcut degerin adresi yazılacagi icin malloc kullanmaya gerek yok.