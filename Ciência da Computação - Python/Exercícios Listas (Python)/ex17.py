def ehPrimo (n, i=1, d=0):
    if n<i:
        return True if d==2 else False
    else:
        if n%i==0:
            return ehPrimo(n,i+1,d+1)
        else:
            return ehPrimo(n,i+1,d)
def primos(n, i=1, l=[]):
    if i>n:
        return l
    else:
        if ehPrimo(i):
            return primos(n,i+1,l+[i])
        else:
            return primos(n,i+1,l)
print(primos(10))
