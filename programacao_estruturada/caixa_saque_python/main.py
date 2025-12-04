from deposito import fazerDeposito
from sacar import fazerSaque

contaBancaria = 0
saque = 0
deposito = 0
sistemaRodando = True
saqueRodando = True
saqueAutorizado = True
depositoRodando = True

while sistemaRodando:
    opcao = input('\nBem vindo(a) ao Saque-Seguro\nGostaria de realizar um saque? [0] Não | [1] Sim: ')
    if opcao == '1':
        if contaBancaria <= 0 and saqueAutorizado == True:
            contaBancariaAtualizada = fazerDeposito(depositoRodando, contaBancaria) 

            if contaBancariaAtualizada <= 0:  # type: ignore
                saqueAutorizado = False
                sistemaRodando = False
            else:
                sistemaRodando = fazerSaque(saqueRodando, contaBancariaAtualizada, sistemaRodando) # type: ignore
        elif contaBancaria <= 0 and saqueAutorizado == False:
            sistemaRodando = False
        else:
            sistemaRodando = fazerSaque(saqueRodando, contaBancaria, sistemaRodando)
    else:
        sistemaRodando = False


print('\nFinalizando o sistema, volte sempre!\n')


