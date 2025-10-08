//Escreva um programa que imprime todos os termos da série até o valor n, além dos valores
//x0 e x1. A série é representada pela expressão:
//𝑋
//𝑛 = 4 * 𝑋
//𝑛−1 − 2 * 𝑋
//𝑛−2
//O programa deve imprimir o valor de cada termo (incluindo x0 e x1) até o enésimo termo
//(até o termo n).
//Detalhes: Seu programa irá receber como entrada 3 números, sendo o primeiro o valor de
//n, o segundo o valor de x0 e o terceiro o valor de x1 (n=4,x0=3,x1=4 no exemplo abaixo).
//Após imprimir os valores de x0 e x1, sua implementação deve calcular os próximos valores
//até a iteração definida pelo valor de n (no caso do nosso exemplo até a iteração x4 já que
//n=4). Você deve usar apenas UM FOR para resolver o problema.

#include <stdio.h>

int main() {
    int n, x0, x1, xn;

    printf("Digite o valor de n, x0 e x1: ");
    scanf("%d %d %d", &n, &x0, &x1);

    printf("X0 = %d\n", x0);
    printf("X1 = %d\n", x1);

    for (int i = 2; i <= n; i++) {
        xn = 4 * x1 - 2 * x0;
        printf("X%d = %d\n", i, xn);
        x0 = x1; // Atualiza x0 para o próximo cálculo
        x1 = xn; // Atualiza x1 para o próximo cálculo
    }

    return 0;
}