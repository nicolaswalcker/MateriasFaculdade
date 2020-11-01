/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>


/* Função principal */
int main() {
    /* Declaração de variáveis */
    int n1, n2, n3, n4, n5, cont;
    
    printf("Digite 05 valores: ");
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    scanf("%i", &n4);
    scanf("%i", &n5);
    cont=0;



    if (n1<0){
        cont+=1;
    }
    if (n2<0){
        cont+=1;
    }
    if (n3<0){
        cont+=1;
    }
    if (n4<0){
        cont+=1;
    }
    if (n5<0){
        cont+=1;
    }
    printf("Temos: %d valores negativos" , cont);
    getch();
    return 0;
}