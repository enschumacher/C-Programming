/*Verilen 2 sayıdan büyük olan sayı küçük sayıya bölünerek bölüm ve kalanı bulan fonksiyonu yazınız. 
(Sayıları alma ve bölüm/kalan sonuçları yazdırma işlemleri “main” içinde yapılacaktır.)*/
#include <stdio.h>
void bolme_islem(int *kalan ,int *bolum,int sayi1, int sayi2){
  if(sayi1>sayi2){
    *bolum=sayi1 / sayi2;
    *kalan=sayi1 %  sayi2;
} else {
    *bolum = sayi2 / sayi1;
    *kalan = sayi2 % sayi1;
    }
}

int main(){
int sayi1,sayi2;
int bolum,kalan;

printf("Birinci sayiyi giriniz: ");
scanf("%d",&sayi1);

printf("İkinci sayiyi giriniz: ");
scanf("%d",&sayi2);

bolme_islem(&kalan,&bolum,sayi1,sayi2);

printf("Bolum: %d\n", bolum);
printf("Kalan: %d\n", kalan);

return(0);

}