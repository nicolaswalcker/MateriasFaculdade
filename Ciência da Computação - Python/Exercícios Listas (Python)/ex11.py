def divisores(x,n,i=1,l=[]):
    if i<=n:
        if x%i==0:
            return divisores(x,n,i+1,l+[i])
        else:
            return divisores(x,n,i+1,l)
    else:
        return l
print(divisores(100,100))
