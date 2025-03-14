#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int NS, tentativa, tentativas = 0;

    // Inicializando o gerador de números aleatórios
    srand(time(NULL));

    // Gerando um número aleatório entre 1 e 100
    NS = rand() % 10 + 1;

    printf("Adivinha ai campeão\n");
    printf("Tenta adivinhar o numero que estou pensando se tu e bao mesmo\n");

    // Loop até o usuário acertar
    do {
        scanf("%d", &tentativa);
        tentativas++;

        if (tentativa == NS) {
            printf("Uau! Eu te subestimei, parabe4ns\n");
        } else {
            printf("Errou panaca! Essa foi sua %d° tentativa, tente de novo\n", tentativas);
        }
    } while (tentativa != NS);

    return 0;
}
