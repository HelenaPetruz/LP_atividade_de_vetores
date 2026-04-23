#include <stdio.h>
#define M 20

int main(){
    float notas[M];
    float soma = 0;
    int cont = 0;

    for(int i=0; i<M; i++){
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    for(int i=0; i<M; i++){
        if(notas[i] > soma/M){
            cont++;
        }
    }

    printf("Media da turma: %.2f \n", soma/M);
    printf("Quantidade de alunos acima da média: %d", cont);
}