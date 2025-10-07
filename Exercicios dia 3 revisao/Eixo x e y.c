//Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
//no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas
//decimais após a vírgula, segundo a fórmula:
//Distância = (𝑥2 − 𝑥1)
//2
//+ (𝑦2 − 𝑦1)
//2
//A entrada contém duas linhas de dados. A primeira linha contém dois valores de
//ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2
//y2. Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4
//casas após o ponto decimal.
//Dica: use a função sqrt() da biblioteca math.h

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do ponto 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do ponto 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distancia entre os pontos: %.4lf\n", distancia);

    return 0;
}