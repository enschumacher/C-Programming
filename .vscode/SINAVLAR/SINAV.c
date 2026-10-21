#include <stdio.h>
void diziYazdir(int dizi[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

void sagaKaydir(int dizi[], int boyut, int kaydirmaMiktari) {
    for (int i = 0; i < kaydirmaMiktari; i++) {
        int gecici = dizi[boyut - 1]; 
        for (int j = boyut - 1; j > 0; j--) {
            dizi[j] = dizi[j - 1]; 
        }
        dizi[0] = gecici; 
    }
}

int main() {
    int dizi[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int boyut=10;
    int kaydirmaMiktari;

    printf("Kac eleman saga kaydiracaksiniz? ");
    scanf("%d", &kaydirmaMiktari);

    printf("Dizinin ilk hali: ");
    diziYazdir(dizi, boyut);

    sagaKaydir(dizi, boyut, kaydirmaMiktari);

    printf("Kaydirilmis hali: ");
    diziYazdir(dizi, boyut);

    return (0);
}