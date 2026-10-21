#include <stdio.h>
int usAl(int a,int b){ 
  int sonuc=1; 
  int i; 
  for(i=0;i<b;i++){ 
   sonuc*=a;  
 } 
 return sonuc; 
 } 
 int fakt(int a){ 
  int sonuc=1; 
 int i; 
 for(i=a;i>0;i--){ 
  sonuc*=i; 
 }  
 return sonuc; 
 } 
  
 int main(){   
  int x,k; 
  printf("x ve k giriniz:"); 
  scanf("%d %d",&x,&k); 
   
  int i; 
 float toplam=0; 
  for(i=1;i<=k;i++){ 
    
float us=usAl(x,i); 
   float faktoriyel=fakt(i); 
   toplam+= us/faktoriyel;   
 
//veya tek satırda yazılabilir:  
toplam+= usAl(x,i)/ fakt(i);  
 } 
  printf("seri sonucu:%f",toplam); 
 } 