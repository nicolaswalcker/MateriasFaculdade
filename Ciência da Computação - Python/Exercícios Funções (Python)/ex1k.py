def ascendente(n):
    if n > 99 and n < 1000:
        n1 = n // 100
        n2 = (n // 10) % 10
        n3 = (n // 1) % 10
        if n1 < n2 < n3:
            return(True)
        else:
            return(False)
ascendente(358)