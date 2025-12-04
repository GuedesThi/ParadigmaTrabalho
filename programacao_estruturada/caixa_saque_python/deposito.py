def fazerDeposito(depositoRodando: bool, contaBancaria: int):
    while depositoRodando:
        opcao = input(f'\nA opção de saque foi travada por conta do seu saldo atual: R${contaBancaria}. Deseja realizar um depósito? [0] Não | [1] Sim: ')

        if opcao == '1':
            deposito = int(input('\nInforme o valor: '))

            if deposito > 0:
                contaBancaria = contaBancaria + deposito
                depositoRodando = False
                return contaBancaria
            else:
                print('\nO valor para o depósito deve ser maior que R$0.00. Tente novamente')
        else:
            depositoRodando = False
            print('\nDepósito cancelado')
            return contaBancaria
        

        