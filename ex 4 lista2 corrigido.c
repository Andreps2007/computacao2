#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 10
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
void mostravetor( int vetor1[], int vetor2[])
{
    for(int i=0; i<tam; i++)
    {
        printf("%d  ", vetor1[i]);

    }
printf("\n");
    for(int i=0; i<tam; i++)
    {
        printf("%d  ", vetor2[i]);

    }

printf("\n");

}

void multiplicavetor(int vetor1[], int vetor2[],int vetorres[])
{

    for(int i=0; i<tam; i++)
    {
        vetorres[i]=vetor1[i]*vetor2[i];
    }


}
int main()
{
    int vetor1[tam], vetor2[tam],vetorres[tam];
preenchevetor(vetor1, vetor2);
mostravetor(vetor1, vetor2);
multiplicavetor(vetor1,vetor2,vetorres);

for(int i=0;i<tam;i++){

printf("%d  ", vetorres[i]);

}




    return 0;
}
