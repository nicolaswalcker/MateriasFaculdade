print('Identificador de números')

n1=int(input('Digite o primeiro número aqui:'))
n2=int(input('Digite o segundo número aqui: '))
n3=int(input('Digite o terceiro número aqui: '))
n4=int(input('Digite o quarto número aqui: '))

somaPar = 0
somaImpar = 0
contaPar = 0
contaImpar = 0

if n1 % 2 == 0:
    somaPar += n1
    contaPar += 1
else:
    somaImpar += n1
    contaImpar += 1
if n2 % 2 == 0:
    somaPar += n2
    contaPar += 1
else:
    somaImpar += n2
    contaImpar += 1
if n3 % 2 == 0:
    somaPar += n3
    contaPar += 1
else:
    somaImpar += n3
    contaImpar += 1
if n4 % 2 == 0:
    somaPar += n4
    contaPar += 1
else:
    somaImpar += n4
    contaImpar += 1
if contaPar > 0:
    print('Quantidade de números pares: {}'. format(contaPar))
    print('Soma dos números pares: {}'.format(somaPar))
    print('Média dos números pares: {}'.format(somaPar/contaPar))
else:
    print('Não existem números pares!')

if contaImpar > 0:
    print('Quantidade de números ímpares: {}'.format(contaImpar))
    print('Soma dos números ímpares: {}'.format(somaImpar))
    print('Média dos números ímpares: {}'.format(somaImpar/contaImpar))
else:
    print('Não existem valores ímpares!')


