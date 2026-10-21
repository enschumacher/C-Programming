#include <stdio.h>
//Parametre olarak gönderilen iki sayı arasında kalan sayıların toplamını döndüren fonksiyonu yazınız.
int topla(int x, int y){
    int toplam=0;
    if(x<y){
for(int i=x+1;i<y;i++){
    toplam+=i;
}
}
return toplam;
} 

int main(){
    int sayi1,sayi2;
    printf("Baslangıc sayisini giriniz: ");
    scanf("%d",&sayi1);
    printf("Bitis sayisini giriniz:");
    scanf("%d",&sayi2);

    int toplama=topla(sayi1,sayi2);
    printf("%d-%d arasindaki sayilarin toplami:%d",sayi1,sayi2,toplama);

    return(0);
}