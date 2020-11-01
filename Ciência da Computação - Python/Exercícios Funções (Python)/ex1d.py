def crescente(x, y, z):
    if x<y<z:
        print(x, y, z)
    if x<z<y:
        print(x, z, y)
    if y<x<z:
        print(y, x, z)
    if y<z<x:
        print(y, z, x)
    if z<x<y:
        print(z, x, y)
    if z<y<x:
        print(z, y, x)
crescente(4, 9, 1)