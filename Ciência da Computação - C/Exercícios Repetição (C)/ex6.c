/* Importação de Bibliotecas */
#include <stdio.h>
#include <conio.h>

/* Função principal */
int main()
{
    /* Declaração de variáveis */
    char nome[30];
    int nprovas, notastotal=0, i;
    float notas, media;
    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);
    printf("Digite a quantidade de provas: ");
    scanf("%d", &nprovas);    
    
    for (i=0; i < nprovas; i++)
    {
        printf("Digite as notas: ");
        scanf("%f", &notas);
        notastotal += notas;
    }    
    media = notastotal/nprovas;
    printf("A media de %s eh %.2f", nome, media);
    getch();
    return 0;
}