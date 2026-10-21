/*Bir 3x3 matrisin elemanlarını pointer kullanarak okuyup yazdıran bir program yazın.*/
#include <stdio.h>
#define SIZE 3
void readMatrix(int *matrix, int size) {
    printf("Matris elemanlarını girin (%dx%d):\n", size, size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Eleman [%d][%d]: ", i, j);
            scanf("%d", (matrix + i * size + j)); 
        }
    }
}

void printMatrix(int *matrix, int size) {
    printf("Matris:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", *(matrix + i * size + j)); 
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE]; /

    readMatrix((int *)matrix, SIZE);

    printMatrix((int *)matrix, SIZE);

    return 0;
}
