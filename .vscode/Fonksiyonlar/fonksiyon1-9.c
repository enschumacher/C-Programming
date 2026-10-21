//Verilen sayının faktöriyelini döndüren fonksiyonu yazınız.
#include <stdio.h>
int faktoriyel(int x){

    if(x<0){
        printf("Faktöriyel negatif sayilarda tanimli degildir!");
        return -1;
    }
    if(x==0){
        return 1;
    }

        int faktoriyel = 1;
    for(int i = x; i > 1; i--){
     faktoriyel*=i;
    }
    return faktoriyel;
    
}

int main(){
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    int sonuc = faktoriyel(sayi);
    if(sonuc != -1){
    printf("%d sayisinin faktoriyeli: %d\n", sayi, sonuc);
    }

    return(0);
}