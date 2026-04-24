#include <stdio.h>
#include <stdbool.h>

int main() {
    int vet[20], busca, novo[19];
    bool existe = false;
    int j = 0;

    for(int i = 0; i < 20; i++) {
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }

    printf("Digite um numero a ser buscado: ");
    scanf("%d", &busca);

    for(int i = 0; i < 20; i++) {
        if(vet[i] == busca) {
            existe = true;
        }
    }

    if(existe == true) {
        for(int i = 0; i < 20; i++) {
            if(vet[i] != busca) {
                novo[j] = vet[i];
                j++;
            }
        }

        printf("Vetor novo:\n");
        for(int i = 0; i < j; i++) {
            printf("%d\t", novo[i]);
        }
    } else {
        printf("O numero nao existe no vetor.\n");
    }

}
