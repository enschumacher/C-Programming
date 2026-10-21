/*
#include <stdio.h>

int main() {
    int matris[5][4];
    int vize, final;

    for (int i = 0; i < 5; i++) {
        printf("%d. Öğrencinin Vize notunu giriniz: ", i + 1);
        scanf("%d", &vize);
        
        printf("%d. Öğrencinin Final notunu giriniz: ", i + 1);
        scanf("%d", &final);
        
        matris[i][1] = i + 1; 
        matris[i][2] = vize; 
        matris[i][3] = final;
        
        matris[i][4] = (vize + final) / 2.0;
    }

    printf("\nÖğrenci No\tVize Notu\tFinal Notu\tOrtalama\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n", matris[i][1], matris[i][2], matris[i][3], matris[i][4]);
    }

    return 0;
}
*/
#include <stdio.h>
int main(){
int matris[5][4];

for(int i=0;i<5;i++){
    matris[i][0]=(i+1);
    printf("Vize: ");
    scanf("%d",&matris[i][1]);
    printf("Final: ");
    scanf("%d",&matris[i][2]);
    matris[i][3]=(matris[i][1]+ matris[i][2])/2;
}

printf("\nNo\tVize\tFinal\tOrtalama\n");
for (int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        printf("%d\t",matris[i][j]);
    }
    printf("\n");
}
}