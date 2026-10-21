/*Girilen 5 sayıyı bir diziye aktardıktan sonra ayrı bir döngüde dizi elemanlarını yazdırıp toplamlarını hesaplayınız.*/
#include <stdio.h>
int main(){
 int dizi[5];
 int *ptr=dizi;
 int toplam=0;

 for(int i=0;i<5;i++){
    printf("%d. sayiyi giriniz: ",i+1);
    scanf("%d",ptr);
    ptr++;
 }

printf("Dizi: ");
ptr=dizi;
 for(int i=0;i<5;i++){
    printf("%d ",*ptr);
    toplam+=*ptr;
    ptr++;
 }
 printf("\nToplam: %d",toplam);


 return(0);
}
/*#include <stdio.h>

void diziIslemleri(int *dizi, int boyut) {
    int toplam = 0;

    printf("Dizi elemanları:\n");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", *(dizi + i));
        toplam += *(dizi + i);
    }

    printf("\nToplam: %d\n", toplam);
}

int main() {
    int boyut;
    
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &boyut);

    int dizi[boyut];
    int *ptr = dizi;

    printf("Diziye elemanları giriniz:\n");
    for (int i = 0; i < boyut; i++) {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }

    diziIslemleri(dizi, boyut);

    return 0;
}*/
