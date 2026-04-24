#include <stdio.h>

int main() {
    int V1[15], V2[15];
    int i, contador = 0;

    printf("Digite os 15 valores do vetor V1: ");
    for(i = 0; i < 15; i++) {
        scanf("%d", &V1[i]);
    }

    printf("Digite os 15 valores do vetor V2: ");
    for(i = 0; i < 15; i++) {
        scanf("%d", &V2[i]);
    }

    for(i = 0; i < 15; i++) {
        if(V1[i] == V2[i]) {
            contador++;
        }
    }

    printf("Quantidade de posições iguais: %d\n", contador);
}
