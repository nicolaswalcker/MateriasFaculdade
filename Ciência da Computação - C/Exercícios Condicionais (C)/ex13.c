/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int mes;
    printf("Digite um mes entre 1 e 12: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Esse mes tem 31 dias");
        break;
    case 2:
        printf("Esse mes tem 28 dias");
        break;    
    default:
        printf("Esse mes tem 30 dias");
        break;
    }


    getch();
    return 0;
}