#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Torre move-se horizontalmente para a direita
    }
    printf("\n");
 
    // Movimento do Bispo: 5 casas na diagonal para cima e à direita (usando while)
    printf("Movimento do Bispo:\n");
    int bispo = 1;
    while (bispo <= 5) {
        printf("Cima, Direita\n"); // Bispo move-se na diagonal
        bispo++;
    }
    printf("\n");

    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    printf("Movimento da Rainha:\n");
    int rainha = 1;
    do {
        printf("Esquerda\n"); // Rainha move-se horizontalmente para a esquerda
        rainha++;
    } while (rainha <= 8);

    return 0;
}
