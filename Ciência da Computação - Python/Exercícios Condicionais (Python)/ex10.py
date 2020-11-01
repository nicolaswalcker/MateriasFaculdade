print('Teste do aluno\n')

nota1=float(input('Digite a nota da primeira prova: '))
nota2=float(input('Digite a nota da segunda prova: '))
nota3=float(input('Digite a nota da terceira prova: '))

media= (nota1+nota2+nota3)/3

if media >= 7.0:
    print ('Sua nota foi {:.2f}, ta aprovado!'.format(media))
else:
    print('Sua nota foi {:.2f} e você ficou abaixo da média.\nVocê ficou de final!\n'.format(media))
    nfinal=float(input('Digite aqui a nota da prova final: '))
    if nfinal >= 5:
        print('Você passou, parabéns!')
    else:
        print('Você reprovou!!!')

