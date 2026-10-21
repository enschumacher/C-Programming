#include <stdio.h>
int main() {
    int dizi[5];

    printf("Eleman giriniz:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &dizi[i]);
    }

    printf("Dizi: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dizi[i]);
    }

    printf("\nDizinin tersi:\n");
    for (int j = 4; j >= 0; j--) {
        printf("%d => ", dizi[j]); 
        for (int k = 0; k < dizi[j]; k++) { 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
