//Escreva um programa calcule a média de vários valores de ponto flutuante.
//Primeiro, seu programa deve ler um inteiro n correspondente à quantidade de
//valores que o usuário vai digitar. Depois, ele lerá n números de ponto
//flutuante e imprimirá a média. Apresente a resposta com 2 casas decimais.

#include <stdio.h>

int main() {
    int n, i;
    float numero, soma = 0.0, media;

    printf("Digite a quantidade de numeros que voce vai inserir: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / n;
    printf("A media e: %.2f\n", media);

    return 0;
}