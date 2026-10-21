/*int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 }; dizisi için kullanıcı tarafından girilen sayıya denk gelen dizi içerisindeki
 sayıların yerlerine -1 yerleştiren ve bu işlemi tüm dizideki elemanlar -1 olana kadar devam ettiren ve böylece dizide 
 kaç farklı sayı olduğunu bulan program kodunu yazınız. /*(Her yerleştirme sonrası dizinin güncel hali yazdırılacaktır.
 Dizi yazdırma işlemi için ayrı fonksiyon kullanılacaktır.) */
#include <stdio.h>
void diziYazdir(int dizi[], int boyut) {
    for (int i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

int main() {
    int sayilar[] = {1, 6, 5, 2, 1, 4, 2};
    int boyut = 7;
    int farkliSayilar = 0;

    printf("Baslangic dizisi: ");
    diziYazdir(sayilar, boyut);

    int tamamlandi=0;
    while (!tamamlandi) {
        int degisimYapildi = 0;
        int aranan;
        tamamlandi=1;
        printf("Bir sayi giriniz: ");
        scanf("%d", &aranan);

        for (int i = 0; i < boyut; i++) {
            if (sayilar[i] == aranan) {
                sayilar[i] = -1;
                degisimYapildi = 1;
            }
        }

        if (degisimYapildi) {
            farkliSayilar++;
            printf("Guncel dizi: ");
            diziYazdir(sayilar, boyut);
        } else {
            printf("Girdiginiz sayi dizide bulunmamaktadir.\n");
        }
        for (int i = 0; i < boyut; i++) {
            if (sayilar[i] != -1) {
                tamamlandi = 0;
                break;
            }
        }
    }

    printf("\nDizide toplam %d farkli sayi bulunmaktadir.\n", farkliSayilar);

    return 0;
}
