#include <stdio.h>

// ------------------- Funções recursivas -------------------

// Torre: move-se horizontalmente para a direita
void moverTorre(int casas) {
    if(casas <= 0) return; // caso base: terminou o movimento
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Bispo: move-se diagonalmente (Cima + Direita) usando loops aninhados
void moverBispo(int casasVerticais, int casasHorizontais) {
    if(casasVerticais <= 0) return; // caso base: terminou o movimento vertical
    for(int h = 1; h <= casasHorizontais; h++) { // loop horizontal
        printf("Cima, Direita\n");
    }
    moverBispo(casasVerticais - 1, casasHorizontais); // chamada recursiva vertical
}

// Rainha: move-se horizontalmente para a esquerda
void moverRainha(int casas) {
    if(casas <= 0) return; // caso base: terminou o movimento
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ------------------- Função principal -------------------
int main() {
    // ------------------- Movimento da Torre -------------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);

    printf("\n");

    // ------------------- Movimento do Bispo -------------------
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1; // cada passo vertical se move uma casa na horizontal
    printf("Movimento do Bispo (5 casas diagonais Cima, Direita):\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    printf("\n");

    // ------------------- Movimento da Rainha -------------------
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);

    printf("\n");

    // ------------------- Movimento do Cavalo -------------------
    // Movimento em "L": 2 casas para cima, 1 para a direita
    int movimentosCavalo = 1; // número de movimentos completos em L
    int passoVertical = 2;
    int passoHorizontal = 1;

    printf("Movimento do Cavalo (2 casas para cima, 1 para a direita):\n");

    for(int m = 0; m < movimentosCavalo; m++) { // loop para cada movimento completo do L
        int i = 1;
        while(i <= passoVertical) { // mover verticalmente
            printf("Cima\n");
            i++;
            if(i > passoVertical) break; // condição extra para demonstrar uso de break
        }

        for(int j = 0; j < passoHorizontal; j++) { // mover horizontalmente
            printf("Direita\n");
            if(j == passoHorizontal - 1) continue; // exemplo de uso de continue
        }
    }

    return 0;
}
