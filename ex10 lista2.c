#include <stdlib.h>
#include <time.h>

#define tam 10

int main() {
    int matriz[tam][tam];
    int soma = 0;
    float media;

    srand(time(NULL));

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matriz[i][j] = rand() % 100;
        }
    }


    printf("matriz:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < tam; i++) {
        soma = soma+ matriz[i][i];
    }


    media = soma / tam;

    printf(" a media dos elementos da diagonal principal: %.2f\n", media);

    return 0;
}
