def lista(ini, fim, l=[]):
    if fim < ini:
        return l
    else:
        return lista(ini+1, fim, l+[ini])
print(lista(101,11))
