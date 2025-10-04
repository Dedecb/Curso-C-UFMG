//Refaça o exercício 2 com a seguinte alteração: seu programa não deve mais
//aceitar a entrada de dois números iguais. Se o usuário fornecer dois números
//equivalentes, seu programa deve solicitar novos números até que o usuário
//digite dois valores distintos. Depois, imprima qual deles é maior.

#include <stdio.h>

int main() {
    int num1, num2;

    // Solicita dois números distintos
    do {
        printf("Digite o primeiro número inteiro: ");
        scanf("%d", &num1);

        printf("Digite o segundo número inteiro (diferente do primeiro): ");
        scanf("%d", &num2);

        if (num1 == num2) {
            printf("Os números não podem ser iguais. Por favor, tente novamente.\n");
        }
    } while (num1 == num2);

    // Compara e imprime o maior número
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else {
        printf("O maior número é: %d\n", num2);
    }

    return 0;
}