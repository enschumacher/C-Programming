//Girilen sayının tam bölenlerini ekrana yazdıran özyinelemeli fonksiyonu yazınız.
#include <stdio.h>

void tamBolenler(int sayi, int bolen) {
    if (bolen <= sayi) {
        if (sayi % bolen == 0) {
            printf("%d ", bolen);
        }
        tamBolenler(sayi, bolen + 1);
    }
}

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    printf("%d sayisinin tam bolenleri: ", sayi);
    tamBolenler(sayi, 2); 

    return 0;
}