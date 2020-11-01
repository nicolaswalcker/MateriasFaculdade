print('Data de nascimento')
dia1=int(input('Dia: '))
mes1=int(input('Mes: '))
ano1=int(input('Ano: '))
print('\nData atual\n')
dia2=int(input('Dia: '))
mes2=int(input('Mes: '))
ano2=int(input('Ano: '))

if ano1>2019:
    print('Ano inválido!')
if mes1>12 or mes2>12:
    print('Mês inválido!')
if dia1>31 or dia2>31:
    print('Dia inválido!')
anostotal = ano2-1

if mes1==mes2:
    if dia1<=dia2:
        print(anostotal)
    else:
        print(anostotal-1)
elif mes1>mes2:
    print(anostotal-1)
elif mes1 < mes2:
    print(anostotal)









