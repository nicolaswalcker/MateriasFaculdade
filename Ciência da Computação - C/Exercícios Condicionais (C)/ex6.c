/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int numero;
    printf("Insira o numero: ");
    scanf("%d", &numero);

    if (numero > -11 && numero <=30){
        printf("O numero %d pertence ao intervalo", numero);
    }
    else{
        printf("O numero nao pertence ao intervalo");
    }
    getch();
    return 0;
}
