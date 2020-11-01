print('Digite o tempo do corredor 1')
h1=int(input('Hora: '))
m1=int(input('Minutos: '))
s1=int(input('segundos: '))

print('Digite o tempo do corredor 2')
h2=int(input('Hora: '))
m2=int(input('Minutos: '))
s2=int(input('segundos: '))

htotal1 = h1*3600 + m1*60 + s1
htotal2 = h2*3600 + m2*60 + s2

if htotal1 < htotal2:
    print('Vencedor: corredor 1')
    print('Diferença: {}:{}:{}'.format((h2-h1), (m2-m1), s2-s1))
else:
    print('Vencedor corredor 2')
    print('Diferença: {}:{}:{}'.format((h1-h2), (m1-m2), s1-s2))