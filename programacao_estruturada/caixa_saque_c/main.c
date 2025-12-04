#include <stdio.h>
#include <stdbool.h>
#include <string.h> 

float contaBancaria = 0;
float saque = 0;
float deposito = 0;
bool sistemaRodando = true;
bool saqueRodando = true;
bool saqueAutorizado = true;
bool depositoRodando = true;
char opcao[1];

void fazerSaque() {
    while (saqueRodando) {
        printf("\nSeu saldo atual é de: R$%.2f\nQuanto deseja sacar (se for número quebrado separe com um ponto ao invés da vírgula): ", contaBancaria);
        scanf(" %f", &saque);

        if (saque > 0) {
            contaBancaria -= saque;
            saqueRodando = false;
            sistemaRodando = false;
            printf("\nApós o saque de %.2f, sua conta possui atualmente um saldo de: R$%.2f", saque, contaBancaria);
       } else {
            printf("\nO valor para saque deve ser maior que R$0.00. Deseja tentar novamente? [0] Não | [1] Sim: ");
            scanf(" %c", &opcao);

            if (strcmp(opcao, "0") == 0) {
                saqueRodando = false;
                sistemaRodando = false;
                printf("\nSaque cancelado.");
            }
        }
    }
}

void fazerDeposito() {
    while (depositoRodando) {
        printf("\nA opção de saque foi travada por conta do seu saldo atual: R$%.2f. Deseja realizar um depósito? [0] Não | [1] Sim: ", contaBancaria);
        scanf(" %c", &opcao);

        if (strcmp(opcao, "1") == 0) {
            printf("\nInforme o valor do depósito (se for número quebrado separe com um ponto ao invés da vírgula): ");
            scanf(" %f", &deposito);

            if (deposito > 0) {
                contaBancaria += deposito;
                depositoRodando = false;
            } else {
                printf("\nO valor para depósito deve ser maior que R$0.00. Tente novamente.");
            }
        } else {
            depositoRodando = false;
            printf("\nDepósito cancelado.");
        }
    }
}

int main() {
    while (sistemaRodando) {
        printf("Bem-vindo(a) ao Saque-Seguro\nGostaria de realizar um saque? [0] Não | [1] Sim: ");
        scanf(" %c", &opcao);

        if (strcmp(opcao, "1") == 0) {
            if (contaBancaria <= 0 && saqueAutorizado == true) {
                fazerDeposito();

                if (contaBancaria <= 0) {
                    saqueAutorizado = false;
                    sistemaRodando = false;
                } else {
                    fazerSaque();
                }

            } else if (contaBancaria <= 0 && saqueAutorizado == false) {
                sistemaRodando = false;
            } else {
                fazerSaque();
            }
        } else {
            sistemaRodando = false;
        }
    }

    printf("\nFinalizando o sistema, volte sempre!");

}