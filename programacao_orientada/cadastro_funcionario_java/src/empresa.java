import java.util.ArrayList;

public class empresa {

    private ArrayList<funcionario> funcionarios = new ArrayList<>();

    public void adicionarFuncionario(funcionario f){
        funcionarios.add(f);
    }

    public void listarFuncionarios(){
        if (funcionarios.isEmpty()) {
            System.out.println("Nenhum funcionário cadastrado na empresa.\n");
            return;
        } else {
            for (funcionario f : funcionarios) {
                System.out.println(f.getNome() + " - " + f.getClass());
            }
        }
    }

    public void comecarTrabalho(){
        if (funcionarios.isEmpty()) {
            System.out.println("Nenhum funcionário para trabalhar hoje!\n");
            return;
        } else {
            for (funcionario f : funcionarios) {
                f.executarTarefa();
            }
        }
    }

}
