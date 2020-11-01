#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Função principal */
int main() {
    /* Declaração de variáveis */
    int x1, x2, y1, y2;
    float distancia;
    printf("Insira a coordenada: ");
    scanf("%i, %i, %i, %i ", &x1, &x2, &y1, &y2);


    distancia = sqrt(pow(x2-x1, 2)) + sqrt(pow(y2-y1, 2));

    printf("A distancia eh: %.2f", distancia);

    getch();
    return 0;
}
