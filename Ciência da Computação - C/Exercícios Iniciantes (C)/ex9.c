#include <stdio.h>
#include <math.h>

/* Fun��o principal */
int main() {
    /* Declara��o de vari�veis */
    int lado, area;
    printf("Insira o tamanho do lado: ");
    scanf("%i", &lado);
    area = lado*lado;

    printf("A area do quadrado eh: %i", area);

    getch();
    return 0;
}
