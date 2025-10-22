//Faça um programa que converta todos os caracteres em maiusculo. Você
//pode usar a tabela ASCII para isso.

#include <stdio.h>

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    // Percorre cada caractere da string
    for (int i = 0; texto[i] != '\0'; i++) {
        // Se o caractere for uma letra minúscula (a-z)
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            // Converte para maiúsculo subtraindo 32 (diferença na tabela ASCII)
            texto[i] = texto[i] - 32;
        }
    }

    printf("String em maiusculo: %s", texto);

    return 0;
}
