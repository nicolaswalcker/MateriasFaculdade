programa
{
	
	funcao inicio()
	{
		inteiro n, num1, num2, num3, num4, auxiliar, primeiraMetade, segundaMetade, soma, calculo;

		para (n=1000; n<9999; n++){
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

			se (calculo == n){
				escreva("\n", n)
			}			
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 285; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */