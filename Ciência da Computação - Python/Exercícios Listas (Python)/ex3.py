def soma(l,i=0,m=0):
    if i<len(l):
        m+=l[i]
        return soma(l,i+1,m)
    else:
        return m/len(l)

print(soma([10, 5, 5, 2]))
