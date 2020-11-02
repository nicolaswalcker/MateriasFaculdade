/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int a, b;
    printf("Digite os numeros: ");
    scanf("%d %d", &a, &b);

    while (a <= b)
    {
        if (a%2!=0)
        {
            printf("%d\n", a);
            a++;            
        }
        else
        {
            a++;
        }        
    }
    getch();
    return 0;
}