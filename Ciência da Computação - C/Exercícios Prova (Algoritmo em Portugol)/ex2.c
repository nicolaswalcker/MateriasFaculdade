/***************
   CABE�ALHO
   Enunciado: Programa para verificar se matriz � de permuta.
   Autor: Nicolas Walcker
   Hist�rico de Vers�o: 1.0.0
***************/

/* Importa��o de Bibliotecas */
#include <stdio.h>
#include <conio.h>

/* Declara��o de constantes */
#define N 4

/* Fun��o principal */
int main() {
    /* Declara��o de vari�veis */
    int i, j, c, cont, matriz[N][N];

    // ENTRADA
		printf("Digite os numeros da matriz\n");
		for (i=0;i<4;i++){
            for (j=0; j<4; j++){
                printf("Digite o elemento %d da linha %d ", j+1, i+1);
                scanf("%d",&matriz[i][j]);
            }
		}
    // PROCESSAMENTO
        for(i=0; i<4; i++){
			c=0;
			for (j=0; j<4; j++){
				if (matriz[j][i] == 1 || matriz[j][i] != 0){
					c++;
					if (c>1){
						printf("Matriz nao eh de permuta");
						return 0;
						getch();
					}
				}
			}
		}

		for(i=0; i<4; i++){
			c=0;
			for (j=0; j<4; j++){
				if (matriz[i][j] == 1 || matriz[i][j] != 0){
					c++;
					if (c>1){
						printf("Matriz nao eh de permuta");
						return 0;
						getch();
					}
				}
			}
		}


		for (i=0; i<4; i++){
			cont=0;
			for (j=0; j<4; j++){
				if (matriz[i][j] == 0){
					cont++;
					if (cont==4){
						printf("N�o eh uma matriz de permuta pois eh nula");
						return 0;
						getch();
					}
				}
			}
		}
	printf("Matriz eh de permuta");
	return 0;
	getch();
}




