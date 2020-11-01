print('Identificador de palíndromos\n')

a=int(input('Digite um número de quatro dígitos aqui: '))
if a > 999 and a < 10000:
    n1=a//1000
    n2=(a//100)%10
    n3=(a//10)%10
    n4=(a%1000)%10
    if n1==n4 and n2 == n3:
        print('o número {} é um palíndromo.'.format(a))
    else:
        print('O número que você digitou não é um palíndromo. ')
else:
    print('Número inválido! Digite novamente.')