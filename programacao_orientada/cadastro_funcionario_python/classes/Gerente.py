from classes.Funcionario import Funcionario

class Gerente(Funcionario):
    def executar_tarefa(self):
        print(f"{self.nome} está gerenciando a equipe\n")