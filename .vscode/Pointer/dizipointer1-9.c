/*10 kişilik bir sınıfta öğrencilerin bir dersten aldığı notlar klavyeden girilecektir. 
Notlar girildikten sonra, sınıfın ortalamasını, sınıftaki en yüksek ve en düşük notu bulan programı yazınız.*/
#include <stdio.h>

int main() {
    int dizi[10];
    int toplam = 0, *ptoplam = &toplam;
    int ortalama, *portalama = &ortalama;
    int enyuksek, *penyuksek = &enyuksek;
    int endusuk, *pendusuk = &endusuk;

    for (int i = 0; i < 10; i++) {
        printf("%d. öğrencinin notu: ", i + 1);
        scanf("%d", &dizi[i]);
        *ptoplam += dizi[i]; 
    }

    *portalama = *ptoplam / 10;

    *penyuksek = dizi[0];
    *pendusuk = dizi[0];
    for (int i = 1; i < 10; i++) {
        if (dizi[i] > *penyuksek) {
            *penyuksek = dizi[i];
        }
        if (dizi[i] < *pendusuk) {
            *pendusuk = dizi[i];
        }
    }

    printf("\nOrtalama: %d\n", *portalama);
    printf("En yüksek not: %d\n", *penyuksek);
    printf("En düşük not: %d\n", *pendusuk);

    return 0;
}

