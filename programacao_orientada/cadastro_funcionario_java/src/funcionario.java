import java.util.Scanner;

public class funcionario extends pessoa{
    private double salario;

    public funcionario(String nome, int idade, double salario) {
        super(nome, idade);
        this.salario = salario;
    }

    public funcionario() {
        Scanner scan = new Scanner(System.in);
        System.out.println("\nDigite o nome do funcionario: ");
        setNome(scan.nextLine());
        System.out.println("\nDigite a idade: ");
        setIdade(scan.nextInt());
        System.out.println("\nDigite o salario: ");
        setSalario(scan.nextInt());
        scan.nextLine();
    }

    public double getSalario() {
        return salario;
    }


    public void setSalario(double salario) {
        this.salario = salario;
    }

    public void executarTarefa(){
        System.out.println(getNome() + " está executando uma tarefa genérica\n");
    }
}
