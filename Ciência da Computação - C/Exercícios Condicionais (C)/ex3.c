/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int num1, num2, soma;
    printf("Digite os numeros: ");
    scanf("%i\n%i", &num1, &num2);

    soma = num1 + num2;
    if (soma > 10){
        printf("A soma eh %i", soma);
    }


    getch();
    return 0;
}