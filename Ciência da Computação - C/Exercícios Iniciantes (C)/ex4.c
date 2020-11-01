#include <stdio.h>
#include <conio.h>

/* Função principal */
int main() {
    /* Declaração de variáveis */
    int nota1, nota2;
    float notapeso1, notapeso2, media;
    printf("Digite sua nota 1: ");
    scanf("%d", &nota1);
    printf("Digite sua nota 2: ");
    scanf("%d", &nota2);

    notapeso1 = nota1*0.3;
    notapeso2 = nota2*0.7;
    media = (notapeso1 + notapeso2)/2;

    printf("A nota final eh %.2f", media);
    getch();
    return 0;
}
