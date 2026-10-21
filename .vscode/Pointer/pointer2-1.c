/*Kullanıcıdan N adet sayı aldıktan sonra bu sayıları toplam fonksiyonuna göndererek toplamlarını bulunuz ve 
sonucu main’de yazdırınız.(Dizi kullanılmayacaktır)*/
#include <stdio.h>
void toplam( int *toplama,int sayi){
    *toplama +=sayi; 
}

int main(){
    int N,toplama=0,sayi;

    printf("Kac tane sayi gireceksiniz: ");
    scanf("%d",&N);

      for(int i=0;i<N;i++){
    printf("%d. sayiyi giriniz: ",i+1);
    scanf("%d",&sayi);
    toplam(&toplama,sayi);
          }

    printf("Toplam: %d",toplama);

    return(0);
}