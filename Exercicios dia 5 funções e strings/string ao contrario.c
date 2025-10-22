//Faça um programa para imprimir uma string ao contrário.

#include <stdio.h>

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o '\n' do final (caso exista)
    int tamanho = strlen(texto);
    if (texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
        tamanho--;
    }

    printf("String invertida: ");
    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }

    printf("\n");
    return 0;
}



