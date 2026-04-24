#include <stdio.h>

int main() {
    float temp[365];
    float soma = 0, media;
    float menor, maior;
    int contador = 0;

    for(int i = 0; i < 365; i++) {
        printf("Digite a temperatura do dia %d: ", i+1);
        scanf("%f", &temp[i]);

        soma += temp[i];
        if(i == 0) {
            menor = temp[i];
            maior = temp[i];
        } else {
            if(temp[i] < menor) {
                menor = temp[i];
            }
            if(temp[i] > maior) {
                maior = temp[i];
            }
        }
    }

    media = soma / 365;

    for(int i = 0; i < 365; i++) {
        if(temp[i] < media) {
            contador++;
        }
    }

    printf("\nMenor temperatura: %.2f\n", menor);
    printf("Maior temperatura: %.2f\n", maior);
    printf("Media anual: %.2f\n", media);
    printf("Dias abaixo da media: %d\n", contador);

    return 0;
}
