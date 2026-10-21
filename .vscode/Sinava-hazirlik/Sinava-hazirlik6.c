/*Kullanıcıdan bir cümle alarak bu cümledeki en uzun kelimeyi bulan bir fonksiyon yazın.*/
#include <stdio.h>

void enUzunKelimeBul(char *cumle, char *enUzunKelime) {
    int maxUzunluk = 0, kelimeUzunluk = 0;
    char *kelimeBaslangici = cumle;

    while (1) {
        if (*cumle == ' ' || *cumle == '\n' || *cumle == '\0') {
            if (kelimeUzunluk > maxUzunluk) {
                maxUzunluk = kelimeUzunluk;
                for (int i = 0; i < kelimeUzunluk; i++) {
                    enUzunKelime[i] = kelimeBaslangici[i];
                }
                enUzunKelime[kelimeUzunluk] = '\0';
            }
            kelimeUzunluk = 0;
            kelimeBaslangici = cumle + 1;
        } else {
            kelimeUzunluk++;
        }

        if (*cumle == '\0')
         break;
        cumle++;
    }
}

int main() {
    char cumle[1000];
    char enUzunKelime[1000] = {0};

    printf("Bir cümle girin: ");
    gets(cumle);

    enUzunKelimeBul(cumle, enUzunKelime);

    printf("Cümledeki en uzun kelime: %s\n", enUzunKelime);

    return 0;
}
