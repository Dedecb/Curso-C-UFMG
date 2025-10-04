//Troque o valor de duas variáveis.

#include <stdio.h>

int main() {
    int a, b, aux;
    printf("Digite dois numeros inteiros para trocar:");
    scanf("%d %d", &a, &b);
    aux = a;
    a = b;
    b = aux;
    printf("Agora o primeiro numero e: %d\n", a);
    printf("Agora o segundo numero e: %d\n", b);
    return 0;
}