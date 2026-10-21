//Bir tam sayı dizisinde istenen sayıyı arayıp bulunduğu konumu döndüren fonksiyonu yazınız. 
#include <stdio.h>

int diziKonumu(int dizi[], int boyut, int aranacakSayi) {
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] == aranacakSayi) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int diziBoyutu;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &diziBoyutu);

    int dizi[diziBoyutu];
    for (int i = 0; i < diziBoyutu; i++) {
        printf("Sayi giriniz: ");
        scanf("%d", &dizi[i]);
    }

    int aranacakSayi;
    printf("Aranacak sayiyi giriniz: ");
    scanf("%d", &aranacakSayi);

    int konum = diziKonumu(dizi, diziBoyutu, aranacakSayi);

    if (konum != -1) {
        printf("İstenen sayi %d. konumda bulundu.\n", konum + 1); 
    }
    else{
        printf("İstenen sayi dizide bulunamadı.\n");
    }

    return 0;
}