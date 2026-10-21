#include <stdio.h>
//Verilen sayının mutlak değerini döndüren fonksiyonu yazınız
int mutlakdeger(int a){
   if(a<0){
    return a*(-1);
   }
   else{
    return a;
   }
}

int main(){
    int x;
    printf("Bir sayi giriniz: ");
    scanf("%d",&x);
    
int sonuc=mutlakdeger(x);

printf("Sayinin mutlak degeri: %d\n", sonuc);
    return 0;
}

/*
#include <stdio.h>
int mutlak_al(int x){
int mutlak= x * (-1);
return mutlak;
}

int main(){
    int sayi;
    printf("Mutlak degeri alinacak sayiyi giriniz: ");
    scanf("%d",&sayi);

int sonuc=mutlak_al(sayi);

if(sayi>0){
printf("%d sayisinin mutlak degeri: %d",sayi,sonuc);
}else{
    printf("(%d) sayisinin mutlak degeri:%d",sayi,sonuc);
}
    return(0);
}
*/