import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int loop = 0;
        Scanner menu = new Scanner(System.in);

        empresa empresa = new empresa();

        while (loop != 4) {
            System.out.println("\n===== Bem-Vindo(a) ao seu Sistema Empresarial =====\n");
            System.out.println("[1] Adicionar Funcionario Novo");
            System.out.println("[2] Listar Funcionarios");
            System.out.println("[3] Executar tarefas");
            System.out.println("[4] Sair");
            System.out.print("\nEscolha uma das opções acima: ");

            int opcao = menu.nextInt();

            switch (opcao){
                case 1:
                    System.out.println("\n======= Selecione o tipo de Funcionario =========\n");
                    System.out.println("[1] Gerente");
                    System.out.println("[2] Desenvolvedor");
                    System.out.println("[3] Funcionario Generico");
                    System.out.print("\nOpção: ");
                    int opcaofuncionario = menu.nextInt();
                    switch (opcaofuncionario){
                        case 1:
                            funcionario gerente2 = new gerente();
                            empresa.adicionarFuncionario(gerente2);
                            break;
                        case 2:
                            funcionario desenvolvedor2 = new desenvolvedor();
                            empresa.adicionarFuncionario(desenvolvedor2);
                            break;
                        case 3:
                            funcionario generico = new funcionario();
                            empresa.adicionarFuncionario(generico);
                            break;
                        default:
                            System.out.println("\nDigite um Numero valido!");
                            break;
                    }
                    break;

                case 2:
                    System.out.println("\n======= Funcionarios da empresa =======\n");
                    empresa.listarFuncionarios();
                    break;

                case 3:
                    System.out.println("\n======== Dia de trabalho ========\n");
                    empresa.comecarTrabalho();
                    break;

                case 4:
                    System.out.println("\nServiço concluido!");
                    loop = 4;
                    break;
                default:
                    System.out.println("\nDigite Valor VALIDO!");
                    break;
            }

        }


    }


}
