/*Parametre olarak verilen 2 sayının toplamını ve farkını bulan bir fonksiyon yazılacaktır.
 Sayılar main metodunda kullanıcıdan alınarak fonksiyona gönderilecektir, 
 toplam ve fark sonuçları da main metodunda yazılacaktır.*/
 #include <stdio.h>
 void islem(int *toplam, int *cikarma, int x, int y){
    *toplam = x + y;
    if(x>y){
    *cikarma = x - y;
    }else{
    *cikarma = y - x;
    }
 }

int main(){
    int x,y;
    int toplam, cikarma;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&x);

    printf("İkinci sayiyi giriniz: ");
    scanf("%d",&y);

    islem(&toplam,&cikarma,x,y);
    
    printf("Toplam: %d\n",toplam);
    printf("Cikarma: %d",cikarma);

    return(0);
}