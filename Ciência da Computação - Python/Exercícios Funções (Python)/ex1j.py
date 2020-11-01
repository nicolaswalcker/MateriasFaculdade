def testeTipo(x):
    if isinstance(x, bool):
        print('Booleano')
    elif isinstance(x, int):
        print('Inteiro')
    elif isinstance(x, float):
        print('Ponto flutuante')
    elif isinstance(x, str):
        print('String')

testeTipo(False)


