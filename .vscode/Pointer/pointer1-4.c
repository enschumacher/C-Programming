/*Girilen sayının faktöriyelini bulan fonksiyon yazınız. 
Fonksiyonda return kullanılmayacak ve faktöriyel sonucu main de yazdırılacaktır.*/
#include <stdio.h>
void faktoriyel(int *sonuc, int sayi){
for(int i=sayi;i>1;i--){
    *sonuc *= i;
    }
}

int main(){
int sayi;
int sonuc=1;

printf("Faktoriyeli alınacak sayiyi giriniz: ");
scanf("%d",&sayi);

faktoriyel(&sonuc,sayi);
printf("%d! = %d",sayi,sonuc);

return(0);
}