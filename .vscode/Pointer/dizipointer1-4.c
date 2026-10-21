/*Kullanıcıdan alınan N adet sayıyı diziye aktardıktan sonra dizideki en büyük ve en küçük elemanı bulunuz.*/
#include <stdio.h>



void karsilastirma(int N, int dizi[], int *buyuk, int *kucuk) {

    for (int i = 0; i < N; i++) {

        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", &dizi[i]);

        if(i==0) *buyuk=dizi[i], *kucuk=dizi[i]; // Artık Dizi[0] değerimiz belli

        if (dizi[i] > *buyuk) {

            *buyuk = dizi[i];

        } else if (dizi[i] < *kucuk) {

            *kucuk = dizi[i];

        }

    }

}

int main() {

    int N;
    int buyuk,kucuk;

    printf("Kaç sayi girilecek: ");
    scanf("%d",&N);

    int dizi[N];

    karsilastirma(N, dizi, &buyuk, &kucuk);

    printf("En büyük sayi: %d\n", buyuk);
    printf("En küçük sayi: %d\n",kucuk);

}
