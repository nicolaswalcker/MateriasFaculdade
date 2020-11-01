/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int idade;
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade <= 18){
        printf("Menor de idade");
    } else if (idade > 18 && idade <=64){
        printf("Maior de idade");
    }else{
        printf("Idosa");
    }


    getch();
    return 0;
}