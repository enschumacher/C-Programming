#include <stdio.h>
#include <stdlib.h>
//Matris Skaler Çarpım: 2x2 boyutunda bir matris elemanlarını ve matrisle çarpılacak tamsayı değerini kullanıcıdan aldıktan sonra 
//çarpma işlemini gerçekleştirip sonuç matrisini elde ediniz ve yazdırınız.
int main(){
int matris[2][2];
int sonuc[2][2];
int x;

printf("Matrisle carpılacak sayiyi giriniz: ");
scanf("%d",&x);

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
printf("Matrisin [%d][%d] elemanını giriniz: ",i+1,j+1);
scanf("%d",&matris[i][j]);
    }
}
printf("\nGirilen matris:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
   printf("%d\t",matris[i][j]);
    }
    printf("\n");
}

for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        sonuc[i][j]=matris[i][j]*x;
    }
}
printf("\nSonuc matrisi: \n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",sonuc[i][j]);
    }
    printf("\n");
}
return(0);
}