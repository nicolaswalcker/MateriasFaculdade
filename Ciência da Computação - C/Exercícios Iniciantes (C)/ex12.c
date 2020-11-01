#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int numero, n1, n2, n3, n4;
    printf("Digite o numero de 4 digitos aqui: ");
    scanf("%i", &numero);

    n1 = numero%10;
    numero = numero/10;
    n2 = numero%10;
    numero = numero/10;
    n3 = numero%10;
    numero = numero/10;
    n4 = numero%10;
    numero = numero/10;

    printf("%i\n%i\n%i\n%i", n4, n3, n2, n1);



    getch();
    return 0;
}
