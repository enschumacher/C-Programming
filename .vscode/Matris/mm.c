// main() metodunda kullanıcıdan 10 adet tamsayı aldıktan sonra 
// bu sayıları hesapla isimli bir fonksiyona gönderiniz. Bu fonksiyon 
// kendisine gönderilen sayılardan en büyük ve ikinci en büyük sayıyı 
// bulmaktadır. Bulunan en büyük ve ikinci en büyük sayıları main() 
// metodunda ekrana yazdırınız.(global değişken kullanılmayacaktır)

void hesapla(int dizi[],int N){
    int buyuk_1= 0;
    int buyuk_2=0;
    
    for(int i=0;i<N;i++){
     if(dizi[i]>buyuk_1){
        buyuk_1=dizi[i];

     if(buyuk_2 > buyuk_1){
        buyuk_2 = dizi[i-1]
     }

     }
    }
    printf("Dizi 1. buyuk ve 2. buyuk sayi: %d %d",buyuk_1)

}

int main(){
    int N=10;
    int dizi[N]
    
    for(int i=0;i<N;i++){
        printf("%d. sayi: ",i+1);
        scanf("%d",&dizi[i]);
    }

   hesapla(dizi,N)
}