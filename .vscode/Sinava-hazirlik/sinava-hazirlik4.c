/* Kullanıcıdan bir kelime ve kelimede aranacak karakter alındıktan 
sonra konumBul fonksiyonuna gönderilecektir. Bu fonksiyon kelimenin 
sonundan aramaya başlayarak aranan karakterin sondan kaçıncı sırada 
olduğunu döndürüp main’de ekrana yazdıracaktır. (Karakter yoksa 
“bulunamadı” yazmalıdır).*/
#include <stdio.h>
#include <stdlib.h>
int konumBul(char *kelime, char aranan) { 
    //pointer arttırarak en sona git  
    while (*kelime != '\0') { 
        kelime++; 
    } 
    kelime--;
 int i; 
 int konum = 0;    
    while (*kelime != '\0') {     
     konum++;       
        if (*kelime == aranan) {             
            return konum; 
        } 
        kelime--;
    } 
 
    return 0; 
} 
 
int main() { 
    char *kelime=(char*)malloc(sizeof(char)*100);  
    char karakter; 
     
    printf("Kelimeyi giriniz:"); 
    gets(kelime); 
    printf("Karakteri giriniz:"); 
    scanf(" %c", &karakter); 
    
    int konum = konumBul(kelime, karakter); 
 
    if (konum>0) { 
        printf("%c karakteri sondan %d. siradadir", karakter, konum); 
    } else { 
        printf("Karakter bulunamadi"); 
    } 
 
    free(kelime); 
}  