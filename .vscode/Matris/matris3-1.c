#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matris[3][2], matris2[3][2], toplam[3][2];

    srand(time(0));

    printf("Birinci matris:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            matris[i][j] = rand() % 31; 
        }
    }
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
      printf("%d\t", matris[i][j]);
        }
         printf("\n");

     }

    printf("\nIkinci matris:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            matris2[i][j] = rand() % 31 ; 
        }
    }

for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", matris2[i][j]);
        }
        printf("\n");
    }
    printf("\nToplam matrisi:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            toplam[i][j] = matris[i][j] + matris2[i][j];
            printf("%d\t", toplam[i][j]);
        }
        printf("\n");
    }

    return 0;
}
