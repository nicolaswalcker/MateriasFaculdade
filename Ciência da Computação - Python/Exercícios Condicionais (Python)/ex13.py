a=float(input('Digite um lado do triangulo: '))
b=float(input('Digite outro lado do triangulo: '))
c=float(input('Digite outro lado do triangulo: '))

if a < b + c or b < a + c or c < a + b:
    print('Os lados podem formar um triangulo ', end='')
    if a == b == c:
        print('EQUILÁTERO.')
    elif a != b != c != a:
        print('ESCALENO.')
    else:
        print('ISOSCELES.')
else:
    print('Valores insuficientes para formar um triângulo.')


