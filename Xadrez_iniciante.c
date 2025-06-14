#include <stdio.h>

/*
 * Simulação de movimento de peças de xadrez usando estruturas de repetição.
 * Cada peça usa uma estrutura diferente:
 *   - Torre: for (movimento horizontal para a direita)
 *   - Bispo: while (movimento diagonal para cima e direita)
 *   - Rainha: do-while (movimento horizontal para a esquerda)
 */

int main() {
    // Quantidade de casas que cada peça deve se movimentar
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Movimentação da Torre: 5 casas para a direita usando "for"
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo: 5 casas na diagonal para cima e direita usando "while"
    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int passosBispo = 0;
    while (passosBispo < casasBispo) {
        printf("Cima, Direita\n");
        passosBispo++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda usando "do-while"
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int passosRainha = 0;
    do {
        printf("Esquerda\n");
        passosRainha++;
    } while (passosRainha < casasRainha);

    return 0;
}
