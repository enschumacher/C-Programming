#include <stdio.h>
int faktoriyel_bul(int sayi){
int sonuc=1;

for(int i=sayi;i>1;i--){
    sonuc= sayi * i;
}
return sonuc;
}
int main(){
int sayi;
printf("Faktoriyel_bul fonksiyonunun adresi: %p\n",faktoriyel_bul);
printf("Bir sayi giriniz: ");
scanf("%d",&sayi);

int faktoriyel=faktoriyel_bul(sayi);
printf("%d! = %d",sayi,faktoriyel);

return(0);
}