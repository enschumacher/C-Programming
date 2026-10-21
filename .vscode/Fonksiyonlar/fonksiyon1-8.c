//Bir tam sayının kaç basamaklı olduğunu döndüren fonksiyonu yazınız.
#include <stdio.h>
int basamak_bul(int x) {
    int basamak=0;

    while(x!=0){
    x/=10;
    basamak++;
    }
 return basamak;
}

int main(){
    int sayi;
    int basamak=0;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    int basamak_Sayisi=basamak_bul(sayi);
    printf("%d sayisinin %d basamagı var.",sayi,basamak_Sayisi);
   return(0);
   }