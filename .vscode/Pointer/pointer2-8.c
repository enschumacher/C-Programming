/*Girilen kelimenin palindrom olup olmadığını pointer kullanarak bulunuz.*/
#include <stdio.h>

void kontrol_et_ve_yazdir(char *kelime) {
    int uzunluk = 0,palindrom=0;

    while (*(kelime+uzunluk) != '\0') {
        uzunluk++;
    }
printf("Tersten yazılmış hali: ");
    for (int i = uzunluk - 1; i >= 0; i--) {
     printf("%c",*(kelime+i));
    }
    printf("\n");
    printf("Kelime: %s\n", kelime);
    
    for(int i=0;i<uzunluk/2;i++){
        if(*(kelime+i)!=*(kelime+(uzunluk-i-1))){
            palindrom=1;
            break;
        }
        else{
            palindrom=0;
        }
    }
    if(palindrom==0){
        printf("Palindromdur.");
    }else{
        printf("Palindrom degil");
    }
}

int main() {
    char kelime[100];

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    kontrol_et_ve_yazdir(kelime);

    return 0;
}
/* 
#include <stdio.h>
void kontrol_et_ve_yazdir(char *kelime) {
    int uzunluk = 0,kontrol=0;

    while (*(kelime+uzunluk) != '\0') {
        uzunluk++;
    }
        char ters[uzunluk];
printf("Tersten yazılmış hali: ");
    for (int i = uzunluk - 1; i >= 0; i--) {
        ters[i]=*(kelime+i);
        printf("%c",ters[i]);
    }
    printf("\n");
    printf("Kelime: %s\n", kelime);
    
    for(int i=0;i<uzunluk/2;i++){
        if(ters[i]!=ters[uzunluk-i-1]){
            kontrol=1;
            break;
        }
        else{
            kontrol=0;
        }
    }
    if(kontrol==0){
        printf("Palindromdur.");
    }else{
        printf("Palindrom degil");
    }
}

int main() {
    char kelime[100];

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    kontrol_et_ve_yazdir(kelime);

    return 0;
}
*/
