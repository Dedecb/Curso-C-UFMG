//Faça um programa que compare duas strings. Você deve retornar “Igual” caso as duas strings sejam iguais 
//e “Diferente” em caso contrário. Nesse exercício, seu código NÃO DEVE diferenciar letras maiusculas de 
//minusculas.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, iguais = 1; // 1 = verdadeiro (assume que são iguais)

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);

    // Compara caractere por caractere
    while (str1[i] != '\0' && str2[i] != '\0') {
        char c1 = str1[i];
        char c2 = str2[i];

        // Ignora o \n que o fgets adiciona
        if (c1 == '\n') c1 = '\0';
        if (c2 == '\n') c2 = '\0';

        // Converte ambos para minúsculo (usando ASCII)
        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;

        // Se forem diferentes, marca e sai
        if (c1 != c2) {
            iguais = 0;
            break;
        }

        i++;
    }

    // Se ambos terminarem no mesmo ponto, são iguais
    if (iguais && str1[i] == str2[i])
        printf("Igual\n");
    else
        printf("Diferente\n");

    return 0;
}
