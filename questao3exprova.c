#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 3
int somamatriz(int matriz[][tam],int soma){
   
   for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
        soma = soma +matriz[i][j];
        }
    }
    
    return soma;
    
    
}

int maior(int matriz[][tam], int maiorr){
     maiorr =0;
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
     if(matriz[i][j]>=maiorr){
        maiorr = matriz[i][j] ;
     }
        }
    }
    
    
    
    return maiorr;
}
int main(){
    int matriz[tam][tam];
    int maiorr =0;
    int soma=0;
    printf("digite os elementos da matriz:  ");
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
          scanf("%d",&matriz[i][j]);
        }
    }
for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
          printf("%d  ",matriz[i][j]);
        }
        printf("\n");
    }
    printf ("\n");
    soma = somamatriz(matriz,soma);
    printf("a soma eh %d", soma);
    maiorr = maior(matriz, maiorr);
    printf("\n");
    printf("O maior num eh %d", maiorr);
    
    return 0;
}
