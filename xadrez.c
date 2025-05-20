#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para mover a Torre para a direita
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para mover o Bispo na diagonal (Cima Direita)
// Inclui também loops aninhados internos para simular movimentos verticais e horizontais
void moverBispo(int movimentos) {
    if (movimentos <= 0) return;

    // Loop externo (vertical)
    for (int i = 0; i < 1; i++) {
        // Loop interno (horizontal)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(movimentos - 1);
}

// Movimento complexo do Cavalo: 2 casas para cima, 1 casa para a direita (em "L")
// Utiliza loops aninhados com múltiplas variáveis e controle com continue e break
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    // Simula um único movimento em "L"
    for (int i = 0; i < 2; i++) { // Duas casas para cima
        if (i == 1) {
            // Quando estiver na segunda casa, usar continue para mostrar lógica de controle
            continue;
        }
        printf("Cima\n");
    }

    for (int j = 0; j < 2; j++) { // Tentativa de 2 movimentos, mas quebra após o primeiro
        if (j == 1) break; // Simula apenas uma casa à direita
        printf("Direita\n");
    }
}

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ------------------------
    // Movimento da TORRE (Recursivo)
    // ------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // ------------------------
    // Movimento do BISPO (Recursivo + Loops aninhados)
    // ------------------------
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    // ------------------------
    // Movimento da RAINHA (Recursivo)
    // ------------------------
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // ------------------------
    // Movimento do CAVALO (Loops aninhados + controle de fluxo)
    // ------------------------
    printf("\n");
    moverCavalo();

    return 0;
}
