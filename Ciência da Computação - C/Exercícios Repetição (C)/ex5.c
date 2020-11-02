/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int num, div, numDiv;
    printf("Digite o numero: ");
    scanf("%d", &num);
    
    numDiv=0;

    for (div = 1; div <= num; div++)
    {
        if (num%div == 0){
            printf("%d \n", div);
            numDiv++;
        }        
    }
    if (numDiv <= 2){
        printf("EH PRIMO");
    }
    else
    {
        printf("NAO EH PRIMO");
    }
    getch();
    return 0;
}