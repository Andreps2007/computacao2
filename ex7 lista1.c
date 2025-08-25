#include<stdio.h>

float conversao(float celsius)
{
    float farenheit;
    (farenheit)=((celsius*9)/5) +32;
    return farenheit;
}

float conversao2(float farenheit)
{
    float celsius;
    (celsius)=((farenheit -32)/1.8);
    return celsius;
}


int main()
{
    float c,f;
    printf("digite um valor em graus celsius: ");
    scanf("%f",&c);
    printf("digite um valor em graus farenheit: ");
    scanf("%f",&f);
    char letra;
    printf("digite C para converter celsius em farenheit e F para o inverso:  ");
    scanf(" %c",&letra);
    float resultado1 =conversao2(f);
    float resultado2 =conversao(c);
    if(letra == 'C')
    {

        printf("a conversao foi %f:  ",resultado2 );

    }
    else if(letra == 'F')
    {

        printf("a conversao foi %f:  ",resultado1 );

    }






    return 0;
}
