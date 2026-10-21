/*0-10 arası sayıları bir diziye aktarıp diziyi yazdırınız.*/
#include <stdio.h>
void dizi_yazdir(int *dizi){
    printf("Dizi: \n");
    for(int i=0;i<10;i++){
     printf("dizi[%d]= %d \n",i,*(dizi+i));
    }
}

int main(){
int dizi[9];

for(int i=0;i<10;i++){
    dizi[i]=i;
}
dizi_yazdir(dizi);

    return(0);
}