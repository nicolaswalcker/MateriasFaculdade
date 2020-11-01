def quant(l=[]):
    x=int(input("Digite um número entre 0 e 9: "))
    if 0<=x<=9:
        return quant(l+[x])
    else:
        return l
def num(n,l,r=0):
    if l!=[]:
        if l[0]==n:
            return num(n,l[1:],r+1)
        else:
            return num(n, l[1:], r)
    else:
        return r
def main():
    l=quant()
    print("\nNumeros Digitados: {}\n".format(len(l)))
    print("Frequencia de cada número: ")
    print("0 :  {}".format(num(0,l)))
    print("1 :  {}".format(num(1,l)))
    print("2 :  {}".format(num(2,l)))
    print("3 :  {}".format(num(3,l)))
    print("4 :  {}".format(num(4,l)))
    print("5 :  {}".format(num(5,l)))
    print("6 :  {}".format(num(6,l)))
    print("7 :  {}".format(num(7,l)))
    print("8 :  {}".format(num(8,l)))
    print("9 :  {}".format(num(9,l)))

main()
