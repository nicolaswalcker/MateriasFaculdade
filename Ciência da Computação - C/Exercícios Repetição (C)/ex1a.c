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
        printf("%d\n", a);
        a++;
    }
    



    getch();
    return 0;
}