//Girilen bir cümledeki her bir kelimeyi matrisin bir satırına aktaran programı yazınız. 
/*
#include<stdio.h>

int main(){
    char cumle[100];
    char matris[10][10];
    int satir=0,sutun=0;
       printf("Bir cumle giriniz: ");
       gets(cumle);
    
    for (int i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] != ' ' && cumle[i] != '\n') {
            matris[satir][sutun++] = cumle[i];
        } else {
            if (sutun > 0) {
                matris[satir][sutun] = '\0'; 
                satir++;
                sutun = 0;
            }
        }
    }
    if(sutun > 0){
        matris[satir][sutun]='\0';
        satir++;
    }

printf("\n Matris:\n");
for (int i = 0; i < satir; i++) {
        printf("%s\n", matris[i]);
    }

return (0);
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char cümle[100];
    int i=0,j=0,k=0,l=0;

    printf("Bir cümle giriniz:  ");
    gets(cümle);

    char kelime[100][100];

    while(cümle[i]!='\0'){
        if(cümle[i]!=' '){
            kelime[k][l]=cümle[i];
            l++;
        } 
        else {
        kelime[k][l]='\0';
        k++,l=0;}
        i++;
    }
     kelime[k][l]='\0';
     
    for(i=0;i<k+1;i++){
        for(j=0;kelime[i][j]!='\0';j++){
            printf("%c ",kelime[i][j]);
        }
        printf("\n");
    }
    return 0;
}

