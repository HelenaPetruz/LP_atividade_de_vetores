#include<stdio.h>

int main(){
    int Q[20], maior, posicao;

    for(int i=0; i<20; i++){
        do{
            printf("Digite um número positivo: ");
            scanf("%d", &Q[i]);
        } while(Q[i]<0);
    }

    maior=Q[0];
    posicao=0;
    for(int i=0; i<20; i++){
        if(maior < Q[i]){
            maior=Q[i];
            posicao=i;
        }
    }

    printf("O maior valor é %d e está localizado na posição %d", maior, posicao);
}