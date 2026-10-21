//1-N arası sayıları özyinelemeli olarak yazdıran fonksiyonu yazınız.
#include <stdio.h>
void yazdir(int bas, int N) {
    if (bas > N) {
        return;
    }
    printf("%d ", bas);
    yazdir(bas + 1, N);
}

int main() {
    int N;
    printf("N degeri giriniz: ");
    scanf("%d", &N);

    if (N > 0) {
        yazdir(1, N);
    } else {
        printf("Pozitif bir sayi giriniz!\n");
    }

    return 0;
}
