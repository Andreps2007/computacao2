#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define tam 6
int main()
{
    int vetor[tam], par, impar;
    par=0;
    impar=0;
    srand (time(NULL));
    for(int i=0; i<tam; i++)
    {
        vetor[i]= rand()%100;

    }
    for(int i=0; i<tam; i++)
    {
        printf("%d  ", vetor[i]);

    }
    for(int i=0; i<tam; i++)
    {
        if(vetor[i]%2==0)
        {
            printf("esse numero e par %d  ", vetor[i]);
            par++;
        }

        else if(vetor[i]%2!=0)
        {
            printf("esse numero e impar %d  ", vetor[i]);
            impar++;


        }
    }
    printf("A quantidade de numeros pares e %d e impares e %d", par, impar);
    return 0;

}
