//Bir karakter dizisinin uzunluğunu bulup döndüren fonksiyonu yazınız.
#include <stdio.h>
int diziUzunlugu(char dizi[]) { 
    int boyut = 0;
    while (dizi[boyut] != '\0') {
        boyut++;
    }
    return boyut;
}

int main() {
    char dizi[] = "Programlamaya giriş";
    int uzunluk = diziUzunlugu(dizi); 
    printf("Dizinin uzunluğu: %d\n", uzunluk);
    return 0;
}