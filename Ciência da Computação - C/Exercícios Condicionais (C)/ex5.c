/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int numero;
    printf("Digite o numero: ");
    scanf("%i", &numero);

    if (numero%2==0){
        printf("Eh divisivel por 2");
    }
    else if (numero%5==0){
        printf("Eh divisivel por 5");
    }
    else if (numero%10==0){
        printf("Eh divisivel por 10");
    }
    else{
        printf("Nao eh divisivel por 10, 5 ou 2!");
    }
    getch();
    return 0;
}