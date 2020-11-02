/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <math.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int n, i;
    printf("Digite o numero aqui: ");
    scanf("%d", &n);
    i=0;   
     
    while (i < n)
    {
        i++;
        printf("%d\n", (i*3)) ;
    }    
    getch();
    return 0;
}