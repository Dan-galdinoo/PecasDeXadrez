#include <stdio.h>

/*
 * Simulação de movimento de peças de xadrez usando estruturas de repetição.
 * Cada peça usa uma estrutura diferente:
 *   - Torre: for (movimento horizontal para a direita)
 *   - Bispo: while (movimento diagonal para cima e direita)
 *   - Rainha: do-while (movimento horizontal para a esquerda)
 *   - Cavalo: loops aninhados (for + while) para movimento em "L"
 */

int main() {
    // Quantidade de casas que cada peça deve se movimentar
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int passosBispo = 0;
    while (passosBispo < casasBispo) {
        printf("Cima, Direita\n");
        passosBispo++;
    }

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int passosRainha = 0;
    do {
        printf("Esquerda\n");
        passosRainha++;
    } while (passosRainha < casasRainha);

    // Movimento do Cavalo com loops aninhados
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 casa para esquerda):\n");

    const int movimentosVerticais = 2;
    const int movimentosHorizontais = 1;

    // Loop externo (for): controla as duas casas para baixo
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Baixo\n");

        // Loop interno (while): para o movimento horizontal após o movimento vertical completo
        // Aqui, para efeito didático, vamos executar o movimento horizontal somente após o último movimento vertical
        if (i == movimentosVerticais - 1) {
            int movimentosFeitos = 0;
            while (movimentosFeitos < movimentosHorizontais) {
                printf("Esquerda\n");
                movimentosFeitos++;
            }
        }
    }

    return 0;
}
