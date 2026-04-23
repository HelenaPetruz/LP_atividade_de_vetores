#include <stdio.h>

int main(){
    int A[10], X, M[10];

    for(int i=0; i<10; i++){
        printf("Digite um valor para o vetor A: ");
        scanf("%d", &A[i]);
    }

    printf("Digite um valor para X: ");
    scanf("%d", &X);

    printf("Vetor M: \n");
    for(int i=0; i<10; i++){
        M[i] = A[i]*X;
        printf("%d\t", M[i]);
    }
}