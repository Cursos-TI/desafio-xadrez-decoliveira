#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispo(int movimento, int atual) {
    if (atual > movimento) return;
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }
    moverBispo(movimento, atual + 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
    printf("***CAVALO***\n");
    int movVertical = 2;
    int movHorizontal = 1;
    for (int i = 1; i <= movVertical; i++) {
        for (int j = 1; j <= movHorizontal + 1; j++) {
            if (i < movVertical) {
                printf("Cima\n");
                continue;
            }
            if (j == movHorizontal) {
                printf("Direita\n");
                break;
            }
        }
    }
}

int main() {
    printf("***TORRE***\n");
    moverTorre(5);

    printf("\n\n***BISPO***\n");
    moverBispo(5, 1);

    printf("\n\n***RAINHA***\n");
    moverRainha(8);

    printf("\n\n");
    moverCavalo();

    return 0;
}
