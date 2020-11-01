print('Identificador de números ascendentes!\n')

n=int(input('Digite um número aqui: '))
if n > 99 and n < 1000:
    n1=n//100
    n2=(n//10)%10
    n3=(n//1)%10
    if n1 < n2 < n3:
        print('O número {} é ascendente.'.format(n))
    else:
        print('O número {} não é ascendente.'.format(n))
else:
    print('Número inválido! Digite novamente.')




