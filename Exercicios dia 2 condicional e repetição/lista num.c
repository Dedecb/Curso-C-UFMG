//Faça um programa que imprima na tela todos os números pares entre 1 e
//100 (inclusive), um número por linha. Esse é o problema 1059 do beecrowd.

#include <stdio.h>

int main() {
    int i;
    for (i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}