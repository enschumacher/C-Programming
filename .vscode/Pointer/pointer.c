 /*
 #include <stdio.h>
int main(){
 int x = 10;
 int *p = &x;
 printf("%d\n", *p);  // x'in değerini yazdırır (10)
 *p = 20;   
         // x'in değerini değiştirir
 printf("%d\n", x);   // x'in yeni değeri (20)

}
*/
#include <stdio.h>

int main(){
int arr[3] = {1, 2, 3};
 int *p = arr;  
 for(int i=0;i<3;i++){
printf("%d\n", *(p+i));  
}
}
