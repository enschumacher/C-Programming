#include <stdio.h>
//Girilen sayının Güçlü Sayı olup olmadığını tanımladığınız faktöriyel fonksiyonunu kullanarak bulunuz.
//(Güçlü Sayı: basamak değerlerinin faktöriyellerinin toplamına eşit olan sayı. 145=1!+4!+5!)

/*
int faktoriyel(int sayi) {
    if (sayi == 0 || sayi == 1) {
        return 1;
    } else {
        return sayi * faktoriyel(sayi - 1);
    }
}

int basamakFaktoriyelToplami(int sayi) {
    int toplam = 0, basamak;
    while (sayi > 0) {
        basamak = sayi % 10;
        toplam += faktoriyel(basamak);
        sayi /= 10;
    }
    return toplam;
}

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi == basamakFaktoriyelToplami(sayi)) {
        printf("%d bir güçlü sayidir.\n", sayi);
    } else {
        printf("%d bir güçlü sayi degildir.\n", sayi);
    }

    return 0;
}
*/
#include <stdio.h>
int basamak(int sayi){
    int bas_sayisi=0,gecici=0,faktoriyel=1,basamak[10];
    int toplam=0;
    while(sayi>0){
        basamak[bas_sayisi]=sayi % 10;   
        sayi/=10;
        bas_sayisi++;
    }
    for(int j=bas_sayisi-1;j>=0;j--){
     faktoriyel=1;
     gecici=basamak[j];
     for(int k=gecici;k>0;k--){
        faktoriyel*=k;
     }
     toplam+=faktoriyel;
    }return toplam;
    }

int main(){
int sayi;
printf("Sayi giriniz: ");
scanf("%d",&sayi);

int sonuc=basamak(sayi);
if(sayi==sonuc){
    printf("Guclu sayi!");
}else{
    printf("Guclu sayi degil!");
}
}