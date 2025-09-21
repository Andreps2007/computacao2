
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 10
void mostravetores(int vetor[],int vetorres[]){
   for(int i=0;i<tam;i++){
        printf("%d  ",vetor[i]); }
printf("\n");
    for(int i=0;i<tam;i++){
        printf("%d  ",vetorres[i]);}
    


}
int main()
{
    int vetor[tam], vetorres[tam];
    
    printf("Digite dez valores para o vetor:  ");
    
    for(int i=0;i<tam;i++){
        scanf("%d",&vetor[i]);


    
    }
  
    
    for(int i=0;i<tam;i++){
        if(vetor[i]%2==0){
            vetorres[i]=0;
        }
        else{
            vetorres[i]=1;
        }
    }
mostravetores(vetor,vetorres);
    return 0;
}
