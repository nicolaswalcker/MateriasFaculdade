/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int numero;
    printf("Digite o numero: ");
    scanf("%i", &numero);

    if (numero % 2==0)
        printf("Eh par");
    else
        printf("Eh impar;");
    


    getch();
    return 0;
}