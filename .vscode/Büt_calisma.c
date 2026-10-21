//Asal sayı bulan önceki sorudaki Asal fonksiyonu kullanarak yazınız.
/*
#include <stdio.h>
int Asal(int x){
    if(x<2) return 0;
if(x==2 || x==3) return 1;
if(x%2==0) return 0;

for(int i=1;i*i<=x;i++){
    if(x%i==0){
    return 0;
    }else{
        return 1;
    }
}
}

int main(){
    int x;
    printf("x: ");
    scanf("%d",&x);

    if(Asal(x)){
        printf("%d asal sayidir\n",x);
    }else{
        printf("%d asal sayi degildir!\n",x);
    }
    return (0);
}
*/
/*
#include <stdio.h>

void diziyazdir(int dizi[], int elemansayisi) {
    for (int i = 0; i < elemansayisi; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

int main() {
    int my_dizi[5] = {10, 20, 30, 40, 50};
    int ters_dizi[5];
    int dizi_boyutu = 5;

    printf("Orijinal dizi:\n");
    diziyazdir(my_dizi, dizi_boyutu);

    for (int i =dizi_boyutu-1;i>=0; i--) {
        ters_dizi[i] = my_dizi[dizi_boyutu-i-1];
    }

    printf("Dizinin tersten yazılmış hali:\n");
    diziyazdir(ters_dizi, dizi_boyutu);

    return 0;
}
*/
/*
#include <stdio.h>
void yazdir(int bas, int N) {
    if (N==0) {
        return 1;
    }
    printf("%d ", N);
    yazdir(N-1, N-1);
}

int main() {
    int N;
    printf("N degeri giriniz: ");
    scanf("%d", &N);

    if (N > 0) {
        yazdir(N, N);
    } else {
        printf("Pozitif bir sayi giriniz!\n");
    }

    return 0;
}
*/
/*
#include <stdio.h>
void ters(int dizi[],int N){
    int *ptr;

    for(int i=N-1;i>=0;i--){
    *(ptr+i)=dizi[N-i-1];
    }

    for(int i=0;i<N;i++){
    printf("%d ",*(ptr+i));
}
}
int main(){
    int dizi[5];
    int N=5;

    for(int i=0;i<N;i++){
        printf("%d. eleman: ",i+1);
        scanf("%d",&dizi[i]);
    }

        printf("Orijinal dizi: ");
     for(int i=0;i<N;i++){
        printf("%d ",dizi[i]);
    }

      printf("\nTers dizi: ");
    ters(dizi,5);
}
*/
/*
//Girilen kelimenin palindrom olup olmadığını pointer kullanarak bulunuz.
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
/*
#include <stdio.h>
void matrisolustur(int dizi[],int N){
    int basamak=0,gecici=0;
    int matris[N][4];
    for(int i=0;i<N;i++){
        gecici=dizi[i];
        for(int j=3;j>=0;j--){
            basamak=gecici%10;
            matris[i][j]=basamak;
             gecici/=10;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int N=5;
    int dizi[N];

    for(int i=0;i<N;i++){
        printf("%d. dört basamakli sayiyi girin: ",i+1);
        scanf("%d",&dizi[i]);
    }
    matrisolustur(dizi,N);

}
*/  /*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size, targetSum;
    
    // Kullanıcıdan dizi boyutu ve hedef toplamı al
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);
    printf("Hedef toplamı girin: ");
    scanf("%d", &targetSum);
    
    // Rastgele sayılarla dizi oluştur
    int *arr = (int *)malloc(size * sizeof(int));
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
    
    // Tüm olası alt kümeleri kontrol et
    for (int i = 0; i < size; i++) {
        int sum = arr[i];
        printf("{ %d", arr[i]);
        for (int j = i + 1; j < size; j++) {
            sum += arr[j];
            printf(", %d", arr[j]);
            if (sum == targetSum) {
                printf(" }\n");
                break;
            }
        }
        printf("\n");
    }
    
    free(arr);
    return 0;
}
*/ /*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rows, cols, target;
    int **matrix, count = 0, index = 0;
    int **result;

    printf("Satır sayısını girin: ");
    scanf("%d", &rows);
    printf("Sütun sayısını girin: ");
    scanf("%d", &cols);
    printf("Aranacak değeri girin: ");
    scanf("%d", &target);

    // Matrisi oluştur
    matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    // Matrisi doldur (buraya istediğiniz şekilde değerler atayabilirsiniz)
    // Örneğin, rastgele sayılarla doldurabilirsiniz:
    srand(time(NULL));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    // Sonuç dizisini oluştur
    result = (int**)malloc(rows * sizeof(int*));

    // Matrisi tarayarak hedef değeri içeren satırları bul
    for (int i = 0; i < rows; i++) {
        int found = 1;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != target) {
                found = 0;
                break;
            }
        }
        if (found) {
            result[index++] = matrix[i];
            count++;
        }
    }

    if (count == 0) {
        printf("Hedef değer hiçbir satırda bulunamadı.\n");
    } else {
        printf("%d adet satırda hedef değer bulundu.\n", count);
        // Bulunan satırların başlangıç adreslerini yazdır (isteğe bağlı)
    }

    // Belleği serbest bırak
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(result);

    return 0;
}
*/ /*
#include <stdio.h> 
void faktoriyel(int dizi[],int N){
    int fakt=1,sayi;
    for(int i=0;i<N;i++){
        fakt=1;
        sayi=dizi[i];
        for(int j=sayi;j>0;j--){
            fakt*=j;
        }
        dizi[i]=fakt;
    }
    printf("\nFaktoriyelleri alinmis  dizi: ");
    for(int i=0;i<N;i++){
        printf("%d ",dizi[i]);
    }
}

int main(){
    int N;

    printf("N: ");
    scanf("%d",&N);
    int dizi[N];
    for(int i=0;i<N;i++){
        printf("%d. sayi: ",i+1);
        scanf("%d",&dizi[i]);
    }
    faktoriyel(dizi,N);
} */

#include <stdio.h>
int seslibul(char cumle[]){
    int sayac=0;

    for(int j=0;cumle[j]!='\0';j++){
        if(cumle[j]=='a'||cumle[j]=='e'||cumle[j]=='i'||cumle[j]=='o'||cumle[j]=='u'){
            sayac++;
        }
    }return sayac;
}

int main(){
    char cumle[100];
    printf("Cumle: ");
    gets(cumle);

    int sayi=seslibul(cumle);
    printf(" Sayi= %d",sayi);
}