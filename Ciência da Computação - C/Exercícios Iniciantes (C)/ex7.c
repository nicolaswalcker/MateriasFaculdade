#include <stdio.h>
#include <conio.h>

/* Fun��o principal */
int main() {
    /* Declara��o de vari�veis */
    int pessoas;
    float valor, gorjeta02, valortotal, valorcadapessoa, gorjeta;

    printf("Valor a pagar: ");
    scanf("%f", &valor);
    printf("Quanto de gorjeta (em %): ");
    scanf("%f", &gorjeta);
    printf("Pessoas pagantes: ");
    scanf("%i", &pessoas);

    gorjeta02 = gorjeta/100;
    valortotal = (gorjeta02*valor)+valor;
    valorcadapessoa = valortotal/pessoas;


    printf("Cada pessoa deve pagar %.2f", valorcadapessoa);





    getch();
    return 0;
}
