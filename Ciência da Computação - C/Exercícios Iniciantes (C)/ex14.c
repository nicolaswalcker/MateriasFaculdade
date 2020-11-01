#include <stdio.h>
#include <conio.h>

/* Função principal */
int main() {
    /* Declaração de variáveis */
    float metros, K;
    printf("Digite a velocidade a ser convertida (m/s): ");
    scanf("%f", &metros);

    K = (metros*3.6);

    printf("A velocidade %.2fm/s eh de %.2fkm/h", metros, K);


    getch();
    return 0;
}
