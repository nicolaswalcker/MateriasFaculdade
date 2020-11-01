def teste(l1,l2,i=0,p=0,lu=[]):
    if i < len(l1):
        if l1[i] not in lu:
            lu+=[l1[i]]
            return teste(l1,l2,i+1,p,lu)
    if p < len(l2):
        if l2[p] not in lu:
            lu+=[l2[p]]
            return teste(l1,l2,i,p+1,lu)
    if len(l1) < i and len(l2) < p:
        return lu
    else:
        return teste(l1,l2,i+1,p+1,lu)
print(teste([1],[1,5,3,2,6,8,3,5,8,5,3,2]))
