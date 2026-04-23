#include<stdio.h>

int main(){
    int vet[20];

    for(int i=0; i<20; i++){
        printf("Digite um número: ");
        scanf("%d", &vet[i]);
    }

    for(int i=19; i>-1; i--){
        printf("%d\t", vet[i]);
    }
}