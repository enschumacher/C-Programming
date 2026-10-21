//Girilen N değerine göre NxN matris oluşturup 1’den NxN’e kadar sayıları sırayla yerleştiriniz.
#include <stdio.h>
int main(){
int N;
printf("Kaclık matris istediginizi giriniz: ");
scanf("%d",&N);

int matris[N][N];
int gecici=1;
for (int i=0;i < N;i++){
    for (int j=0;j < N;j++){
       matris[i][j]=gecici;
       gecici++;
    }
}
for (int i=0;i < N;i++){
    for (int j=0;j < N;j++){
       printf("%d\t",matris[i][j]);
    }
    printf("\n");
}




}
