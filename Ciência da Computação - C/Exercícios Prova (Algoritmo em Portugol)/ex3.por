programa
{	
	funcao principal()	
	{
		inteiro x[10]={1,4,9,16,25,36,49,64,81,100}, y[6]={0,1,2,3,4,5}, i, j;

		escreva("F(x, y)    x     y\n");


		para(i=0; i<10; i++){
			para(j=0; j<=5; j++){
				escreva(expressaoNum(x[i], y[j]),"/", expressaoDen(x[i], y[j]),   x[i],   y[j])
			}
		}
		retorne;	
	}

	inteiro funcao fat(inteiro x){
		se ((x==1) ou (x==0)){
			retorne 1;
		}se nao{
			retorne x*fat(x-1)
		}
	}

	inteiro expressaoNum(inteiro x, inteiro y){
		retorne ((x*x)+(y*y));
	}
	inteiro expressaoDen(inteiro x, inteiro y){
		retorne fat(x+y);
	}
	
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 300; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */