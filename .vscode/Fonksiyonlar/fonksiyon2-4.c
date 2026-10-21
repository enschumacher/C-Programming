//Girilen 2 kelimenin uzunluklarının eşit olup olmadığını bir önceki sorudaki uzunluk bulma fonksiyonunu kullanarak yazdırınız.
#include <stdio.h>

int kelimeUzunlugu(char kelime[]) { 
    int boyut = 0;
    while (kelime[boyut] != '\0') {
        boyut++;
    }
    return boyut;
}

int main() {
    char kelime1[] = "Programlama";
    char kelime2[] = "Python";
    int uzunluk1 = kelimeUzunlugu(kelime1);
    int uzunluk2 = kelimeUzunlugu(kelime2);

    printf("İlk kelimenin uzunluğu: %d\n", uzunluk1);
    printf("İkinci kelimenin uzunluğu: %d\n", uzunluk2);

    if (uzunluk1 == uzunluk2) {
        printf("İki kelimenin uzunluğu eşittir.\n");
    } else {
        printf("İki kelimenin uzunluğu eşit değildir.\n");
    }

    return 0;
}