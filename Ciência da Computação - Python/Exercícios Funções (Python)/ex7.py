def ttriangulo(a, b, c):
    return (abs(b-c))<a<b+c and (abs(a-c))<b<a+c and (abs(a-b))<c<a+b
def tipotriangulo(x, y, z):
    eht=ttriangulo(x, y, z)
    if eht == True:
        if x==y==z:
            print('Equilátero')
            return
        if x!=y and z!=x and x!=z:
            print('Escaleno')
            return
        else:
            print('Isósceles')
            return
    else:
        print('Não é triângulo')
def main():
    x=float(input('Digite aqui um valor: '))
    y = float(input('Digite aqui um valor: '))
    z = float(input('Digite aqui um valor: '))
    tipotriangulo(x, y, z)
main()
