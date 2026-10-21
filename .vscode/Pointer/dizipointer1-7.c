/*Bir dizinin elemanlarını başka bir diziye kopyalayıp yeni diziyi yazdırınız.*/
#include <stdio.h>
int main(){

int dizi[5]={1,2,3,4,5};
int kopyadizi[5];
int *p=dizi;
int *ptr=p;
kopyadizi[5]=*ptr;
printf("\nBaşka bir diziye kopyalanmış hali: ");
for(int i=0;i<5;i++){
    printf("%d ",*(ptr+i));
}

return(0);
}