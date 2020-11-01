#include <stdio.h>
#include <math.h>

/* Função principal */
int main() {
    /* Declaração de variáveis */
    int lado, area;
    printf("Insira o tamanho do lado: ");
    scanf("%i", &lado);
    area = lado*lado;

    printf("A area do quadrado eh: %i", area);

    getch();
    return 0;
}
