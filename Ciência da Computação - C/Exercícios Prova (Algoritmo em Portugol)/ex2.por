programa
{
	const inteiro N = 4
	
	funcao inicio()
	{
		inteiro i, j, c, cont,  matriz[N][N];

		escreva("Digite os numeros da matriz\n")
		para (i=0;i<4;i++){
			para (j=0; j<4; j++){
				escreva("Digite o elemento ", j+1," ", "da linha ", i+1," ");
				leia(matriz[i][j]);
			}
		}
		para (i=0; i<4; i++){
			c=0;
			para (j=0; j<4; j++){
				se (matriz[i][j] == 1) ou matriz[i][j] =/= 0){
					c++;					
					se (c>1){
						escreva("Matriz nao eh de permuta");
						retorne;						
					}					
				}
			}
		}		
		para (i=0; i<4; i++){
			c=0;
			para (j=0; j<4; j++){
				se (matriz[j][i] == 1 ou matriz[j][i] =/= 0){
					c++;
					
					se (c>1){
						escreva("Matriz nao eh de permuta")
						retorne;
					}
				}
			}
		}

		para (i=0; i<4; i++){
			cont=0;
			para (j=0; j<4; j++){
				se (matriz[i][j] == 0){
					cont++;
					se (cont==4){
						escreva("Matriz nao eh permuta pois eh nula nula");
						retorne;
					}
				}
			}
		}
		escreva("Matriz eh de permuta");
		retorne;	
	}

}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 184; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */