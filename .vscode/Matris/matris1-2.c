#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matris[3][3];
    int sayac=0;
    
    srand(time(0));

    printf("3x3 Matris:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matris[i][j] = rand() % 101;  
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", matris[i][j]);  
                    
        if(matris[i][j]>50){
            sayac++;
        }
       }
                    printf("\n");
    }
    printf("Matriste %d tane sayi 50'den buyuktur",sayac);

    return 0;
}
