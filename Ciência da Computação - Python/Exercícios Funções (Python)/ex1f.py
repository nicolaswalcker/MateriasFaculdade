import math
def esfera(r):
    a=4*math.pi*r**2
    v=4/3*math.pi*r**3
    print('Área: {:.3f}\nVolume: {:.3f}'.format(a, v))
    return(a, v)

esfera(2)

