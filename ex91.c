#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define M 30 //constante

int main(){
    int vet[M];

    srand(time(NULL));
    for(int i=0; i<M; i++){
        vet[i] = rand()%100;
        printf("%d   ", vet[i]);
    }

    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){
            if(vet[i]==vet[j] && i != j){
                printf("%d repete na posição %d \n", vet[i], j);
            }
        }
    }

}