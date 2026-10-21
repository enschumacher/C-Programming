#include <stdio.h>
#include <stdlib.h>

void kelime_yazdir(char *kelime) {
    char *ptr = kelime;
    int uzunluk = 0;

    while (*ptr != '\0') {
        uzunluk++;
        ptr++;
    }

    printf("Kelime: %s\n", kelime);
    
    printf("Tersten yazılmış hali: ");
    for (int i = uzunluk - 1; i >= 0; i--) {
        printf("%c", *(kelime + i));
    }
    printf("\n");
}

int main() {
    char *kelime=(char*)malloc(sizeof(char)*100);
    printf("Kelimeyi giriniz:"); 
    gets(kelime); 

    kelime_yazdir(kelime);    
    free(kelime); 
    
    return (0);
}
