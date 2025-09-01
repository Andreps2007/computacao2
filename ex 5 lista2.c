#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 15


void preenchevetor(int vetor1[],int vetor2[])
{

    printf("digite vetor 1:\n");
    for(int i=0; i<tam; i++)
    {

        scanf("%d", &vetor1[i]);
    }
    printf(" digite vetor2:\n");
    for(int i=0; i<tam; i++)
    {

        scanf("%d", &vetor2[i]);
    }
}

int primo(int num)
{
    if(num <=1)
    {return 0;}
        for(int i=2; i*i<=num; i++)
        {
            if(num%i==0)
            {
                return 0;
            }

        }


    return 1;
}

void verificaprimo(int vetor1[],int vetor2[],int vetorprimo[],int *n)
{
    *n=0;
    for(int i=0; i<tam; i++)
    {


        if( primo(vetor1[i]))
        {
            vetorprimo[*n]=vetor1[i];

                           (*n)++;
        }

         if( primo(vetor2[i]))
        {
            vetorprimo[*n]=vetor2[i];

                           (*n)++;


        }
    }
}


int main()
{
    int n=0, vetor1[tam], vetor2[tam], vetorprimo[tam * 2];
    preenchevetor(vetor1,vetor2);
    verificaprimo(vetor1,vetor2,vetorprimo,&n);
    for(int i=0;i<n; i++)
    {

        printf("%d  ", vetorprimo[i]);
    }









return 0;
}
