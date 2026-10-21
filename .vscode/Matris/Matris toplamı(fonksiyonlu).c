//İki boyutlu bir matrisin tüm elemanlarının toplamını bulan bir fonksiyon yazın.
#include <stdio.h>

int toplam(int matris[2][2]){
    int topla=0;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            topla+= matris[i][j];
        }
    }
    return topla;
}

int main(){
    int matris[2][2];
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("Matris[%d][%d] sayisini giriniz: ",i,j);
            scanf ("%d",&matris[i][j]);
        }
    }
    printf("Matris: \n");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
int sonuc=toplam(matris);
printf("Matrisin elemanlarinin toplami: %d",sonuc);
return(0);
}
