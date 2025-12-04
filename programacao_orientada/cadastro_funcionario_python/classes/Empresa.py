class Empresa:
    def __init__(self):
        self.funcionarios = [] 

    def adicionar_funcionario(self, f):
        self.funcionarios.append(f)

    def listar_funcionarios(self):
        if len(self.funcionarios) == 0:
            print("Nenhum funcionário cadastrado na empresa.\n")
        else:
            for f in self.funcionarios:
                print(f"{f.get_nome()} - {type(f).__name__}")

    def comecar_trabalho(self):
        if len(self.funcionarios) == 0:
            print("Nenhum funcionário para trabalhar hoje!\n")
        else:
            for f in self.funcionarios:
                f.executar_tarefa()