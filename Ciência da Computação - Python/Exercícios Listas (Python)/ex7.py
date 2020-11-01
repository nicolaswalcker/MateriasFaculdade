def teste(l,x,i=0):
    if i < len(l):
        if x == l[i]:
            return True
        else:
            return teste(l,x,i+1)
    else:
        return False
teste([1, 2, 3, 4], 2)
