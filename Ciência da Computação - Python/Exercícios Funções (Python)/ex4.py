def ritmocorredor(h, m, s, d):
    hora=h*60
    seg=s/60
    tempototal=hora + m+ seg
    ritmo=tempototal/d
    tempototal=int(ritmo)
    dist=int((ritmo-tempototal)*60)
    print('Ritmo médio: {0:02d}:{1:02d} min/km'.format(tempototal, dist))


def main():
    h=int(input('Digite a hora aqui: '))
    m=int(input('Digite os minutos aqui: '))
    s=int(input('Digite os segundos aqui: '))
    d=float(input('Digite a distância aqui: '))
    ritmocorredor(h, m, s, d)

main()


