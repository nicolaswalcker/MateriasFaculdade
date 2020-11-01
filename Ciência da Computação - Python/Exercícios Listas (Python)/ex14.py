def teste(f,s,i=1,l=[0]):
    if f < 0 or s <= 0:
        return []
    elif i <= f:
        return teste(f,s,i+1,l+[s*i])
    else:
        return l
print(teste(6,2))
