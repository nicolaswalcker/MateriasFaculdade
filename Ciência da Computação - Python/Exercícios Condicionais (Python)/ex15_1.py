print('Digite o tempo de natação')
hn=int(input('Horas:  '))
mn=int(input('Minutos: '))
ns=int(input('Segundos: '))
print('Digite o tempo de transição')
tth=int(input('Horas: '))
ttm=int(input('Minutos: '))
tts=int(input('Segundos: '))
print('Digite o tempo de pedal')
hp=int(input('Horas: '))
mp=int(input('Minutos: '))
sp=int(input('Segundos: '))
print('Digite o tempo de transição')
tthp=int(input('Horas: '))
ttmp=int(input('Minutos: '))
ttsp=int(input('Segundos: '))
print('Digite o tempo de corrida')
tch=int(input('Horas: '))
tcm=int(input('Minutos: '))
tcs=int(input('Segundos: '))

ht=hn+tth+hp+tthp+tch
mt=mn+ttm+ttmp+tcm
st=ns+tts+sp+ttsp+tcs

ht+=mt//60
mt+=st//60

print('Otempo gasto foi de {}:{}:{}.'.format(ht, mt%60, st%60))
