#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostranum(int numeros[], int tam){
  for(int i =0;i<tam;i++)  {
      
      printf("%d\n  ", numeros[i]);
  }
    
}
float media(int numeros[], int tam){
    float soma =0;
    for(int i=0; i<tam;i++){
        soma= soma +numeros[i];
    }
    float media= soma/tam;
    return media;
}
int maior(int numeros[], int tam){
    int maiorr=numeros[0];
    for(int i=0; i<tam;i++){
        
        if(maiorr<numeros[i]){
            maiorr=numeros[i];
        }
    }
    return maiorr;
}
int menor(int numeros[],int tam){
    int menorr =numeros[0];
    for(int i=0; i<tam;i++){
        
        if(menorr>numeros[i]){
            menorr=numeros[i];
        }
    }
    return menorr;
}



int main()
{
    int tam, menorr,maiorr;
    float med;
printf("Digite quantas numeros quer: ");
scanf("%d",&tam);
int numeros[tam];
for(int i=0; i<tam;i++){
    
    printf("Digite o numero %d : ", i+1);
scanf("%d",&numeros[i]);
}

char opcao;
while(1){

printf("Digite a opção desejada:\n 1 – para mostrar os números digitados na tela;\n 2 – para tirar a média dos números;\n 3 – para determinar o máximo;\n 4 – para determinar o mínimo;\n ‘X’ ou ‘x’ – para sair\n");
scanf(" %c",&opcao);
if(opcao=='1'){
    mostranum(numeros, tam);
    
}
else if(opcao=='2'){
    
   med = media(numeros, tam);
   printf("%f\n", med);
}
    else if(opcao=='3'){
        maiorr= maior(numeros, tam);
        printf("%d\n", maiorr);
    }
    else if(opcao=='4'){
        menorr= menor(numeros, tam);
        printf("%d\n", menorr);
    }
    else if(opcao=='X'|| opcao =='x'){
        printf("acabou");
        break;
    }


}
    return 0;
}
