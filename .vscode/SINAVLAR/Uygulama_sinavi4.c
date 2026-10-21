#include <stdio.h>
#include <stdlib.h>

char* kelimebirleştir(char* kelime1, char* kelime2) {
    int uzunluk1 = 0;
    while (*(kelime1 + uzunluk1) != '\0') {
        uzunluk1++;
    }

    int uzunluk2 = 0;
    while (*(kelime2 + uzunluk2) != '\0') {
        uzunluk2++;
    }

    char* yeni_kelime = (char*)malloc(uzunluk1 + uzunluk2 + 2); // 1'i '_' ve diğer 1 ise '\0' için
    
    if (yeni_kelime == NULL) {
        printf("Hafıza ayırma başarısız oldu.\n");
        exit(1);
    }

    char* ptr = yeni_kelime;

    while (*kelime1 != '\0') {
        *ptr = *kelime1;
        ptr++;
        kelime1++;
    }

    *ptr = '_';
    ptr++;

    while (*kelime2 != '\0') {
        *ptr = *kelime2;
        ptr++;
        kelime2++;
    }

    *ptr = '\0';

    return yeni_kelime;
}

int main() {
    char* kelime1 = (char*)malloc(100); 
    char* kelime2 = (char*)malloc(100);

    if (kelime1 == NULL || kelime2 == NULL) {
        printf("Hafıza ayırma başarısız oldu.\n");
        exit(1);
    }

    printf("Birinci kelimeyi girin: ");
    gets(kelime1);
    printf("İkinci kelimeyi girin: ");
    gets(kelime2);

    char* yeni_kelime = kelimebirleştir(kelime1, kelime2);

    printf("Yeni kelime: %s\n", yeni_kelime);

    free(kelime1);
    free(kelime2);
    free(yeni_kelime);

    return 0;
}
