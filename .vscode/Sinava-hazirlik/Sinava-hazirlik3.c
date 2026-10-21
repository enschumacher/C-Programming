#include <stdio.h>
void matrisOlustur(int dizi[], int N) { 
    int matris[5][4]; 
    int i, j;     
    for (i = 0; i < N; i++) { 
        int sayi = dizi[i];         
        for (j = 3; j >= 0; j--) { //matris sütunlarına sondan başlayarak basamakları yerleştir 
            matris[i][j] = sayi % 10; 
            sayi =sayi/10; 
        } 
    }    
} 
int main() { 
    int dizi[5];       
    int i; 
    printf("5 adet 4 basamakli sayi giriniz:\n"); 
    for (i = 0; i < 5; i++) { 
        scanf("%d", &dizi[i]); 
    }         
    matrisOlustur(dizi, 5); 
}