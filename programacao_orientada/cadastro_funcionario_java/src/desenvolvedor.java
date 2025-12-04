import java.util.Scanner;

public class desenvolvedor extends funcionario{

    public desenvolvedor(String nome, int idade, double salario) {
        super(nome, idade, salario);
    }

    public desenvolvedor() {

    }

    @Override
    public void executarTarefa() {
        System.out.println(getNome() + " está desenvolvendo software\n");
    }


}
