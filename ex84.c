#include<stdio.h>
#define M 100

int main(){
    int a[M], b[M], soma[M];
    int n;

    printf("Digite o valor de n, entre 1 e 100: ");
    scanf("%d", &n);
    while(n<1 || n>100){
        printf("Digite o valor de n, entre 1 e 100: ");
        scanf("%d", &n);
    }

    for(int i=0; i<n; i++){
        printf("Digite um valor para o vetor a: ");
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        printf("Digite um valor para o vetor b: ");
        scanf("%d", &b[i]);
    }

    printf("Soma dos vetores: ");
    for(int i=0; i<n; i++){
        soma[i]=a[i]+b[i];
        printf("%d  ", soma[i]);
    }
}