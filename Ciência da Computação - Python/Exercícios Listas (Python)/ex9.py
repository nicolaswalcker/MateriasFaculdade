def divisores(n,i=1,l=[]):
    if i<=n:
        if n%i==0:
            return divisores(n, i+1, l+[i])
        else:
            return divisores(n, i+1, l)
    else:
            return l
print(divisores(100))
