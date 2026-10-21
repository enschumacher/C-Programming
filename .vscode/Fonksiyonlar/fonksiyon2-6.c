//Verilen bir metinde istenen harften kaç adet olduğunu döndüren fonksiyon.

#include <stdio.h>

int harfSayisi(char metin[], char harf) {
    int sayac = 0;
    for (int i = 0; metin[i] != '\0'; i++) {
        if (metin[i] == harf || metin[i] == harf + 32 || metin[i] == harf - 32) {
            sayac++; 
        }
    }
    return sayac;
}

int main() {
    char metin[] = "Merhaba Dünya";
    char aranacakHarf = 'a';

    int sonuc = harfSayisi(metin, aranacakHarf);
    printf("%c harfi metinde %d defa geçiyor.\n", aranacakHarf, sonuc);

    return 0;
}