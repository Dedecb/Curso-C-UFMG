//Escreva um programa que lê três números reais (double), A, B e C. Escreva um
//programa que calcule as raízes obtidas ao aplicar esses três valores na Fórmula de
//Bhaskara. As raízes devem ser impressas com 5 casas decimais.
//Caso seja impossível calcular as raízes (ex.: divisão por zero ou delta negativo),
//imprima “Impossivel calcular”.
//Este é o problema 1036 do Beecrowd.

#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double delta, R1, R2;

    printf("Digite os valores de A, B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    delta = B * B - 4 * A * C;

    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}
