//0-100 arası rastgele sayılardan oluşturulan 4x4 bir matristeki en büyük, en küçük ve ortalama sayıyı bulunuz.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int matris[4][4];
    srand(time(0));
    
    int buyuk=0, kucuk=0;
    float toplam=0;
    
     buyuk= 0;
     kucuk= 100;
    
    printf("4x4'lük matris:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
       matris[i][j]= rand() % 101;
       printf("%d\t", matris[i][j]);  
        }
        printf("\n");
    }   
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
             if(matris[i][j]>buyuk){
              buyuk= matris[i][j];    
            }if(matris[i][j]<kucuk){
                kucuk= matris[i][j];
            }
             toplam+=matris[i][j];
        }
    }
    float ortalama=toplam/16;
    printf("en kucuk sayi:%d\n",kucuk);
    printf("en buyuk sayi:%d\n",buyuk);
    printf("Ortalama:%.2f\n",ortalama);

    return(0);
  }
        