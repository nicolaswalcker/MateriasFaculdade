/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int num1, num2, num3;
    printf("Digite os numeros: ");
    scanf("%d\n%d\n%d", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3){
        printf("O numero %d eh o maior", num1);
    }
    else if (num2 > num1 && num2 > num3){
        printf("O numero %d eh o maior", num2);
    }
    else if (num3 > num2 && num3 > num1){
        printf("O numero %d eh o maior", num3);
    }


    getch();
    return 0;
}
