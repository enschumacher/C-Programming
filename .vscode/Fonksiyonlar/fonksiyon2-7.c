//Parametre olarak gönderilen bir tamsayı dizisindeki en büyük elemanı döndüren fonksiyon.
#include <stdio.h>

int enbuyukeleman(int dizi[],int boyut){
int enbuyuk=dizi[0];
for(int i=0;i<boyut;i++){
if(dizi[i]>enbuyuk){
enbuyuk=dizi[i];
}
}
return enbuyuk;
}

int main() {
int dizi[5];

for(int i=0;i<5;i++){
    printf("%d. sayiyi giriniz: ",i+1);
    scanf("%d",&dizi[i]);
}
int enbuyuk=enbuyukeleman(dizi,5);
printf("Dizinin en buyuk elemanı: %d\n",enbuyuk);

return(0);
}
