def teste(l1,i=0):
    if i+1 < len(l1):
        if l1[i] < l1[i+1]:
            return teste(l1,i+1)
        else:
            return False
    else:
        return True
print(teste([1,2,5,4]))
