#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void kelimeBirlestir(char *m1,char *m2,char *m3){
    int i=0,j=0;
    for(;*(m1+i)!='\0';i++){
        *(m3+i)=*(m1+i);
    }
    *(m3+i)='_';
    i++;
    for(;*(m2+j)!='\0';i++,j++){
        *(m3+i)=*(m2+j);
    }
}

int main(){ 
    char *m1=(char *)malloc(1000*sizeof(char*));
    char *m2=(char *)malloc(1000*sizeof(char*));
    char *m3=(char *)malloc(1000*sizeof(char*));
   
    printf("1.Kelime:  ");
    gets(m1);
    
    printf("2.Kelime:  ");
    gets(m2);
    
    printf("Girilen kelimeler:\n");
    for(int i=0;*(m1+i)!='\0';i++){
        printf("%c",*(m1+i));
    }
    
     printf("\n");
    
    for(int i=0;*(m2+i)!='\0';i++){
        printf("%c",*(m2+i));
    }
   
     printf("\nSonuc:  \n");
    
    kelimeBirlestir(m1,m2,m3);
   
    for(int i=0;*(m3+i)!='\0';i++){
        printf("%c",*(m3+i));
    }        
}