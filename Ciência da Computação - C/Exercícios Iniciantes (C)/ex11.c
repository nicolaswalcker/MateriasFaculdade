#include <stdio.h>
#include <conio.h>

/* Fun��o principal */
int main() {
    /* Declara��o de vari�veis */
    int numero, n1, n2, n3;
    printf("Digite o numero de 03 digitos: ");
    scanf("%i", &numero);

    n1 = numero%10;
    numero = numero/10;
    n2 = numero%10;
    numero = numero/10;
    n3 = numero%10;
    numero = numero/10;

    printf("%i%i%i", n1, n2, n3);

    getch();
    return 0;
}
