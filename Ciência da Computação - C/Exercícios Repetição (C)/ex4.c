/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int n, i, prod;
    printf("Digite o numero : ");
    scanf("%d", &n);
    i=0;
    prod = 1;

    while (i < n)
    {           
        i++;   
        prod *= i;       
        printf("%d\n", i);
    }
    printf("O produto eh: %d", prod);
    

    


    getch();
    return 0;
}