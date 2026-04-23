#include<stdio.h>

int main(){
    int Q[20], menor, posicao;

    for(int i=0; i<20; i++){
        do{
            printf("Digite um número positivo: ");
            scanf("%d", &Q[i]);
        } while(Q[i]<0);
    }

    menor=Q[0];
    posicao=0;
    for(int i=0; i<20; i++){
        if(menor > Q[i]){
            menor=Q[i];
            posicao=i;
        }
    }

    printf("O menor valor é %d e está localizado na posição %d", menor, posicao);
}