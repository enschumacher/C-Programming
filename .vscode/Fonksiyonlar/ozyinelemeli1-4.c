//Girilen sayının faktöriyelini özyinelemeli fonksiyon ile bulunuz.
#include <stdio.h>
int faktoriyel(int x){
    if(x<=1){
        return 1;
    }
    return x *faktoriyel(x-1);
}

int main(){
    int n;
    printf("Bir sayi giriniz: ");
    scanf("%d",&n);

    int sonuc=faktoriyel(n);
    printf("%d! = %d",n,sonuc);
    return(0);
}