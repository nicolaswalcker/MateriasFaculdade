def teste(l, i=0):
    if i < (len(l)):
        if isinstance(l[i],int) or isinstance(l[i],float):
            return teste(l,i+1)
        else:
            return False
    else:
        return True

l=[1,2,3,5,3,2,3,2.0]
print(teste(l))
