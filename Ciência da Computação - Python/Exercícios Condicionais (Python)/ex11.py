import math as m

y=0
x=int(input('Digite um valor para "x" aqui: '))
if x <= 1 and x > 0:
    y=m.log(x)
elif x>1 and x <=2:
    y= m.log(x, 10) + m.sqrt(x)
elif x>2 and x <=5:
    y=x**2 + m.e**x
elif x > 5:
    y=x**(x/2) + m.log(x, 2)
print('Resultado: {:.2f}'. format(y))

