//Faça um programa que ao receber uma string como entrada retorne a
//quantidade de vogais que essa string possui.

#include <stdio.h>

int main() {
    char texto[100];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = texto[i];

        // Converte letras maiúsculas em minúsculas (usando ASCII)
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }

        // Verifica se é vogal
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("A string contem %d vogais.\n", contador);

    return 0;
}
