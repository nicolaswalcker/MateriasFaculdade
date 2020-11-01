def teste(fim,i=0,l=[]):
    if fim < 0:
        return []
    elif i <= fim:
        return teste(fim,i+1,l+[i])
    else:
        return l
print(teste(100))
