/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>

/* Função principal */
int main()
{
    /* Declaração de variáveis */
    float num1, num2, num3;
    printf("Insira o numero aqui: ");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    if (num1 <= num2 && num2 <= num3){
        printf("(%.1f %.1f %.1f)", num1, num2, num3);
    }else if (num1 <= num3 && num3 <= num2){
        printf("(%.1f %.1f %.1f)", num1, num3, num2);
    }else if (num2 <= num1 && num1 <= num3){
        printf("(%.1f %.1f %.1f)", num2, num1, num3);
    }else if (num2 <= num3 && num3 <= num1){
        printf("(%.1f %.1f %.1f)", num2, num3, num1);
    }else if (num3 <= num1 && num1 <= num2){
        printf("(%.1f %.1f %.1f)", num3, num1, num2);
    }else if (num3 <= num2 && num2 <= num1){
        printf("(%.1f %.1f %.1f)", num3, num2, num1);
    }
    getch();
    return 0;
}
