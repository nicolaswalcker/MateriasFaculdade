import math
def testes(x):
    y=0
    if x <= 1 and x > 0:
        y = math.log(x)
    elif x > 1 and x <= 2:
        y = math.log(x, 10) + math.sqrt(x)
    elif x > 2 and x <= 5:
        y = x ** 2 + math.e ** x
    elif x > 5:
        y = x ** (x / 2) + math.log(x, 2)
    return y
testes(5)