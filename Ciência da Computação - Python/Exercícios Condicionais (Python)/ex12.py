lados=int(input("Digite o número de lados do polígono aqui: "))
if lados == 3:
    print("Seu polígono é um TRIÂNGULO!\n")
    n1= int(input('Digite o primeiro lado: '))
    n2 = int(input('Digite o segundo lado: '))
    n3 = int(input('Digite o terceiro lado: '))
    perimetro = n1+n2+n3
    print('\nO perimetro do triângulo é de {}u.'.format(perimetro))
if lados == 4:
    print('Seu polígono é um QUADRADO!\n')
    l1= int(input('Digite o lado do seu quadrado: '))
    area=l1**2
    print('\nA área do seu quadrado é de {}u.'.format(area))
if lados == 5:
    print('Seu polígono é um PENTÁGONO!')
if lados <= 2 or lados > 5:
    print('Polígono não reconhecido')
