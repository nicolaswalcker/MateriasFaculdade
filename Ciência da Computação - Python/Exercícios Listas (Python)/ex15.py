def teste(ini, fim, s, i=0, l=[]):
    if ini>fim or fim<0 or s<=0 or i>fim:
        return l
    else:
        return teste(ini, fim, s, i+1, l+[ini+s*i])
print(teste(1,10,2))
