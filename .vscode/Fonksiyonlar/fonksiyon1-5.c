#include <stdio.h>
//Parametre olarak verilen taban ve üs değerlerine göre Üs Alma işlemi gerçekleştiren ve sonucu döndüren fonksiyonu yazınız.

double usAl(double taban, int us) {
    double sonuc = 1.0;
    for (int i = 0; i < us; i++) {
        sonuc *= taban;
    }
    return sonuc; 
}

int main() {
    double taban;
    int us;

    printf("Taban değerini girin: ");
    scanf("%lf", &taban);
    printf("Üs değerini girin: ");
    scanf("%d", &us);

    double sonuc = usAl(taban, us);
    printf("%.2f üzeri %d = %.2f\n", taban, us, sonuc);

    return 0;
}

/*
#include <stdio.h>
int us_al(int taban,int us){
int sonuc=1.0;
for(int i=0;i<us;i++){
    sonuc*=taban;
}return sonuc;
}

int main(){
    int taban;
    int us;
    printf("Taban degeri: ");
    scanf("%d",&taban);
    printf("Us degeri: ");
    scanf("%d",&us);

    int sonuc= us_al(taban,us);
    printf("%d uzeri %d: %d\n",taban,us,sonuc);

    return(0);
}
*/