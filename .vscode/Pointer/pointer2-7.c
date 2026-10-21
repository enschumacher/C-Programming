/*Pointer kullanarak A-Z arası harfleri belleğe yerleştirip ekrana yazdırınız.*/
/*
#include <stdio.h>
void yerlestirme(char *harf){
for(char i='A';i<='Z';i++){
    *harf=i;
    printf("%c ",*harf);
    (*harf)++;
}
}

int main(){
char harfler[26];

yerlestirme(harfler);

return(0);
}
*/
#include <stdio.h>

int main() {
    char alfabe[26]; /
    char *ptr = alfabe; 

    for (int i = 0; i < 26; i++) {
        *(ptr + i) = 'A' + i; 
    }

    printf("Alfabe: ");
    for (int i = 0; i < 26; i++) {
        printf("%c ", *(ptr + i));
    }

    return 0;
}