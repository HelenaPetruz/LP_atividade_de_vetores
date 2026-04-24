#include <stdio.h>

int main() {
    int V[30];
    int numero, contador = 0;

    printf("Digite 30 numeros:\n");
    for(int i = 0; i < 30; i++) {
        scanf("%d", &V[i]);
    }

    printf("Digite o numero que deseja procurar:\n");
    scanf("%d", &numero);

    for(int i = 0; i < 30; i++) {
        if(V[i] == numero) {
            contador++;
        }
    }

    printf("O numero %d aparece %d vezes no vetor.\n", numero, contador);
}
