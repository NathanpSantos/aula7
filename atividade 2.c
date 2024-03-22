#include <stdio.h>

int main() {
    float lado, area;

    // Solicita o comprimento do lado ao usuário
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

    // Calcula a área do quadrado
    area = lado * lado;

    // Exibe a área do quadrado
    printf("A área do quadrado com lado %.2f é %.2f\n", lado, area);

    return 0;
}
