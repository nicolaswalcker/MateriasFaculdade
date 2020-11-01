def quadrados(x, y, z):
    if x<y<z:
        return x**2+y**2
    if x<z<y:
        return x**2+z**2
    if z<x<y:
        return z**2+x**2
    if z<y<x:
        return z**2+y**2
    if y<x<z:
        return y**2+x**2
    if y<z<x:
        return y**2+z**2
quadrados(2, 4, 5)