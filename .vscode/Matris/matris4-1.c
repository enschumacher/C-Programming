//3x3 boyutunda bir matris elemanları kullanıcıdan alındıktan sonra matrisin köşegene göre simetrik olup olmadığını bulunuz.
#include <stdio.h>
int main(){
    int matris[3][3];
    int simetrik=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Matrisin [%d][%d] elamanını giriniz: ",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }

    printf("\n Girilen matris:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
   printf("%d\t",matris[i][j]);
    }
    printf("\n");
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
if(matris[i][j]!=matris[j][i]){
    simetrik=1;
    break;
}
 }
 printf("\n");
    printf("\n");
}
if(simetrik=1){
    printf("Simetriktir\n");
}else{
    printf("Simetrik değildir!\n");
}
    return(0);
}