#include <stdio.h>

/*
 * Função recursiva para o movimento da Torre:
 * Move-se 5 casas para a direita, imprimindo "Direita" a cada passo.
 */
void moverTorre(int passosRestantes) {
    if (passosRestantes <= 0) {
        return; // Caso base: parou o movimento
    }
    printf("Direita\n");
    moverTorre(passosRestantes - 1); // Chamada recursiva diminuindo os passos
}

/*
 * Função recursiva para o movimento da Rainha:
 * Move-se 8 casas para a esquerda, imprimindo "Esquerda" a cada passo.
 */
void moverRainha(int passosRestantes) {
    if (passosRestantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(passosRestantes - 1);
}

/*
 * Função recursiva para o movimento do Bispo:
 * Move-se 5 casas na diagonal para cima e direita.
 * Implementa loops aninhados: o loop externo (recursão vertical)
 * e o interno (loop for horizontal) para simular a diagonal.
 */
void moverBispo(int verticalRestante, int diagonalTotal) {
    if (verticalRestante <= 0) {
        return; // Caso base da recursão vertical
    }
    
    // Loop interno para o movimento horizontal na diagonal
    for (int i = 0; i < diagonalTotal; i++) {
        printf("Cima, Direita\n");
    }
    
    // Chamada recursiva diminuindo a parte vertical
    moverBispo(verticalRestante - 1, diagonalTotal);
}

/*
 * Função para o movimento do Cavalo:
 * Movimenta em "L": 2 casas para cima e 1 para a direita
 * Usando loops aninhados com múltiplas variáveis e controle com continue e break.
 */
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    int i = 0, j = 0;
    
    // Loop externo controla o movimento vertical (2 casas para cima)
    while (i < movimentosVerticais) {
        printf("Cima\n");
        i++;

        // Loop interno controla o movimento horizontal (1 casa para direita)
        j = 0;
        while (j < movimentosHorizontais) {
            // Condição para demonstrar o uso de continue: ignorar quando j == 1 (não ocorre aqui mas ilustrativo)
            if (j == 1) {
                j++;
                continue;
            }
            printf("Direita\n");
            j++;
            break; // sai após 1 passo para a direita, simulando "L"
        }
    }
}

int main() {
    const int passosTorre = 5;
    const int passosBispo = 1; // Usado para controlar o loop externo na recursão
    const int passosRainha = 8;

    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(passosTorre);

    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    // Passamos 5 no diagonalTotal para loop interno e 1 na vertical para a recursão vertical simples
    moverBispo(passosBispo, passosBispo == 1 ? 5 : passosBispo); 
    
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(passosRainha);

    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita em 'L'):\n");
    moverCavalo();

    return 0;
}
