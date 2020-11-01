#include <stdio.h>
#include <conio.h>

/* Função principal */
int main() {
    /* Declaração de variáveis */
    float real, cotacao, dolar;
    printf("Insira o valor em real: R$");
    scanf("%f", &real);
    printf("Insira o valor da cotacao do dolar: $");
    scanf("%f", &cotacao);

    dolar = real*cotacao;

    printf("Quantia em dolares $%.2f\n\n", dolar);

    getch();
    return 0;
}
