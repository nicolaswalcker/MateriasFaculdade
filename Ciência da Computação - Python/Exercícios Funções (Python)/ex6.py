def numero(x):
    if x >= 1000 and x < 9999:
        p1 = x%100
        p2 = x//100
        return(p1+p2)**2==x
    else:
        return False

def numero2():
    n=int(input('Digite um número de 4 digitos: '))
    print(numero(n))
numero2()

