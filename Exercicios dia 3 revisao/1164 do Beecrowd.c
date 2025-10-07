//Na matemática, um número perfeito é um número inteiro para o qual a soma de
//todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio
//número. Por exemplo, o número 6 é perfeito, pois 1+2+3 é igual a 6. Escreva um
//programa que imprima se um determinado número é perfeito ou não.
//O seu programa deve, primeiro, ler um inteiro N. Em seguida, o programa deve ler N
//números inteiros e, para cada um, determinar se o número é perfeito ou não. Se o
//número lido X for perfeito, o programa deve imprimir “X eh perfeito”. Caso contrário,
//deve imprimir “X nao eh perfeito”.
//Este é o problema 1164 do Beecrowd.

#include <stdio.h>

int main() {
    int N, numero, somaDivisores;

    printf("Digite a quantidade de numeros a serem verificados: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        somaDivisores = 0;
        for (int j = 1; j <= numero / 2; j++) {
            if (numero % j == 0) {
                somaDivisores += j;
            }
        }

        if (somaDivisores == numero) {
            printf("%d eh perfeito\n", numero);
        } else {
            printf("%d nao eh perfeito\n", numero);
        }
    }

    return 0;
}