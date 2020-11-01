def tempo(s):
    hora=s//3600
    seg=s%3600
    min=seg//60
    segf=seg%60
    print('{}:{}:{}'.format(hora, min, segf))
tempo(4903)