/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>

/* Função principal */
int main()
{
    /* Declaração de variáveis */
    int num1, num2, quad1, quad2;
    printf("Escreva os numeros: ");
    scanf("%d", &num1);
    scanf("%d", &num2);

    quad1 = num1*num1;
    quad2 = num2*num2;

    if (quad1 < quad2){
        printf("%d e o menor valor", quad1);
    } 
    else{
        printf("%d e o menor valor", quad2);
    }
    getch();
    return 0;
}

