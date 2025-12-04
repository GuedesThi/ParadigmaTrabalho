import java.util.Scanner;

public class gerente extends funcionario{

    public gerente(String nome, int idade, double salario) {
        super(nome, idade, salario);
    }

    public gerente() {

    }

    @Override
    public void executarTarefa() {
        System.out.println(getNome() + " está gerenciando a equipe\n");
    }


}
