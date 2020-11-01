#include <stdio.h>
#include <conio.h>


#define salario 30.00
#define juros 0.08
/* Função principal */
int main() {
    /* Declaração de variáveis */
    int dias;
    float jurosTotal, salarioLiquido;
    printf("Numero de dias trabalhados: ");
    scanf("%i", &dias);

    jurosTotal = (salario*juros);
    salarioLiquido = (dias*salario)-jurosTotal;

    printf("O salario eh de R$%.2f", salarioLiquido);

    getch();
    return 0;
}
