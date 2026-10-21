//Fiyat ve kdv oranını parametre olarak alıp toplam fiyatı ekrana yazdıran fonksiyonu yazınız.

#include <stdio.h>

float Kdv(float fiyat, float kdvOrani) {
    return fiyat * (kdvOrani / 100);
}

float toplamFiyat(float fiyat, float kdvOrani) {
    float kdvTutari = Kdv(fiyat, kdvOrani);
    return fiyat + kdvTutari;
}

int main() {
    float fiyat, kdvOrani;

    printf("Fiyatı giriniz: ");
    scanf("%f", &fiyat);
    printf("KDV oranını giriniz (%% olarak): ");
    scanf("%f", &kdvOrani);

    float sonuc = toplamFiyat(fiyat, kdvOrani);

    printf("Toplam fiyat (KDV dahil): %.2f\n", sonuc);

    return 0;
}