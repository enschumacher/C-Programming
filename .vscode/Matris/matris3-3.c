//0-10 arası rastgele sayılardan oluşan 4x4 bir matrisin köşegenlerini yer değiştiren kodu yazınız(başka matris kullanmadan)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int matris[4][4];
    int kosegen;

    srand(time(0));

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            matris[i][j]=rand() % 11;
        }
    }
    printf("\nGirilen matris: \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<4;i++){
        kosegen=matris[i][i];
        matris[i][i]=matris[i][3-i];
        matris[i][3-i]=kosegen;
     }
     printf("\nKosegenleri degistirilmis matris: \n");
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
          printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
    return 0;
    }