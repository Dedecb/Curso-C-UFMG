//Escreva um programa que leia um valor inteiro N da entrada. Ele deve então
//imprimir N*2 linhas que devem seguir a seguinte lógica:
//ENTRADA:
//5 
//SAÍDA:
//1 1 1
//1 2 2
//2 4 8
//2 5 9
//3 9 27

#include <stdio.h>

int main() {
    int N;

    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 2; j++) {
            int valor = i + (j - 1);
            int quadrado = valor * valor;
            int cubo = valor * valor * valor;
            printf("%d %d %d\n", valor, quadrado, cubo);
        }
    }

    return 0;
}