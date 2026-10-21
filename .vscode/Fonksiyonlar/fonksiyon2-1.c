//Parametre olarak gönderilen bir diziyi yazdıran fonksiyon.(eleman sayısı da gönderilecektir. void diziYazdir(int dizi[],int elemanSayi)
#include <stdio.h>
void diziYazdir(int dizi[],int eleman_sayi){
    for(int i=0;i<eleman_sayi;i++){
       printf("%d ",dizi[i]);
    }
    printf("\n");
}

int main(){
    int mydizi[5]={10,20,30,40,50};
    int diziboyutu=5;
    diziYazdir(mydizi, diziboyutu);

    return(0);
}