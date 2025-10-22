//Faça um programa que recebe três dados como entrada. Seu programa
//deverá substituir TODAS as ocorrências de C1 para C2. Imprima a nova
//string.
//String - palavra original
//C1 - caractere que será removido da palavra original
//C2 - caractere que será substituirá C1

#include <stdio.h>

int main() {
    char texto[100];
    char c1, c2;

    printf("Digite a string: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Digite o caractere que sera substituido (C1): ");
    scanf(" %c", &c1);

    printf("Digite o caractere substituto (C2): ");
    scanf(" %c", &c2);

    // Percorre a string e substitui todas as ocorrências de C1 por C2
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == c1) {
            texto[i] = c2;
        }
    }

    printf("Nova string: %s", texto);

    return 0;
}
