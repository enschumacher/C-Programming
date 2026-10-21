//Girilen N değerine göre NxN matris oluşturup 1’den NxN’e kadar sayıları aşağıdaki sırayla yerleştiriniz. N=3 girilirse:
#include <stdio.h>
int main(){
int N;
printf("Kaçlık matris istiyorsunuz giriniz: ");
scanf("%d",&N);

int matris[N][N];
int gecici=1;
for (int i = 0; i < N; i++) {
        if (i % 2 == 0) { 
            for (int j = 0; j < N; j++) {
                matris[j][i] = gecici++;
            }
        } else { 
            for (int j = N - 1; j >= 0; j--) {
                matris[j][i] = gecici++;
            }
        }
    }

    printf("Oluşturulan matris:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", matris[i][j]);
        }
        printf("\n");
    }
return (0);
}