def fibonacci(n):
    if n==1 or n==2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
def termo(n,i=1,l=[]):
    if i <= n:
        return termo(n,i+1,l+[fibonacci(i)])
    else:
        return l
print(termo(5))
