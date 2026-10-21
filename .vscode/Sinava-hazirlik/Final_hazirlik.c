
/* #include <stdio.h>
int main(){
    int baslangic,bitis,artismiktari;
    int sayac=0;
    do{
    printf("Baslangic miktari: ");
    scanf("%d",&baslangic);

    printf("Bitis miktari: "),
    scanf("%d",&bitis);

if(baslangic>=bitis){
    printf("Baslangic degeri bitis degerinden kucuk olmalidir!\n");
}
    }while(baslangic>=bitis);

     printf("Artis miktari: ");
    scanf("%d",&artismiktari);

     for(int i=baslangic;i<=bitis;i+=artismiktari){
        printf("%d ",i);
        sayac++;
     }
    printf("\n%d tane tam sayi vardir.",sayac);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int karakterbul(char *kelime,char aranan){
    int sayac=0;
    while(*kelime!='\0'){
                kelime++;
        if(*kelime==aranan){
            sayac++;
        }
    }return sayac;
}

int main(){
    char aranan;
    char *kelime=(char*)malloc(sizeof(char)*100);

    printf("Kelime girin: ");
    gets(kelime);

    printf("Aradıgınız karakter: ");
    scanf("%c",&aranan);

    int bulundu=karakterbul(kelime,aranan);
    if(bulundu>0){
    printf("%c harfi %d kez bulundu",aranan,bulundu);
    }else{
        printf("Bulunamadi");
    }
    free(kelime);
} */
/*
#include <stdio.h>
void degistir(int *a,int *b){
    int gecici;
    gecici=*a;
    *a=*b;
    *b=gecici;
}

int main(){
    int a,b;
    printf("a= ");
    scanf("%d",&a);

    printf("b= ");
    scanf("%d",&b);

    degistir(&a,&b);
    printf("Yeni degerleri:\n a=%d\nb=%d",a,b);
}
*/
/*
#include <stdio.h>

int main() {
    int matris[4][4];
    int ana_kosegen_toplam = 0, yan_kosegen_toplam = 0;

    printf("4x4 boyutunda matrisin elemanlarini giriniz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", (*(matris + i) + j));
        }
    }

    for (int i = 0; i < 4; i++) {
        ana_kosegen_toplam += *(*(matris + i) + i);           // Ana köşegen: matris[i][i]
        yan_kosegen_toplam += *(*(matris + i) + (3 - i));     // Yan köşegen: matris[i][3 - i]
    }

    printf("Ana köşegen elemanlarinin toplami: %d\n", ana_kosegen_toplam);
    printf("Yan köşegen elemanlarinin toplami: %d\n", yan_kosegen_toplam);

    return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int N=5;
    int buyuk_indeks=0;
    int kucuk_indeks=0;
    int dizi[5]={1,2,3,4,5};
    int en_buyuk=dizi[0];
    int en_kucuk=dizi[0];

    for(int i=0;i<N;i++){
        if(dizi[i]>en_buyuk){
            en_buyuk=dizi[i];
            buyuk_indeks=i;
        }
        else if(dizi[i]<en_kucuk){
            en_kucuk=dizi[i];
            kucuk_indeks=i;
        }
    }
    printf("\nEn buyuk sayi dizi[%d] konumundaki %d sayisi ",buyuk_indeks,en_buyuk);
    printf("\nEn kucuk sayi dizi[%d] konumundaki %d sayisi ",kucuk_indeks,en_kucuk);
}
*/
/*
#include <stdio.h>
int main(){
    int azalma_mik;
    int toplam=0;
    int baslangic=0,bitis=0;

    while(baslangic<=bitis){
        printf("Baslangic sayisi girin: ");
        scanf("%d",&baslangic);
         
        printf("Bitis miktari girin: ");
        scanf("%d",&bitis);
    }

    printf("Azalma miktarini girin: ");
    scanf("%d",&azalma_mik);
    
    for(int i=baslangic;i>=bitis;i-=azalma_mik){
        printf("%d ",i);
        toplam+=i;
    }
    printf("\nToplam = %d ",toplam);
}
*/
/*
#include <stdio.h>

void dizicarpimbul(int dizi[],int N,int carpim[]){
    int sayac=0;
    for(int i=0;i<N/2;i++){
        carpim[sayac]=dizi[i]*dizi[N-i-1];
        sayac++;
        
    }
    if(N%2!=0){
            carpim[sayac]=dizi[N/2]*dizi[N/2];
            sayac++;
        }
}

int main(){
    int N=5;
    int dizi[5]={1,2,3,4,5};
    int carpim[6];

    dizicarpimbul(dizi,N,carpim);
    printf("Carpim dizisi: ");
    for(int i=0;i<(N+1)/2;i++){
        printf("%d ",carpim[i]);
    }
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
void kelimeolustur(char *k1,char *k2,char *k3){
    int uzunluk1=0, uzunluk2=0, uzunluk3=0;
    while(*(k1+uzunluk1)!='\0'){
        *(k3+uzunluk2)=*(k1+uzunluk1);
        uzunluk1++;
        uzunluk2++;
    }

        *(k3+uzunluk2) ='_';  
        uzunluk2++;

    while(*(k2+uzunluk3)!='\0'){
        *(k3+uzunluk2)=*(k2+uzunluk3);
        uzunluk2++;
        uzunluk3++;
    }
    *(k3+uzunluk2)='\0';
}

int main(){
    char *k1=(char*)malloc(sizeof(char)*100);
    char *k2=(char*)malloc(sizeof(char)*100);
    char *k3=(char*)malloc(sizeof(char)*200);

    printf("1. kelime: ");
    gets(k1);

    printf("2. kelime: ");
    gets(k2);

    printf("1. kelime: %s\n",k1);
    printf("2. kelime: %s\n",k2);

    kelimeolustur(k1,k2,k3);

    printf("Yeni kelime: %s",k3);
}
*/
/*
#include <stdio.h>

int main(){
    int sayi[6];
    int toplam=0;
    for(int i=0;i<6;i++){
        printf("%d. 5 basamakli sayiyi giriniz: ",i+1);
        scanf("%d",&sayi[i]);
    }
    for(int i=0;i<6;i++){
        while(sayi[i]>0){
        toplam+=sayi[i]%10;
        sayi[i]/=10;
    }
    }
   printf("toplam: %d",toplam);

} */
/*
#include <stdio.h>

// 3x4 Fibonacci matrisini dolduran fonksiyon
void fibonacciMatrisOlustur(int matris[3][4], int baslangic) {
    int fib1 = baslangic, fib2 = baslangic + 1; // Fibonacci serisinin ilk iki elemanı
    int fib; // Sonraki Fibonacci elemanları

    for (int i = 0, k = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++, k++) {
            if (k == 0) {
                matris[i][j] = fib1;
            } else if (k == 1) {
                matris[i][j] = fib2;
            } else {
                fib = fib1 + fib2;
                matris[i][j] = fib;
                fib1 = fib2;
                fib2 = fib;
            }
        }
    }
}

// Matrisi ekrana yazdıran fonksiyon
void matrisYazdir(int matris[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%5d ", matris[i][j]); // Elemanları güzel bir biçimde hizala
        }
        printf("\n");
    }
}

int main() {
    int baslangic;
    int matris[3][4];

    // Kullanıcıdan başlangıç değerini al
    printf("Fibonacci serisinin başlangıç sayısını giriniz: ");
    scanf("%d", &baslangic);

    // Fibonacci matrisini oluştur
    fibonacciMatrisOlustur(matris, baslangic);

    // Matrisi ekrana yazdır
    printf("\n3x4 Fibonacci Matrisi:\n");
    matrisYazdir(matris);

    return 0;
}
*/
/*
#include <stdio.h>
void toplambul(int matris[3][3],int *kosegen1,int *kosegen2){
    *kosegen1=0;
    *kosegen2=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("Sayi giriniz: ");
        scanf("%d",&matris[i][j]);
        }
    }
printf("Girilen matris: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }

        for(int i=0;i<3;i++){
            *kosegen1+=matris[i][i];
            *kosegen2+=matris[i][2-i];
        }
}

int main(){
    int matris[3][3];
    int kose1,kose2;

    toplambul(matris,&kose1,&kose2);
    printf("Kose1: %d ",kose1);
    printf("\nKose2: %d ",kose2);
}
*/
/*
#include <stdio.h>

// Diziyi ters çeviren fonksiyon
void tersCevir(int *dizi, int uzunluk) {
    int *bas = dizi;                // Dizinin başına işaretçi
    int *son = dizi + uzunluk - 1;  // Dizinin sonuna işaretçi
    int temp;                       // Geçici değişken

    while (bas < son) {
        // İlk ve son elemanları yer değiştir
        temp = *bas;
        *bas = *son;
        *son = temp;

        // İşaretçileri birer adım ilerlet
        bas++;
        son--;
    }

    // Ters çevrilmiş diziyi yazdır
    printf("Ters çevrilmiş dizi: ");
    for (int i = 0; i < uzunluk; i++) {
        printf("%d ", *(dizi + i));
    }
    printf("\n");
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5}; // Örnek dizi
    int uzunluk = sizeof(dizi) / sizeof(dizi[0]); // Dizinin uzunluğu

    printf("Orijinal dizi: ");
    for (int i = 0; i < uzunluk; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    // Diziyi ters çevir
    tersCevir(dizi, uzunluk);

    return 0;
}
*/
/*
#include <stdio.h>

// Çift ve tek sayıları yer değiştiren fonksiyon
void ciftTekYerDegistir(int *dizi, int uzunluk) {
    int *bas = dizi;                
    int *son = dizi + uzunluk - 1;  
    int temp;                       
    while (bas < son) {
        if (*bas % 2 == 0) {
            bas++;
        }
        else if (*son % 2 != 0) {
            son--;
        }
        // Baş tek ve son çift ise yer değiştir
        else {
            temp = *bas;
            *bas = *son;
            *son = temp;
            bas++;
            son--;
        }
    }

    printf("Düzenlenmiş dizi: ");
    for (int i = 0; i < uzunluk; i++) {
        printf("%d ", *(dizi + i));
    }
    printf("\n");
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int uzunluk = 8 
    printf("Orijinal dizi: ");
    for (int i = 0; i < uzunluk; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    ciftTekYerDegistir(dizi, uzunluk);

    return 0;
}
*/
#include <stdio.h>

int main() {
    int sayi;
    int basamakSayisi[10] = {0}; // 0-9 arası basamakları saymak için dizi

    // Kullanıcıdan pozitif bir tamsayı al
    printf("Pozitif bir tamsayi giriniz: ");
    scanf("%d", &sayi);

    // Sayının her basamağını say
    int temp = sayi; // Geçici değişken
    while (temp > 0) {
        int basamak = temp % 10; // Son basamağı al
        basamakSayisi[basamak]++; // Basamağı say
        temp /= 10; // Son basamağı çıkar
    }

    // Tekrar eden basamakları yazdır
    for (int i = 0; i < 10; i++) {
        if (basamakSayisi[i] > 1) { // Eğer basamak 1'den fazla kez tekrar ediyorsa
            printf("%d tekrar ediyor (%d kez)\n", i, basamakSayisi[i]);
        }
    }

    return 0;
}
