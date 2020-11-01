/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    float num1, num2;
    printf("Digite os numeros: ");
    scanf("%f\n%f", &num1, &num2);

    if (num1 == num2){
        printf("Eh igual!");
    }
    else{
        printf("Nao eh igual!");
    }

    getch();
    return 0;
}
