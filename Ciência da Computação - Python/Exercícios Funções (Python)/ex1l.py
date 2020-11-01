def palindromo(a):

    if a > 999 and a < 10000:
        n1 = a // 1000
        n2 = (a // 100) % 10
        n3 = (a // 10) % 10
        n4 = (a % 1000) % 10
        if n1 == n4 and n2 == n3:
            return(True)
        else:
            return(False)
    else:
        print('Número digitado inválido. ERRO!')
        return(False)
(palindromo(1221))