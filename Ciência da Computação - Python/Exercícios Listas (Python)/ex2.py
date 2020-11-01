def soma(l,s=0):
    if l != []:
        s+=l[0]
        return soma(l[1:],s)
    else:
        return s

print(soma([1,2,3,4]))
