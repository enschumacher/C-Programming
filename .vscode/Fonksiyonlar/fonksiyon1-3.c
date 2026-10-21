//Yarıçap değerini parametre olarak alıp dairenin alanını ve çevresini hesaplayan AlanHesapla ve CevreHesapla fonksiyonlarını tek programda yazıp çağırınız.

#include <stdio.h>
#define PI 3
int AlanHesapla(int r){
    int alan= PI * r * r;
}

int CevreHesapla(int r){
    int cevre= 2 * PI * r;
}

int main(){
    int yaricap;
    printf("Dairenin yaricapini giriniz: ");
    scanf("%d",&yaricap);
    int daire_alanı= AlanHesapla(yaricap);
    int daire_cevresi= CevreHesapla(yaricap);

printf("Dairenin alanı:%d\n",daire_alanı);
printf("Dairenin cevresi: %d",daire_cevresi);

return(0);
}


/*#include <stdio.h>

#define PI 3

double cevreHesapla(int r);
double alanHesapla(int r);

int main() {
    int yariCap;

    printf("Yaricap degerini giriniz: ");
    scanf("%d", &yariCap);

    double daireCevre = cevreHesapla(yariCap);
    double daireAlan = alanHesapla(yariCap);

    printf("Dairenin cevresi: %.2lf\n", daireCevre);
    printf("Dairenin alani: %.2lf\n", daireAlan);

    return 0;
}

double cevreHesapla(int r) {
    return 2 * PI * r;
}

double alanHesapla(int r) {
    return PI * r * r;
}
*/