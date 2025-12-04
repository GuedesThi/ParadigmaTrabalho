def fazerSaque(saqueRodando: bool, contaBancaria: int, sistemaRodando: bool):
    while saqueRodando:
        saque = int(input(
            f'\nSeu saldo atual: R${contaBancaria}. Quanto deseja sacar? '))

        if saque > 0:
            contaBancaria = contaBancaria - saque
            saqueRodando = False
            sistemaRodando = False
            print(f'\nApós o saque de R${saque}. Seu saldo atual é: R${contaBancaria}')
            return sistemaRodando
        else:
            opcao = input('\nO valor para o saque deve ser maior que R$0.00. Deseja tentar novamente? [0] Não | [1] Sim: ')
            if opcao == '0':
                saqueRodando = False
                sistemaRodando = False
                return sistemaRodando
            

            