/* #include <stdio.h>

#define MAX 10

int main() {
    int matrisA[MAX][MAX], matrisB[MAX][MAX], sonuc[MAX][MAX];
    int satirA, sutunA, satirB, sutunB;

    printf("A matrisinin satır ve sütun sayısını girin (örneğin: 2 3): ");
    scanf("%d %d", &satirA, &sutunA);
    printf("B matrisinin satır ve sütun sayısını girin (örneğin: 3 2): ");
    scanf("%d %d", &satirB, &sutunB);

    if (sutunA != satirB) {
        printf("Matris çarpımı mümkün değil.\n");
        return 1;
    }

    printf("A matrisinin elemanlarını girin:\n");
    for (int i = 0; i < satirA; i++) {
        for (int j = 0; j < sutunA; j++) {
            printf("matrisA[%d][%d]: ", i, j);
            scanf("%d", &matrisA[i][j]);
        }
    }

    printf("B matrisinin elemanlarını girin:\n");
    for (int i = 0; i < satirB; i++) {
        for (int j = 0; j < sutunB; j++) {
            printf("matrisB[%d][%d]: ", i, j);
            scanf("%d", &matrisB[i][j]);
        }
    }

    // Matris çarpımını hesapla
    for (int i = 0; i < satirA; i++) {
        for (int j = 0; j < sutunB; j++) {
            sonuc[i][j] = 0;
            for (int k = 0; k < sutunA; k++) {
                sonuc[i][j] += matrisA[i][k] * matrisB[k][j];
            }
        }
    }

    // Sonuç matrisini yazdır
    printf("Sonuç matris:\n");
    for (int i = 0; i < satirA; i++) {
        for (int j = 0; j < sutunB; j++) {
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*

#include <stdio.h>

void tersCevir(char dizi[]) {
    int uzunluk = 0;

    // Dizi uzunluğunu bul
    while (dizi[uzunluk] != '\0') {
        uzunluk++;
    }

    // Diziyi ters çevir
    for (int i = 0; i < uzunluk / 2; i++) {
        char temp = dizi[i];
        dizi[i] = dizi[uzunluk - 1 - i];
        dizi[uzunluk - 1 - i] = temp;
    }
}

int main() {
    char kelime[100];

    printf("Bir kelime girin: ");
    scanf("%s", kelime); // Kullanıcıdan kelime al

    tersCevir(kelime); // Kelimeyi ters çevir
    printf("Ters çevrilmiş kelime: %s\n", kelime);

    return 0;
}
*/

/*
#include <stdio.h>
//Kullanıcının girdiği bir tam sayıya göre bir matris oluşturun. Oluşturulacak matris, n x n boyutunda olacak 
//ve her bir hücre, o hücrenin satır ve sütun indekslerinin toplamını temsil edecek.

void olusturMatris(int boyut) {
    int matris[boyut][boyut];

    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {
            matris[i][j] = i + j; // Hücre değeri, satır ve sütun indekslerinin toplamı
        }
    }

    printf("Oluşturulan matris:\n");
    for (int i = 0; i < boyut; i++) {
        for (int j = 0; j < boyut; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int boyut;
    printf("Matrisin boyutunu belirleyiniz: ");
    scanf("%d", &boyut);

    olusturMatris(boyut);

    return 0;
}
*/
/*
//Kullanıcıdan bir n x m boyutunda bir matris oluşturun. Kullanıcıdan matrisin elemanlarını aldıktan sonra,
// her satırın toplamını hesaplayın ve ekrana yazdırın.
#include <stdio.h>

// Fonksiyon: Her satırın toplamını hesapla
void satir_toplamlarini_hesapla(int matris[][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        int toplam = 0;
        for (int j = 0; j < m; j++) {
            toplam += matris[i][j]; // Satırdaki her elemanı toplar
        }
        printf("%d. satır toplamı: %d\n", i + 1, toplam);
    }
}

int main() {
    int n, m;

    printf("Satır sayısını giriniz: ");
    scanf("%d", &n);
    printf("Sütun sayısını giriniz: ");
    scanf("%d", &m);

    int matris[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }

    printf("Girdiğiniz matris:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    satir_toplamlarini_hesapla(matris, n, m);

    return 0;
}
*/
/*
//dizi elemanlarının ortalamasını hesapla
#include <stdio.h>
int dizi_bul(int dizi[],int boyut){
int toplam=0;
float ortalama=0;
for(int i=0;i<boyut;i++){
    toplam+=dizi[i];
    }
    ortalama=toplam/boyut;
return ortalama;
}

int main(){
    int boyut;
    printf("Bir boyut degeri giriniz: ");
    scanf("%d",&boyut);

    int dizi[boyut];
    for(int i=0;i<boyut;i++){
        printf("Bir sayi giriniz: ");
        scanf("%d",&dizi[i]);
    }
    for(int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    printf("\n");

    float sonuc=dizi_bul(dizi,boyut);
    printf("Ortalama: %.2f",sonuc);
}
*/
/*
//pozitif sayilarin kaç tane oldugunu bulan fonksiyon yaz !!
#include <stdio.h>
int pozitif_bul(int sayi){
    int sayac=0;
if(sayi>0){
sayac++;
return sayac;
}else{
    return 0;
}

}

int main(){
   int sayi;
   printf("Sayi giriniz: ");
   scanf("%d",&sayi);

int sonuc=pozitif_bul(sayi);
printf ("%d tane pozitif sayi var.",sonuc);
   

    return(0);

}
*/
//Diziyi matrise aktarma

/*
#include <stdio.h>

void diziyiMatriseAktar(int dizi[], int satir, int sutun, int matris[][sutun]) {
    int k = 0; 
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            matris[i][j] = dizi[k];
            k++;
        }
    }
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int satir = 3, sutun = 3;
    int matris[satir][sutun];

    diziyiMatriseAktar(dizi, satir, sutun, matris);

    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>
int faktoriyel_bul(int sayi){
    int sonuc=1;
    for(int i=sayi;i>0;i--){
        sonuc=sayi*faktoriyel_bul(sayi-1);
    }
    return sonuc;
}

int main(){
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

int sonuc=faktoriyel_bul(sayi);
printf("%d!= %d",sayi,sonuc);
    return(0);
}
*/
/*
#include <stdio.h>
int tekmi_ciftmi(int sayi){
}


int main(){
int sayi;
printf("Bir sayi giriniz:");
scanf("%d",&sayi);

tekmi_ciftmi(sayi);
if(tekmi_ciftmi(bulundu)){
    printf("Cift sayidir");
}

    return(0);
}
*/
#include <stdio.h>
int asal_mi(int sayi){
for(int i=2;i<sayi;i++){
if(sayi%i==0){
    return 0;
}
}
    return 1;

}

int main(){
int sayi;
printf ("Bir sayi giriniz: ");
scanf("%d",&sayi);

if(asal_mi(sayi)){
    printf("Sayi asal");
}else{
   printf("sayi asal degil");
}
    return(0);
}