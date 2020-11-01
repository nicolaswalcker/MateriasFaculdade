def verificar(n1, n2, n3, n4, n5):
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
    if n5 % 2 == 0:
        somaPar += n5
        contaPar += 1
    else:
        somaImpar += n5
        contaImpar += 1

    if contaPar > 0:
        return (contaPar, somaPar, (somaPar/contaPar))
    if contaImpar > 0:
        return (contaImpar, somaImpar, (somaImpar/contaImpar))
verificar(7, 6, 2, 5, 1)