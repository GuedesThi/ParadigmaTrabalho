from classes.Funcionario import Funcionario

class Desenvolvedor(Funcionario):
    def executar_tarefa(self):
        print(f"{self.nome} está desenvolvendo software\n")

        