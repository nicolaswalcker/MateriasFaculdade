def teste(l,x,i=0):
    if l != []:
        if x == l[0]:
            return teste(l[1:],x,i+1)
        else:
            return teste(l[1:],x,i)
    else:
        return i

print(teste([1,4,5,6,2,7,4,2,6],2))
