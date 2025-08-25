#include<stdio.h>
int main()
{
    int direita, esquerda,quadrado;
    int num;
    for(int i=0; i<=9999; i++)
    {
quadrado =i*i;
        if(i<=10)
        {
            esquerda=quadrado;
            direita=0;
        }
        else if(i<100 && i>10)
        {
            esquerda=quadrado/100;
            direita=quadrado&100;
        }


        else if(quadrado<1000 && quadrado>100)
        {
            esquerda=quadrado/1000;
            direita=quadrado%1000;
        }
        else if(i<10000 && i>=1000)
        {
            esquerda =quadrado/10000;
            direita=quadrado%10000;

        }
        num=direita+esquerda;
                            if(quadrado==num*num)
        {

            printf("o numero %d se encaixa  ", quadrado);
        }



    }

    return 0;

}
