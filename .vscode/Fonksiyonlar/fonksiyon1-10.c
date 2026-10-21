//Girilen N değerine göre 1-N arasındaki tüm sayıların faktöriyelini bulan programı yazınız(faktöriyel fonksiyonunu kullanarak
#include <stdio.h>
int faktoriyel(int x){
    if(x<0){
        printf("Negatif sayilarda faktoriyel hesaplanamaz!");
        return -1;
    }
    if(x==0){
        return 1;
    }
     int faktoriyel=1;
    for(int i=x;i>1;i--){
        faktoriyel*=i;
    }
            return faktoriyel;
}

int main(){
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    for(int i=0;i<=sayi;i++){
        int sonuc=faktoriyel(i);
       if(sonuc!=-1){
        printf("%d! = %d \n",i,sonuc);
       }
    }
    return(0);
}