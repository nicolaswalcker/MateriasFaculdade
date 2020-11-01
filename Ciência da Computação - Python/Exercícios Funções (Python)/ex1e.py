def crescente1(x, y, z):
    if x<y<z:
        return(x, y, z)
    if x<z<y:
        return(x, z, y)
    if y<x<z:
        return(y, x, z)
    if y<z<x:
        return(y, z, x)
    if z<x<y:
        return(z, x, y)
    if z<y<x:
        return (z, y, x)
crescente1(4, 9, 2)