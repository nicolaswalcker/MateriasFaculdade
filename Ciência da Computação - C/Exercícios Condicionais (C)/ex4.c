/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int numero;
    printf("Digite um numero aqui: ");
    scanf("%i", &numero);

    if (numero > 80){
        printf("Eh maior que 80");
    }
    if (numero == 40)
    {
        printf("Eh igual a 40");
    }
    if (numero < 25)
    {
        printf("Eh menor que 25");
    }

    getch();
    return 0;
}