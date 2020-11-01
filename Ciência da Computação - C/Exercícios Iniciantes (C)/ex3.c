#include <stdio.h>
#include <conio.h>
/* MODO APENAS NUMEROS INTEIROS
int main() {
    //Declaração de variáveis
    int nota1, nota2, nota3, media;
    printf("Informe sua nota 1: ");
    scanf("%d", &nota1);
    printf("Informe sua nota 2: ");
    scanf("%d", &nota2);
    printf("Informe sua nota 3: ");
    scanf("%d", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("Sua media eh %i", media);



    return 0;
}
*/



// NUMEROS COM CASAS DECIMAIS
int main() {
    /* Declaração de variáveis */
    float nota1, nota2, nota3, media;
    printf("Informe sua nota 1: ");
    scanf("%f", &nota1);
    printf("Informe sua nota 2: ");
    scanf("%f", &nota2);
    printf("Informe sua nota 3: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf("Sua media eh %.3f", media);



    return 0;
}
