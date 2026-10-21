#include <stdio.h>
#include <stdlib.h>

void sayiYaz(int a) {
    printf("Gelen sayi: %d\n", a);
}

int topla(int a, int b, int c) { 
    int toplam = a + b + c;  
    return toplam;              
}

int main() {                    
    int sonuc = topla(2, 3, 4);   
    printf("Toplam: %d\n", sonuc);
    return 0;                   
}
