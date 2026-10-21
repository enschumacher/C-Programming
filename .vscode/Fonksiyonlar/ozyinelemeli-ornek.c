/* #include <stdio.h>
void test(){
    printf("Test");
return;
}

void yazdir(){
printf("Merhaba");
yazdir();
}

int main(){
yazdir();
    test();
}
*/
/*
#include <stdio.h>
int toplam(int x){
    if(x==0){
        return 0;
    }else{
        return x+toplam(x-1);
    }
}

int main(){
    int sonuc=toplam(3);
    printf("%d",sonuc);
}
*/

/*
2*f(2,2)
2*f(2,1)
2*f(2,1)

*/
/* Üs alma
#include <stdio.h>
int f(int x, int y){
    if(y<1){
        return 1;
    }
    else{
        return x*f(x,y-1);
    }
}
int main(){
    printf("%d",f(2,3));
}
*/



