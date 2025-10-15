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

    int j = 1;
    printf("\n\n***CAVALO***\n");
    for (i = 1; i <= 1; i++)
    {
        while (j <= 2)
        {
            printf("Baixo\n");
            ++j;
        }
    
        printf("Esquerda\n");    
    }
    
    return 0;
}