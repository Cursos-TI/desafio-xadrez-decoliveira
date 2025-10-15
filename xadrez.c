#include <stdio.h>

int main() {
    int i = 0;

    printf("***TORRE***\n");
    while (i < 5) {
        printf("Direita\n");
        i++;
    }

    i = 0;
    printf("\n\n***BISPO***\n");
    do
    {
        printf("Cima, Direita\n");
        i++;
    } while (i < 5);
    

    printf("\n\n***RAINHA***\n");
    for (i = 0; i < 8; i++)
    {
        printf("Esquerda\n");
    }
    
    return 0;
}