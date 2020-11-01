def buscaBinaria (L, x):
    '''Função utilizada apenas para facilitar a chamada da função buscaBinariaR '''
    return buscaBinariaR (L, x, 0, len(L)-1)
def buscaBinariaR (L, x, ini , fim):
    if len(L) > 1:
        if x < L[(int(fim/2))]:
            return buscaBinariaR(L[:(int(fim/2))],x,ini,len(L[:(int(fim/2))]))
        else:
            return buscaBinariaR(L[(int(fim/2)):],x,ini,len(L[(int(fim/2)):]))
    else:
        if x == L[0]:
            return L[0]
print(buscaBinaria([2,15,17,30,32,34,40,50,80,90,95,97,99,101,105],2))
