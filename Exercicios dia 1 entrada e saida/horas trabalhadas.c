//Escreva um programa que leia o número de um funcionário, seu número de
//horas trabalhadas, o valor que recebe por hora e calcule o salário desse
//funcionário. A seguir, mostre o número e o salário do funcionário, com duas
//casas decimais.

#include <stdio.h>

int main() {
    int numeroFuncionario, horasTrabalhadas;
    float valorHora, salario;
    printf("Digite o numero do funcionario, horas trabalhadas e valor por hora:");
    scanf("%d %d %f", &numeroFuncionario, &horasTrabalhadas, &valorHora);
    salario = horasTrabalhadas * valorHora;
    printf("NUMBER = %d\n", numeroFuncionario);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}