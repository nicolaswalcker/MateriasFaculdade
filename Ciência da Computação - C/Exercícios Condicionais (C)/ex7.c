/* Importa��o de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Fun��o principal */
int main() {
    /* Declara��o de vari�veis */
    int mes;
    printf("Digite um mes valido: ");
    scanf("%d", &mes);

    switch (mes){
        case(1):
            printf("Janeiro");
            break;
        case(2):
            printf("Fevereiro");
            break;
        case(3):
            printf("Mar�o");
            break;
        case(4):
            printf("Abril");
            break;
        case(5):
            printf("Maio");
            break;
        case(6):
            printf("Junho");
            break;
        case(7):
            printf("Julho");
            break;
        case(8):
            printf("Agosto");
            break;
        case(9):
            printf("Setembro");
            break;
        case(10):
            printf("Outubro");
            break;
        case(11):
            printf("Novembro");
            break;
        case(12):
            printf("Dezembro");
            break;
        default:
            printf("Mes invalido!");
    }


    getch();
    return 0;
}
