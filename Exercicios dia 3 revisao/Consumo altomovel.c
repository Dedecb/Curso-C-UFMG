//Calcule o consumo médio de um automóvel sendo fornecidos a distância total
//percorrida (em Km) e o total de combustível gasto (em litros). A entrada contém dois
//valores: um valor inteiro X representando a distância total percorrida (em Km), e um
//valor real Y representando o total de combustível gasto, com um dígito após o ponto
//decimal. Apresente o valor que representa o consumo médio do automóvel com 3
//casas após a vírgula, seguido da mensagem "km/l".

#include <stdio.h>

int main() {
    int distancia;
    float combustivel, consumoMedio;

    printf("Digite a distancia total percorrida (em Km): ");
    scanf("%d", &distancia);

    printf("Digite o total de combustivel gasto (em litros): ");
    scanf("%f", &combustivel);

    if (combustivel <= 0) {
        printf("O consumo de combustivel deve ser maior que zero.\n");
        return 1;
    }

    consumoMedio = distancia / combustivel;

    printf("%.3f km/l\n", consumoMedio);

    return 0;
}