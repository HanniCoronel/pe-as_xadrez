#include <stdio.h>

//Area de estudo utilizando Funções Recursivas

// Função recursiva para mover a Torre (Direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para mover o Bispo (Cima Direita)
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }
}

// Função recursiva para mover a Rainha (Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Movimento do Cavalo com loops aninhados, múltiplas variáveis, break e continue
void moverCavalo() {
    int passos = 0;
    printf("Movimento do Cavalo:\n");

    // Loop externo controla os passos verticais
    for (int i = 0; i < 3; i++) {
        // Loop interno simula checagens ou movimentações extras
        for (int j = 0; j < 1; j++) {
            if (i < 2) {
                printf("Cima\n");
                passos++;
                continue; // continua o loop externo para o segundo passo "Cima"
            }

            if (i == 2) {
                printf("Direita\n");
                passos++;
                break; // termina o loop interno após o movimento final
            }
        }

        if (passos >= 3) {
            break; // se já fizemos os 3 movimentos (2 cima + 1 direita), paramos
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\n");
    moverCavalo();

    return 0;
}



/*
Area de estudo utilizando FOR | WHILE | DO WHILE

int main() {
printf("Movimentos de Peças de Xadrez\n");

    // Movimento da Torre (5 casas para a Direita) usando FOR
    int casaTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casaTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na Diagonal: Cima + Direita) usando WHILE
    int casaBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casaBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha (8 casas para a Esquerda) usando DO-WHILE
    int casaRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casaRainha);

    //Movimento do Cavalo (2 casas para Cima e 1 para Direita) usando LoopFOR
    int movimentoCavalo = 1;
    printf("\nMovimento do Cavalo:\n");

    while (movimentoCavalo--){

        for(int i = 0; i < 2; i++){ //vai imprimir 2 vezes "Cima"
            printf("Cima\n");
        }

        printf("Direita\n"); //imprime 1 vez "Direita"
    }

    
    

    return 0;
}
*/