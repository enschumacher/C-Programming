//1-N arası sayıların toplamını özyinelemeli olarak bulunuz.
#include <stdio.h>

int toplam(int N){
    if(N==1){
        return 1;
    }else{
        return N + toplam(N-1);
    }
    
}

int main(){
    int N;
    printf("Bir sayi giriniz: ");
    scanf("%d",&N);

printf("1'den %d sayisina kadar olan sayilarin toplami: %d ",N,toplam(N));
return(0);
}