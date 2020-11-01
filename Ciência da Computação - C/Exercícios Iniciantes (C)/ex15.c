#include <stdio.h>
#include <conio.h>

#define pi  3.14159
#define angulo180  180

/* Função principal */
int main() {
    /* Declaração de variáveis */
    float G, R;
    printf("Digite o angulo a ser convertido (graus): ");
    scanf("%f", &G);

    R = (G*pi)/angulo180;

    printf("O angulo %.2f eh = %.2f em radianos", G, R);

    getch();
    return 0;
}
