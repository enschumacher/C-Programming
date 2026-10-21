/*
#include <stdio.h>

// Rakamların toplamını hesaplayan fonksiyon
int rakamToplami(int sayi) {
    int toplam = 0;
    while (sayi != 0) {
        toplam += sayi % 10; // Son rakamı al ve toplama ekle
        sayi /= 10;          // Sayıyı bir basamak küçült
    }
    return toplam;
}

// Sütun toplamlarını hesaplayıp yazdıran fonksiyon
void sutunToplamlariniYazdir(int matris[][2], int n) {
    int sutun1Toplam = 0, sutun2Toplam = 0;

    for (int i = 0; i < n; i++) {
        sutun1Toplam += matris[i][0];
        sutun2Toplam += matris[i][1];
    }

    printf("1. Sutunun Toplami: %d\n", sutun1Toplam);
    printf("2. Sutunun Toplami: %d\n", sutun2Toplam);
}

int main() {
    int N;

    // Kullanıcıdan matrisin satır sayısını alma
    printf("Matrisin satir sayisini (N) giriniz: ");
    scanf("%d", &N);

    // Matris tanımlama
    int matris[N][2];

    // Kullanıcıdan 1. sütun için sayılar alma ve 2. sütunu hesaplama
    printf("1. Sutun icin %d sayi giriniz:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Sayi %d: ", i + 1);
        scanf("%d", &matris[i][0]);
        matris[i][1] = rakamToplami(matris[i][0]); // Rakam toplamını 2. sütuna yaz
    }

    // Matrisi ekrana yazdırma
    printf("\nGirilen Matris:\n");
    for (int i = 0; i < N; i++) {
        printf("%d\t%d\n", matris[i][0], matris[i][1]);
    }

    // Sütun toplamlarını hesaplayıp yazdırma
    sutunToplamlariniYazdir(matris, N);

    return 0;
}
*/
#include <stdio.h>

void diziOku(int *dizi, int n) {
    printf("Dizinin elemanlarini giriniz:\n");
    for (int i = 0; i < n; i++) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }
}

void diziGuncelle(int *dizi, int n) {
    int toplam = 0;
    for (int i = 0; i < n; i++) {
        int gecici = dizi[i]; // Mevcut elemanı geçici bir değişkene al
        dizi[i] = toplam;    // Dizinin elemanını toplam ile güncelle
        toplam += gecici;    // Toplamı güncelle
    }
}

void diziYazdir(int *dizi, int n) {
    printf("Guncellenmis dizi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

int main() {
    int N;

    printf("Dizinin eleman sayisini (N) giriniz: ");
    scanf("%d", &N);

    int dizi[N];

    diziOku(dizi, N);

    diziGuncelle(dizi, N);

    diziYazdir(dizi, N);

    return 0;
}
