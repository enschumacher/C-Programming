//Bir diziyi başka bir diziye tersten kopyaladıktan sonra dizileri sırayla diziYazdir fonksiyonu ile yazdırınız.
/*
#include <stdio.h>

void diziyazdir(int dizi[], int elemansayisi) {
    for (int i = 0; i < elemansayisi; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

int main() {
    int my_dizi[5] = {10, 20, 30, 40, 50};
    int ters_dizi[5];
    int dizi_boyutu = 5;

    printf("Orijinal dizi:\n");
    diziyazdir(my_dizi, dizi_boyutu);

int j=dizi_boyutu-1;
    for (int i = 0; i < dizi_boyutu; i++) {
        ters_dizi[i] = my_dizi[j-i];
    }

    printf("Dizinin tersten yazılmış hali:\n");
    diziyazdir(ters_dizi, dizi_boyutu);

    return 0;
}
*/
#include <stdio.h>

void diziyazdir(int dizi[], int elemansayisi) {
    for (int i = 0; i < elemansayisi; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

int main() {
    int my_dizi[5] = {10, 20, 30, 40, 50};
    int ters_dizi[5];
    int dizi_boyutu = 5;

    printf("Orijinal dizi:\n");
    diziyazdir(my_dizi, dizi_boyutu);

    for (int i =dizi_boyutu-1;i>=0; i--) {
        ters_dizi[i] = my_dizi[dizi_boyutu-i-1];
    }

    printf("Dizinin tersten yazılmış hali:\n");
    diziyazdir(ters_dizi, dizi_boyutu);

    return 0;
}