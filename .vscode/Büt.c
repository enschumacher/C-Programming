
/* #include <stdio.h>

// Cümleden kelimeyi silen fonksiyon
void kelimeSil(char cumle[], char kelime[]) {
    char sonuc[1000]; // Yeni oluşturulan cümle için dizi
    int i = 0, j = 0, k, match;

    while (cumle[i] != '\0') {
        match = 1; // Kelimenin eşleştiğini varsay
        k = 0;

        // Kelimenin eşleşip eşleşmediğini kontrol et
        while (kelime[k] != '\0') {
            if (cumle[i + k] != kelime[k]) {
                match = 0;
                break;
            }
            k++;
        }

        // Eğer eşleşen kelimenin sonuna kadar gidildiyse
        if (match && (cumle[i + k] == ' ' || cumle[i + k] == '\0')) {
            i += k; // Kelimeyi atla
            if (cumle[i] == ' ') {
                i++; // Boşluğu da atla
            }
        } else {
            // Eşleşmiyorsa karakteri sonuca ekle
            sonuc[j] = cumle[i];
            i++;
            j++;
        }
    }

    sonuc[j] = '\0'; // Sonucu null karakter ile bitir

    // Yeni oluşturulan cümleyi orijinal cümleye aktar
    int index = 0;
    while (sonuc[index] != '\0') {
        cumle[index] = sonuc[index];
        index++;
    }
    cumle[index] = '\0';
}

int main() {
    char cumle[1000], kelime[100];

    // Kullanıcıdan cümle al
    printf("Bir cumle giriniz: ");
    fgets(cumle, sizeof(cumle), stdin);

    // Yeni satır karakterini kaldır
    int i = 0;
    while (cumle[i] != '\0') {
        if (cumle[i] == '\n') {
            cumle[i] = '\0';
            break;
        }
        i++;
    }

    // Kullanıcıdan silinmek istenen kelime al
    printf("Silmek istediginiz kelimeyi giriniz: ");
    fgets(kelime, sizeof(kelime), stdin);

    // Yeni satır karakterini kaldır
    i = 0;
    while (kelime[i] != '\0') {
        if (kelime[i] == '\n') {
            kelime[i] = '\0';
            break;
        }
        i++;
    }

    // Kelimeyi cümleden sil
    kelimeSil(cumle, kelime);

    // Yeni cümleyi yazdır
    printf("Olusan cumle: %s\n", cumle);

    return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void asalBul(int matris[][100], int N, int sayacSatir[], int *toplamsayac) {
    toplamsayac = 0;
    int sayac=0; 
    for (int i = 0; i < N; i++) {
        sayac= 0; 
        for (int j = 0; j < N; j++) {
            int asal = 1; // Sayının asal olduğu varsayılıyor
            for (int k =0;k<N;k++) {
                if (matris[i][j] % (k+2)== 0) {
                    asal = 0;
                    sayacSatir[i]=0; 
                }
                else{
                    asal=1;
                    sayac++;
                    sayacSatir[i]=sayac; 
                    toplamsayac++; 
                }
            }
        }
    }
}

int main() {
    int N, toplamsayac;

    printf("Matrisin boyutunu giriniz (N): ");
    scanf("%d", &N);

    int matris[100][100]; 
    int sayacSatir[100]; 

    srand(time(NULL));

    printf("Matris elemanlari:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matris[i][j] = rand() % 101; 
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    asalBul(matris, N, sayacSatir, toplamsayac);

    printf("\nHer satirdaki asal sayilarin sayisi:\n");
    for (int i = 0; i < N; i++) {
        printf("\n%d. satirda %d tane asal sayi var\n", i + 1, sayacSatir[i]);
        if (sayacSatir[i] == 0) {
            printf("\n%d. satirda asal sayi yoktur!", i + 1);
        }
    }
    
    printf("\nToplam %d tane asal sayi var.", toplamsayac);
    return 0;
}
