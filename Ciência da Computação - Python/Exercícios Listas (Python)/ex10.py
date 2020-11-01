def pares(l,i=0,r=[]):
    if i < len(l):
        if l[i] %2 == 0:
            return pares(l,i+1,r+[l[i]])
        else:
            return pares(l,i+1,r)
    else:
        return r
print(pares([1,2,3,4,5,2,6,7,8,4,6,3,6]))
