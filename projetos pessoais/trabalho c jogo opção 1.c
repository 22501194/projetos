#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_aleatorio, palpite, tentativas = 0;

    srand(time(NULL));
    numero_aleatorio = rand() % 100 + 1;

    printf("Jogo da Adivinhacao\n");

    while (1) {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite > numero_aleatorio)
            printf("Muito alto!\n");
        else if (palpite < numero_aleatorio)
            printf("Muito baixo!\n");
        else {
            printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
            break;
        }
    }

    return 0;
}
