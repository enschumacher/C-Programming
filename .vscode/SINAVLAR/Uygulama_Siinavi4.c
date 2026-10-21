#include <stdio.h>
#include <stdlib.h>

char* birlestir(char *kelime1, char *kelime2) {
    int uzunluk1=0, uzunluk2=0 ;
    
    char *ptr1 = kelime1;
    while (*ptr1 != '\0') {
        uzunluk1++;
        ptr1++;
    }

    char *ptr2 = kelime2;
    while (*ptr2 != '\0') {
        uzunluk2++;
        ptr2++;
    }

    char *yeniKelime = (char*)malloc((uzunluk1 + uzunluk2 + 2) * sizeof(char)); 

    char *ptr = yeniKelime;
    while (*kelime1 != '\0') {
        *ptr++ = *kelime1++;
    }

    *ptr++ = '_';

    while (*kelime2 != '\0') {
        *ptr++ = *kelime2++;
    }
    *ptr='\0';
    return yeniKelime;
}

int main() {
    int N = 100; 

    char *kelime1 = (char*)malloc(N * sizeof(char));
    char *kelime2 = (char*)malloc(N * sizeof(char));

    printf("Birinci kelime: ");
    gets(kelime1);
    
    for (char *p = kelime1; *p != '\0'; p++) {
        if (*p == '\0') {
            break;
        }
    }

    printf("İkinci kelime: ");
    gets(kelime2);

    for (char *p = kelime2; *p != '\0'; p++) {
        if (*p == '\0') {
            break;
        }
    }

    char *birlesikKelime = birlestir(kelime1, kelime2);

    printf("Birleşik kelime: %s\n", birlesikKelime);

    free(kelime1);
    free(kelime2);
    free(birlesikKelime);

    return 0;
}
