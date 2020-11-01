def teste(l1,i=0,lu=[]):
    if i < len(l1):
        if l1[i] not in lu:
            lu+=[l1[i]]
            return teste(l1,i+1,lu)
    if len(l1) < i:
        return lu
    else:
        return teste(l1,i+1,lu)
print(teste([1,5,3,2,6,8,3,5,8,5,3,2]))
