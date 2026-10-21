#include <stdio.h>
int main(){
    char harf;
    char kelime[20];

    printf("Harf giriniz:\n ");
    scanf("%c",&harf);
    printf("kelime giriniz:\n");
    scanf("%s",kelime);

    int tekrarSayisi = 0;
    int i;
    for(int i=0;kelime[i]!='\0';i++){
        if(kelime[i] == harf){
            tekrarSayisi++;
            if(tekrarSayisi >= 2){
                kelime[i] = '*';
            }
        }
    }

    printf("Yeni kelime: %s", kelime);
}