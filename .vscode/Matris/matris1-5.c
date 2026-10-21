#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//0-10 arası rastgele sayılardan oluşan 4x4 bir matrisin köşegen toplamlarını bulunuz.
int main(){
    int matris[4][4];
    int kosegen1=0,kosegen2=0;
    
    srand(time(0));
    
    printf("4x4'lük matris:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            matris[i][j]= rand() % 11;
        }
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",matris[i][j]);
            if(i==j){
                kosegen1+=matris[i][j];
            }         
            if(i+j==3){
                kosegen2+=matris[i][j];
            }
        }
        printf("\n");
    }
  
    printf("Kosegen1 toplamı:%d\n",kosegen1);
    printf("Kosegen2 toplamı:%d\n",kosegen2);
    
    return(0);
}