//Dois carros (X e Y) partem na mesma direção. O carro X sai com velocidade
//constante de 60 Km/h e o carro Y sai com velocidade constante de 90 Km/h.
//Em uma hora (60 minutos) o carro Y consegue distanciar 30 quilômetros do
//carro X, ou seja, consegue se afastar um quilômetro a cada 2 minutos.
//Leia a distância (em Km) e calcule quanto tempo leva (em minutos) para o
//carro Y tomar essa distância do outro carro.

#include <stdio.h>

int main() {
    int distancia, tempo;
    printf("Digite a distancia em Km entre os dois carros:");
    scanf("%d", &distancia);
    tempo = distancia * 2;
    printf("O carro Y levara %d minutos para tomar essa distancia do carro X\n", tempo);
    return 0;
}