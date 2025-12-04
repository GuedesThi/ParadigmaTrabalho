from classes.Desenvolvedor import Desenvolvedor
from classes.Empresa import Empresa
from classes.Funcionario import Funcionario
from classes.Gerente import Gerente

def main():
    loop = 0
    minha_empresa = Empresa()

    while loop != 4:
        print("\n===== Bem-Vindo(a) ao seu Sistema Empresarial =====\n")
        print("[1] Adicionar Funcionario Novo")
        print("[2] Listar Funcionarios")
        print("[3] Executar tarefas")
        print("[4] Sair")
        
        try:
            opcao_str = input("\nEscolha uma das opções acima: ")
            opcao = int(opcao_str)
        except:
            print("\nDigite Valor VALIDO!")
            continue

        if opcao == 1:
            print("\n======= Selecione o tipo de Funcionario =========\n")
            print("[1] Gerente")
            print("[2] Desenvolvedor")
            print("[3] Funcionario Generico")
            
            try:
                opcaofuncionario = int(input("\nOpção: "))
            except:
                print("\nDigite um Numero valido!")
                continue

            if opcaofuncionario == 1:
                g = Gerente() 
                minha_empresa.adicionar_funcionario(g)
            
            elif opcaofuncionario == 2:
                d = Desenvolvedor()
                minha_empresa.adicionar_funcionario(d)
            
            elif opcaofuncionario == 3:
                f = Funcionario()
                minha_empresa.adicionar_funcionario(f)
            
            else:
                print("\nDigite um Numero valido!")

        elif opcao == 2:
            print("\n======= Funcionarios da empresa =======\n")
            minha_empresa.listar_funcionarios()

        elif opcao == 3:
            print("\n======== Dia de trabalho ========\n")
            minha_empresa.comecar_trabalho()

        elif opcao == 4:
            print("\nServiço concluido!")
            loop = 4
        
        else:
            print("\nDigite Valor VALIDO!")

if __name__ == "__main__":
    main()

    