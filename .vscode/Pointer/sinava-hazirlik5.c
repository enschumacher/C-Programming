/*şeklindeki seriyi, kullanıcıdan alınan x ve k değerlerine göre hesaplayan 
programı yazınız. Üs alma ve faktöriyel bulma işlemleri ayrı 
fonksiyonlar olarak yazılacaktır */
#include <stdio.h>
int us_al(int x,int b){
 int sonuc=1;
 for(int i=0;i<b;i++){
    sonuc*=x;
 }return sonuc;
}

int faktoriyel(int a){
int sonuc=1;
for(int i=a;i>0;i++){
sonuc*=i;
}return sonuc;
}

int main(){
int x,k;
printf("x ve k degerlerini giriniz: ");
scanf("%d %d",&x,&k);

 float toplam=0;

for(int i=1;i<k;i++){
    float us=us_al(x,i);
    float faktoriyelal=faktoriyel(i);
    toplam+=us/faktoriyelal;
}
printf("Seri sonucu:%f ",toplam);
    return(0);
}