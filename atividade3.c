#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1,num2,media;

    // Solicita os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Calcula a média
    media = (num1 + num2) / 2;

    // Exibe a média
    printf("A média dos números %.2f e %.2f é %.2f\n", num1, num2, media);
    return (0);
}