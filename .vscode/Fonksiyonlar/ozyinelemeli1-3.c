//Girilen kelimedeki karakterleri özyinelemeli fonksiyon ile yazdırınız.
/*#include <stdio.h>

void karakterleriYazdir(char kelime[]) {
    if (*kelime == '\0') {
        return;
    }
        printf("%c ", *kelime);
    karakterleriYazdir(kelime + 1);
}

int main() {
    char kelime[100];
    
    printf("Bir kelime giriniz: ");
    scanf("%s", kelime);
    
    printf("Kelimenin karakterleri:\n");
    karakterleriYazdir(kelime);
    
    return 0;
}
*/

//Girilen kelimedeki karakterleri özyinelemeli fonksiyon ile yazdırınız.
#include <stdio.h>

void yazdir(char kelime[], int index) {
    if (kelime[index] == '\0') {
        return;
    }

    printf("%c ", kelime[index]);

    yazdir(kelime, index + 1);
}

int main() {
    char kelime[100];
    printf("Bir kelime giriniz: ");
    gets(kelime);

    yazdir(kelime, 0);

    return 0;
}