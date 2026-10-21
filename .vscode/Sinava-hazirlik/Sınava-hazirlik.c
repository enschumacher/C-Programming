/*Bir tamsayı dizisinin elemanlarını sağa kaydıran (son elemanı başa alan) bir fonksiyon yazın.
 İşlemi pointer kullanarak gerçekleştirin.*/
 #include <stdio.h>

void basamak_kaydir(int dizi[], int N, int uzunluk) {
    int gecici;
    int *son = dizi + uzunluk - 1;

    for (int i = 0; i < N; i++) {
        gecici = *son; 
        for (int *ptr = son - 1; ptr >= dizi; ptr--) {
            *(ptr + 1) = *ptr;
        }
        *dizi = gecici; 
    }
}

int main() {
    int N, uzunluk = 5, dizi[5] = {1, 2, 3, 4, 5};
    printf("Kac basamak saga kaydirilacak: ");
    scanf("%d", &N);

    printf("Dizi: ");
    for (int i = 0; i < uzunluk; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    basamak_kaydir(dizi, N, uzunluk);

    printf("Kaydirilmis dizi: ");
    for (int i = 0; i < uzunluk; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}