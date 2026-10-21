//1-N arası asal sayıları listeleyen programı önceki sorudaki Asal fonksiyonu kullanarak yazınız.
#include <stdio.h>
int Asal(int x){
    int N;
if(x<=3) return 1;
if(x%2==0 || x%3==0) return 0;

for(int i=1;i<N;i++){
    if(x%i==0 || x%(i+2)==0){
    return 0;
    }else{
        return 1;
    }
}
}

int main(){
    int N;
    printf("Kaça kadar asal sayi kontrolü yapılsın: ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
    if(Asal(i)){
        printf("%d asal sayidir\n",i);
    }else{
        printf("%d asal sayi degildir!\n",i);
    }
    }
    return (0);
}