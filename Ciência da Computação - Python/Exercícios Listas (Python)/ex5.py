def teste(l,i=0,p=0):
    if i < len(l):
        if l[i] %2 == 0:
            return teste(l,i+1,p+1)
        else:
            return teste(l,i+1,p)
    else:
        return p
teste([1, 2, 3])
