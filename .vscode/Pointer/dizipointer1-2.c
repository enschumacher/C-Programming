/*1-100 arası çift sayıları bir diziye aktarıp dizi elemanlarını yazdırınız.*/
#include <stdio.h>

void cift_sayi(int *dizi) {
    int *ptr = dizi; 

    for (int i = 0; i < 100; i++) {
        if (*(ptr + i) % 2 == 0) { 
            printf("%d ", *(ptr + i));
        }
    }
}

int main() {
    int dizi[100];

    for (int i = 0; i < 100; i++) {
        dizi[i] = i;
    }

    cift_sayi(dizi);

    return 0;
}