#include<stdio.h>
#include<stdbool.h>
//ARRUMAAAAAAR
int main(){
    int vet[20], busca, novo[19];
    bool existe = false;

    for(int i=0; i<20; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }
    
    printf("Digite um numero a ser buscado:");
    scanf("%d", &busca);

    for(int i=0; i<20; i++){
        if(vet[i]==busca){
            existe = true;
        }
    }

    if(existe==true){
        for(int i=0; i<20; i++){
            if(vet[i] != busca){
                novo[i]=vet[i];
            }
        }
    }

    printf("Vetor novo: ");
    for(int i=0; i<20; i++){
        printf("%d\t", &novo[i]);
    }
    
}