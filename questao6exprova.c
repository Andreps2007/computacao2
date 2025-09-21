#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>

float vista( float valor)
{
    
    
float vistaa =0;
vistaa =0.9*valor;
return vistaa;
}

float duas(float valor){
float duass=0;
duass= valor;
return duass;
}
float parcelado(float valor){
    
  float res =0;
  int parcela;
  
  
  printf("Em quantas vezes gostaria de parcelar:  ");
  scanf("%d",&parcela);
  res=valor*pow(1+0.03,3);
    return res;
}
int main(){
    float valor, res1,res2,res3;
    int i =0;
    printf("digite o valor da compra:  ");
    scanf("%f",&valor);
    printf("qual será a forma de pagamento: 1- a vista com 10 porcento de desconto, 2- em duas vezes com preço total, 3- parcelado de 3 a 10 vezes com 3 porcento de juros ao mes  ");
    scanf("%d",&i);
    
    printf("\n");
    
    if(i==1){
     res1 = vista(valor) ; 
    printf("o valor a ser pago é %f", res1);
    }
    else if(i==2){
        res2= duas(valor);
       printf("o valor a ser pago é %f", res2); 
    
    }
    else if(i==3){
         res3= parcelado(valor);
       printf("o valor a ser pago é %f", res3);
        
    }
    else{
        printf("erro");
    }
    
    
    
    
    return 0;
}
