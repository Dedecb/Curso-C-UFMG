//Faça um programa para imprimir o número de letras que contém a string
//dada como entrada.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[100];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    // Percorre a string e conta apenas as letras
    for (int i = 0; texto[i] != '\0'; i++) {
        if (isalpha(texto[i])) { // Verifica se o caractere é uma letra
            contador++;
        }
    }

    printf("A string contem %d letras.\n", contador);
    return 0;
}
