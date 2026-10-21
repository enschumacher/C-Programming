#include <stdio.h>

int main() {
    int matris[10][2]; //ilki satır ikinci sütun oluyor.

    for (int i = 0; i < 10; i++) {
        matris[i][0] = i + 1;            
        matris[i][1] = (i + 1) * (i + 1); 
    }

    printf("Sayı\tKare\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\n", matris[i][0], matris[i][1]);
    }

    return 0;
}

