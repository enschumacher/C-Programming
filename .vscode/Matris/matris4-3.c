/*5x5 boyutunda bir karakter matrisi tanımlayıp başlangıç değerlerini kod kısmında oluşturunuz.
Matrisi ekrana yazdırdıktan sonra kullanıcıdan en fazla 5 karakterlik bir kelime alıp
bu kelimenin matris içinde soldan sağa veya yukarıdan aşağıya bulunup bulunmadığını kontrol ediniz. */
#include <stdio.h>
#include <string.h>

int main() {
    char matris[5][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'},
        {'P', 'Q', 'R', 'S', 'T'},
        {'U', 'V', 'W', 'X', 'Y'}
    };
    char kelime[6];
    int i, j, k, kelimeUzunlugu = 0;

    printf("Matris:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%c ", matris[i][j]);
        }
        printf("\n");
    }

    printf("Bir kelime giriniz (en fazla 5 karakter): ");
    scanf("%5s",&kelime);

    while (kelime[kelimeUzunlugu] != '\0') {
        kelimeUzunlugu++;
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j <= 5 - kelimeUzunlugu; j++) {
            for (k = 0; k < kelimeUzunlugu; k++) {
                if (matris[i][j+k] != kelime[k]) {
                    break;
                }
            }
            if (k == kelimeUzunlugu) {
                printf("Kelime soldan sağa bulundu.\n");
                return 0;
            }
        }
    }

    printf("Kelime matriste bulunamadı.\n");
    return 0;
}