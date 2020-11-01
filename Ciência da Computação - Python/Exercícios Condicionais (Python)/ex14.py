a1=int(input('Digite o primeiro ângulo: '))
a2=int(input('Digite o segundo ângulo: '))
a3=int(input('Digite o terceiro ângulo: '))
if a1 + a2 + a3 == 180:
    if a1 > 90 or a2 > 90 or a3 > 90:
        print('OBTUSÂNGULO')
    elif a1 == 90 or a2 == 90 or a3 == 90:
        print('RETÂNGULO')
    if a1<90 and a2<90 and a3<90:
        print('ACUTANGULO')
else:
    print('ERRO!')