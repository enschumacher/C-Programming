//Bir tamsayı dizisindeki çift ve tek sayıları iki ayrı diziye pointer kullanarak ayıran bir program yazın.
#include <stdio.h>

#include <stdio.h>

void ayir(int *input, int size, int *ciftler, int *tekler, int *cift_sayisi, int *tek_sayisi) {
    *cift_sayisi = 0; 
    *tek_sayisi = 0;  

    for (int i = 0; i < size; i++) {
        if (*(input + i) % 2 == 0) {
            *(ciftler + (*cift_sayisi)) = *(input + i); 
            (*cift_sayisi)++;
        } else {
            *(tekler + (*tek_sayisi)) = *(input + i); 
            (*tek_sayisi)++;
        }
    }
}

int main() {
    int input[10]={1,2,3,4,5,6,7,8,9,10}, ciftler[10], tekler[10];
    int n=10,cift_sayisi, tek_sayisi;

    printf("\nDizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", input[i]);
    }

    ayir(input,n, ciftler, tekler, &cift_sayisi, &tek_sayisi);

    printf("\nÇift sayılar: ");
    for (int i = 0; i < cift_sayisi; i++) {
        printf("%d ", ciftler[i]);
    }
    printf("\n");

    printf("Tek sayılar: ");
    for (int i = 0; i < tek_sayisi; i++) {
        printf("%d ", tekler[i]);
    }
    printf("\n");

    return 0;
}
