#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 10

int main()
{
    int vetor[tam], vetorres[tam];
    
    printf("Digite dez valores para o vetor:  ");
    
    for(int i=0;i<tam;i++){
        scanf("%d",&vetor[i]);


    
    }
    for(int i=0;i<tam;i++){
        printf("%d  ",vetor[i]);
    }
    
    for(int i=0;i<tam;i++){
        if(vetor[i]%2==0){
            vetorres[i]=0;
        }
        else{
            vetorres[i]=1;
        }
    }
    printf("\n");
    for(int i=0;i<tam;i++){
        printf("%d  ",vetorres[i]);}
    
    return 0;
}
