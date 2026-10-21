/*Girilen 5 adet sayıyı bir diziye aktardıktan sonra bu diziyi pointer kullanarak tersten yazdırınız.*/
/*
#include <stdio.h>

void dizi_yaz(int dizi[5]){
    int *ptr=dizi;

for(int i=0;i<5;i++){
    printf("%d. sayiyi giriniz: ",i+1);
    scanf("%d",ptr);
    ptr++;
}

printf("\nOrijinal dizi:\n ");
ptr=dizi;
for(int i=0;i<5;i++){
printf("%d ",*ptr);
ptr++;
}

printf("\nTersten yazılmıs dizi:\n ");
ptr=dizi+4;
for(int i=4;i>=0;i--){
    printf("%d ",*ptr);
    ptr--;
}
}

int main(){
    int dizi[5];
dizi_yaz(dizi);

return(0);
}
*/
#include <stdio.h>
void ters(int dizi[],int N){
    int *ptr;

    for(int i=N-1;i>=0;i--){
    *(ptr+i)=dizi[N-i-1];
    }

    for(int i=0;i<N;i++){
    printf("%d ",*(ptr+i));
}
}
int main(){
    int dizi[5];
    int N=5;

    for(int i=0;i<N;i++){
        printf("%d. eleman: ",i+1);
        scanf("%d",&dizi[i]);
    }

        printf("Orijinal dizi: ");
     for(int i=0;i<N;i++){
        printf("%d ",dizi[i]);
    }

      printf("\nTers dizi: ");
    ters(dizi,5);
}