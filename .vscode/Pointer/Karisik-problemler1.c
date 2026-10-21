/*int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 }; dizisi için kullanıcı tarafından girilen sayıya 
denk gelen dizi içerisindeki sayıların yerlerine 
-1 yerleştiren ve bu işlemi tüm dizideki elemanlar -1 olana kadar devam ettiren ve 
böylece dizide kaç farklı sayı olduğunu bulan program kodunu yazınız.
(Her yerleştirme sonrası dizinin güncel hali yazdırılacaktır. 
Dizi yazdırma işlemi için ayrı fonksiyon kullanılacaktır.)*/
#include <stdio.h>
int yerineyaz(int girilen, int sayilar[7]) {
    int sayac = 0;
    for (int i = 0; i < 7; i++) {
        if (sayilar[i] == girilen) {
            sayilar[i] = -1;
            sayac++;
        }
    }
    return sayac;
}

void diziyazdir(int sayilar[7]) {
    printf("Dizi: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");
}

int main() {
    int sayilar[7] = {1, 6, 5, 2, 1, 4, 2};
    int girilecek_sayi;
    int farkli_sayilar = 0;

    diziyazdir(sayilar);

    while (1) {
        int islem_yapildi = 0;
        
        printf("Diziden bir sayi seciniz: ");
        scanf("%d", &girilecek_sayi);

        int degisen_eleman_sayisi = yerineyaz(girilecek_sayi, sayilar);
        if (degisen_eleman_sayisi > 0) {
            farkli_sayilar++;
            islem_yapildi = 1;
        }

        diziyazdir(sayilar);

        if (!islem_yapildi) {
            printf("Bu sayi zaten -1. Farkli sayi seciniz.\n");
        }

        int tamamen_bitti = 1;
        for (int i = 0; i < 7; i++) {
            if (sayilar[i] != -1) {
                tamamen_bitti = 0;
                break;
            }
        }

        if (tamamen_bitti) {
            break;
        }
    }

    printf("\nDizide toplam %d farkli tam sayi vardir.\n", farkli_sayilar);

    return 0;
}
