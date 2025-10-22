//Faça um programa que verifique se a string S2 é uma substring de S1. Caso
//seja, imprima “Eh substring”, caso contrário imprima “Nao eh substring”. Seu
//programa deve capturar a diferença entre caracteres maiusculos e
//minúsculos

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i, j, encontrado = 0;

    printf("Digite a string S1: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Digite a string S2: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove o '\n' do final das strings (se existir)
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == '\n') s1[i] = '\0';
    }
    for (i = 0; s2[i] != '\0'; i++) {
        if (s2[i] == '\n') s2[i] = '\0';
    }

    // Verifica se S2 está contida em S1
    for (i = 0; s1[i] != '\0'; i++) {
        j = 0;
        while (s1[i + j] != '\0' && s2[j] != '\0' && s1[i + j] == s2[j]) {
            j++;
        }

        // Se percorreu toda S2, é substring
        if (s2[j] == '\0') {
            encontrado = 1;
            break;
        }
    }

    if (encontrado)
        printf("Eh substring\n");
    else
        printf("Nao eh substring\n");

    return 0;
}
