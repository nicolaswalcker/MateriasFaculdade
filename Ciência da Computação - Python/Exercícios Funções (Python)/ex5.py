def delta(a, b, c):
    delta = (b ** 2) - (4 * a * c)
    return delta


def raizes(a, b, c,):
    d = delta(a, b, c)
    if d < 0:
        print('A equação não possui raízes reais!')
    else:
        x1 = (-b + d ** (1.0/2.0)) / (2.0 * a)
        x2 = (-b - d ** (1.0/2.0)) / (2.0 * a)
        if d == 0:
            print('Raizes iguais {}, {}'.format(x1, x2))
        else:
            print('x1 = {:.2f}'.format(x1))
            print('x2 = {:.2f}'.format(x2))

def main():
    a = int(input('Informe um número: '))
    b = int(input('Informe um número: '))
    c = int(input('Informe um número: '))
    delta(a, b, c)
    raizes(a, b, c)


main()



    


