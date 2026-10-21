#include <stdio.h>
int main(){
    int matris[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("matris[%d][%d]:",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    return(0);
}