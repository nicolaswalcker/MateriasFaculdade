/***************
   CABEÇALHO
   Enunciado: Números com a mesma característica do 3025.
   Autor: Nicolas Walcker
   Histórico de Versão:1.0.0
***************/

/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <math.h>


/* Declaração de funções
   Nome: main
   Entrada: int
   Saída: int
   Objetivo: Mostrar os números que tem a mesma propriedade no numero 3025*/

/* Função principal */
int main() {
    /* Declaração de variáveis */
    int n, num1, num2, num3, num4, auxiliar, primeiraMetade, segundaMetade, soma, calculo;
    // PROCESSAMENTO
    for(n=1000; n<9999; n++){
			num1=n/1000;
			auxiliar=n%1000;
			num2 = auxiliar/100;
			auxiliar=auxiliar%100;
			num3=auxiliar/10;
			num4=auxiliar%10;

            primeiraMetade=(num1*10)+num2;
			segundaMetade=(num3*10)+num4;
			soma=primeiraMetade+segundaMetade;
			calculo= soma*soma;

        if (calculo==n){
            printf("%d\n", n);
        }
    }
    return 0;
    getch();
}
