/*Girilen bir kelimenin uzunluğunu pointer kullanarak bulan fonksiyonu yazınız.*/

#include <stdio.h>
int uzunluk_bul(char* kelime,int *uzunluk){
while(*kelime!='\0'){
    (*uzunluk)++;
    kelime++;
}
return *uzunluk;
}

int main(){
int uzunluk=0;
char kelime[] ="Merhaba";

uzunluk_bul(kelime,&uzunluk);
printf("Kelimenin uzunlugu: %d",uzunluk);

return(0);
}


