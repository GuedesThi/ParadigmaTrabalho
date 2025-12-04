from classes.Pessoa import Pessoa

class Funcionario(Pessoa):
    def __init__(self):
        super().__init__()
        
        print("\nDigite o nome do funcionario: ")
        self.nome = input()
        
        print("\nDigite a idade: ")
        self.idade = int(input())
        
        print("\nDigite o salario: ")
        self.salario = float(input()) 
    
    def get_salario(self):
        return self.salario

    def executar_tarefa(self):
        print(f"{self.nome} está executando uma tarefa genérica\n")

        