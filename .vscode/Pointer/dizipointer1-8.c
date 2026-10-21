/*Fibonacci serisini dizi kullanarak oluşturunuz.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    printf("Kaç terim gireceksiniz: ");
    scanf("%d", &N); 

    if (N < 2) {
        printf("Fibonacci serisi için en az 2 terim girmelisiniz!\n");
        return 1; 
    }

    int *fibonacci = (int *)malloc(N * sizeof(int));
    if (fibonacci == NULL) {
        printf("Bellek tahsisi başarısız.\n");
        return 1; 
    }

    *(fibonacci + 0) = 0; 
    *(fibonacci + 1) = 1; 

    printf("fibonacci[%d]= %d\n",0, *(fibonacci + 0)); 
    printf("fibonacci[%d]= %d\n",1, *(fibonacci + 1)); 

    for (int i = 2; i < N; i++) {
        *(fibonacci + i) = *(fibonacci + i - 1) + *(fibonacci + i - 2);
        printf("fibonacci[%d]= %d\n",i, *(fibonacci + i)); 
    }

    free(fibonacci); 
    return 0;
}
