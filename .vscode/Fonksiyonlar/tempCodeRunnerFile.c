//Girilen 2 sayının en büyük ortak bölenini(EBOB) özyinelemeli olarak bulunuz.
#include <stdio.h>
int EBOB(int x,int y){
if(y==0){
    return x;
}else{
    return EBOB(y,x%y);
}
}

int main(){
    int x,y;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&x);

    printf("İkinci sayiyi giriniz: ");
    scanf("%d",&y);

    printf("%d ve %d sayilarinin EBOB'u: %d\n", x, y, EBOB(x, y));

    return 0;
}