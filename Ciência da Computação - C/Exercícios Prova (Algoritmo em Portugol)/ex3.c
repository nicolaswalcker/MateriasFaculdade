
/***************
   CABEÇALHO
   Enunciado:Reproduzir fatoriais
   Autor: Nicolas Walcker
   Histórico de Versão: 1.0.0
***************/

/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Declaração de funções
   Nome: fat
   Entrada:double
   Saída:fatorial(double)
   Objetivo: calcular o fatorial*/

   /* Declaração de funções
   Nome: expressaoNum
   Entrada:int
   Saída:int
   Objetivo: fazer o cálculo do numerador*/

   /* Declaração de funções
   Nome: expressaoDen
   Entrada:int
   Saída:int
   Objetivo: fazer o claculo do denominador*/

/* Função principal */
int main() {
    /* Declaração de variáveis */
    int x[10]={1,4,9,16,25,36,49,64,81,100}, y[6]={0,1,2,3,4,5}, i, j;

    printf("F(x, y)    x     y\n");

    for(i=0; i<10; i++){
        for(j=0; j<=5; j++){
            printf("%d/%d        %d     %d \n", expressaoNum(x[i], y[j]), expressaoDen(x[i], y[j]), x[i], y[j]);
        }
    }
    getch();
    return 0;

}
int fat(int x){
    if((x==1) || (x==0)){
        return 1;
    }else{
        return x*fat(x-1);
    }

}

int expressaoNum(int x, int y){
    return ((x*x)+(y*y));
}
int expressaoDen(int x, int y){
    return fat(x+y);

}

