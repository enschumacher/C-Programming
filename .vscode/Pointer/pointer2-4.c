/*Girilen bir kelimedeki sesli ve sessiz harf sayılarını pointer kullanarak bulunuz.(türkçe karakter kullanılmayacaktır)*/
/* #include <stdio.h>

void harf_bul(char *kelime, char *sesli, char *sessiz) {
    while (*kelime != '\0') {
        if (*kelime == 'a' || *kelime == 'e' || *kelime == 'i' || *kelime == 'o' || *kelime == 'u') {
            (*sesli)++;
        } else if (*kelime == 'b' || *kelime == 'c' || *kelime == 'd' || *kelime == 'f' || 
                   *kelime == 'g' || *kelime == 'h' || *kelime == 'j' || *kelime == 'k' || 
                   *kelime == 'l' || *kelime == 'm' || *kelime == 'n' || *kelime == 'p' || 
                   *kelime == 'r' || *kelime == 's' || *kelime == 't' || *kelime == 'v' || 
                   *kelime == 'y' || *kelime == 'z') {
            (*sessiz)++;
        }
        kelime++;
    }
}

int main() {
    char kelime[] = "merhaba";
    char sesli = 0, sessiz = 0;

    harf_bul(kelime, &sesli, &sessiz);
    printf("Kelimedeki sesli harf sayisi: %d\n", sesli);
    printf("Kelimedeki sessiz harf sayisi: %d\n", sessiz);

    return (0);
} */

#include <stdio.h>

void harf_bul(char *kelime, char *sesli, char *sessiz, int *uzunluk) {
    while (*kelime != '\0') {
        if (*kelime == 'a' || *kelime == 'e' || *kelime == 'i' || *kelime == 'o' || *kelime == 'u') {
            (*sesli)++;
        } else {
            (*sessiz)++;
        }
        kelime++;
        (*uzunluk)++;
    }
}

int main() {
    char kelime[] = "merhaba";
    char sesli = 0, sessiz = 0;
    int uzunluk=0;

    harf_bul(kelime, &sesli, &sessiz,&uzunluk);
    printf("Kelimedeki sesli harf sayisi: %d\n", sesli);
    printf("Kelimedeki sessiz harf sayisi: %d\n", sessiz);
    printf("Kelimenin uzunluğu: %d",uzunluk);
    return (0);
}

