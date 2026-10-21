//Kendisine parametre olarak verilen bir tam sayının Asal olup olmadığını kontrol edip Asal ise 1, değilse 0 değerini döndüren fonksiyon
#include <stdio.h>
int Asal(int x){
if(x<=1) return 0;
if(x<=3) return 1;
if(x%2==0 || x%3==0) return 0;

 for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main(){
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);
        int sonuc=Asal(a);
    if(Asal(a)){
        printf("%d asal sayidir",a);
    }else{
        printf("%d asal sayi degildir!",a);
    }
    return (0);
}