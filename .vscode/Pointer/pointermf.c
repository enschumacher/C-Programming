#include <stdio.h>
#include <stdlib.h>
void ters(int m1[],int *m){
    for(int i=4;i>=0;i--){
        *(m++)=m1[i];
    }
}
int main() {
    int m1[5];
    int *m = (int *)malloc(5 * sizeof(int));
    for(int i=0;i<5;i++){
        printf("Sayı giriniz: ");
        scanf("%d",&m1[i]);
    }
    printf("\nOrijinal Dizi:  \n");
    
    for(int i=0;i<5;i++){
        printf("%2d\n",m1[i]);}
    
    ters(m1,m); 
    printf("\nTers Dizi:  \n");
        
        for(int i=0;i<5;i++){
        printf("%2d\n",*(m+i));
    }
    free(m);
}