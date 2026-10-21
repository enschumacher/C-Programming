/*Parametre olarak verilen 3 sayıdan en büyük ve en küçüğünü bulan fonksiyonu yazınız. 
En büyük ve en küçük sayıları main içinde yazdırınız.

#include <stdio.h>
int sayibulma(int *buyuk,int x, int y, int z){

if(x>y>z || x>z>y){
    *buyuk=x;
}else if(y>x>z || y>z>x){
    *buyuk=y;
}else{
    *buyuk=z;
}

}

int main(){
int sayi1,sayi2,sayi3,buyuk=0;

printf("Birinci sayiyi giriniz:");
scanf("%d",&sayi1);

printf("İkinci sayiyi giriniz:");
scanf("%d",&sayi2);

printf("Ucuncu sayiyi giriniz:");
scanf("%d",&sayi3);

sayibulma(&buyuk,sayi1,sayi2,sayi3);
printf("En buyuk sayi: %d",buyuk);
return(0);
} */

#include <stdio.h>

void sayibulma(int *buyuk, int *kucuk, int x, int y, int z) {
    if (x >= y && x >= z) {
        *buyuk = x;
    } else if (y >= x && y >= z) {
        *buyuk = y;
    } else {
        *buyuk = z;
    }

    if (x <= y && x <= z) {
        *kucuk = x;
    } else if (y <= x && y <= z) {
        *kucuk = y;
    } else {
        *kucuk = z;
    }
}

int main() {
    int sayi1, sayi2, sayi3, buyuk = 0, kucuk = 0;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("İkinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);

    sayibulma(&buyuk, &kucuk, sayi1, sayi2, sayi3);

    printf("En buyuk sayi: %d\n", buyuk);
    printf("En kucuk sayi: %d\n", kucuk);

    return 0;
}
