#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int idade, ano_nascimento, ano_atual;
    
    // Obtém o ano atual
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    ano_atual = local->tm_year + 1900;

    // Solicita a idade ao usuário
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Calcula o ano de nascimento
    ano_nascimento = ano_atual - idade;

    // Exibe o ano de nascimento
    printf("Você nasceu em %d\n", ano_nascimento);

    return 0;
}
