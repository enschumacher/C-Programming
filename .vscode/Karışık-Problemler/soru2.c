/*Girilen bir cümlede istenen bir kelimenin kaç defa geçtiğini bulan programı yazınız.*/
#include <stdio.h>
int main() {
    char cumle[100], kelime[100];
    int j=0, sayac = 0;

    printf("Cümleyi giriniz: ");
    gets(cumle); 

    printf("Bulunmak istenen kelime: ");
    gets(kelime); 

    for (int i = 0; cumle[i] != '\0'; i++) { 
        if (cumle[i] == kelime[j]) {
            j++;  // bir sonraki kelimeye geçer
            if (kelime[j] == '\0') { 
                sayac++; // {m e r h a b a \0}sonunda \0 olduğunda onu görünce sadece orda sayac artıcak
                j = 0; 
            }
        } else {
            j = 0; 
        }
    }

    printf("Kelimenin cümlede geçiş sayısı: %d\n", sayac);
    return 0;
}
