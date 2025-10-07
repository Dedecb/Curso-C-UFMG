// A Federação Gaúcha de Futebol contratou você para escrever um programa para
//fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para
//ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL, nesta
//ordem. Após ler o número de gols da primeira partida, o seu programa deve imprimir
//a mensagem "Novo grenal (1-sim 2-nao)". Se a resposta for 1, o algoritmo deve ser
//executado novamente solicitando o número de gols marcados pelos times em uma
//nova partida, caso contrário deve ser encerrado imprimindo:
//● Quantos GRENAIS fizeram parte da estatística.
//● O número de vitórias do Inter.
//● O número de vitórias do Grêmio.
//● O número de Empates.
//● Uma mensagem indicando qual o time que venceu o maior número de
//GRENAIS (ou "Nao houve vencedor", caso termine empatado).
//Este é o problema 1131 do Beecrowd.

#include <stdio.h>

int main() {
    int golsInter, golsGremio;
    int vitoriasInter = 0, vitoriasGremio = 0, empates = 0, totalGrenais = 0;
    int novoGrenal;

    do {
        printf("Digite os gols do Inter e do Gremio: ");
        scanf("%d %d", &golsInter, &golsGremio);

        if (golsInter > golsGremio) {
            vitoriasInter++;
        } else if (golsGremio > golsInter) {
            vitoriasGremio++;
        } else {
            empates++;
        }

        totalGrenais++;

        printf("Novo grenal (1-sim 2-nao): ");
        scanf("%d", &novoGrenal);
    } while (novoGrenal == 1);

    printf("%d grenais\n", totalGrenais);
    printf("Inter:%d\n", vitoriasInter);
    printf("Gremio:%d\n", vitoriasGremio);
    printf("Empates:%d\n", empates);

    if (vitoriasInter > vitoriasGremio) {
        printf("Inter venceu mais\n");
    } else if (vitoriasGremio > vitoriasInter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}