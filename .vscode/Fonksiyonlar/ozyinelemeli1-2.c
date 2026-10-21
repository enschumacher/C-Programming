//N-1 arası sayıları tersten özyinelemeli olarak yazdıran fonksiyonu yazınız.
#include <stdio.h>
void sayilar(int N){
if(N>0){
    printf("%d ",N);
    sayilar(N-1);
}

}

int main(){
    int N;
    printf("N degerini giriniz: ");
    scanf("%d",&N);

    if(N>0){
        sayilar(N);
    }
}