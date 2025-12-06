#include <stdio.h>
#include <stdbool.h>
#include <string.h> 
#include <locale.h>
#include <time.h>

bool sistemaRodando = true;
bool escolhendoLivroRodando = true;
bool escolhendoBoxRodando = true;
float valorDoLivro = 0.0;
float valorDoBox = 0.0;
float precoTotal = 0.0;
char opcao[10];
char livroEscolhido[100] = "Nenhum";
char boxEscolhido[100] = "Nenhum";

int regiaoSulPadrao = 30, regiaoSulPesado = 50;
int regiaoSudestePadrao = 25, regiaoSudestePesado = 45;
int regiaoNortePadrao = 35, regiaoNortePesado = 55;
int regiaoNordestePadrao = 40, regiaoNordestePesado = 60;
char *livrosNomes[] = {
    "O Hobbit", "A Casa do Dragão", "Era uma vez um coração partido", 
    "Hyperion", "Guerra do Velho", "O Exterminador"
};
float livrosPrecos[] = {50.00, 65.00, 45.00, 60.00, 45.00, 40.00};
char *boxesNomes[] = {
    "O Senhor dos Anéis", "Game Of Thrones", "Harry Potter", 
    "Duna", "Fundação", "Star Wars"
};
float boxesPrecos[] = {120.00, 150.00, 100.00, 200.00, 180.00, 130.00};

void comprarLivro() {
    escolhendoLivroRodando = true; 

    while(escolhendoLivroRodando) {
        printf("\nEscolha um livro abaixo:");
        printf("\n+---------------------------------------------------------+");
        printf("\n| 1 | O Hobbit                           | R$50,00 |"); 
        printf("\n| 2 | A Casa do Dragão                   | R$65,00 |");
        printf("\n| 3 | Era uma vez um coração partido     | R$45,00 |");
        printf("\n| 4 | Hyperion                           | R$60,00 |");
        printf("\n| 5 | Guerra do Velho                    | R$45,00 |");
        printf("\n| 6 | O Exterminador                     | R$40,00 |");
        printf("\n+---------------------------------------------------------+");
        printf("\nOpção de compra: ");
        scanf(" %s", opcao);

        if (strcmp(opcao, "1") == 0) {
            strcpy(livroEscolhido, livrosNomes[0]);
            valorDoLivro = livrosPrecos[0];     
            escolhendoLivroRodando = false;
        } 
        else if (strcmp(opcao, "2") == 0) {
            strcpy(livroEscolhido, livrosNomes[1]);
            valorDoLivro = livrosPrecos[1];
            escolhendoLivroRodando = false;
        } 
        else if (strcmp(opcao, "3") == 0) {
            strcpy(livroEscolhido, livrosNomes[2]);
            valorDoLivro = livrosPrecos[2];
            escolhendoLivroRodando = false;
        } 
        else if (strcmp(opcao, "4") == 0) {
            strcpy(livroEscolhido, livrosNomes[3]);
            valorDoLivro = livrosPrecos[3];
            escolhendoLivroRodando = false;
        } 
        else if (strcmp(opcao, "5") == 0) {
            strcpy(livroEscolhido, livrosNomes[4]);
            valorDoLivro = livrosPrecos[4];
            escolhendoLivroRodando = false;
        } 
        else if (strcmp(opcao, "6") == 0) {
            strcpy(livroEscolhido, livrosNomes[5]);
            valorDoLivro = livrosPrecos[5];
            escolhendoLivroRodando = false;
        } 
        else {
            printf("\nOpção inválida. Tente novamente.\n");
        }
        
        if (!escolhendoLivroRodando) {
            printf("\n>> Você selecionou o livro: %s de R$%.2f", livroEscolhido, valorDoLivro);
        }
    }
}

void comprarBox() {
    escolhendoBoxRodando = true;

    while(escolhendoBoxRodando) {
        printf("\nEscolha um Box de livros abaixo:");
        printf("\n+----------------------------------------------------------+");
        printf("\n| 1 | Box - O Senhor dos Anéis           | R$120,00 |"); 
        printf("\n| 2 | Box - Game Of Thrones              | R$150,00 |");
        printf("\n| 3 | Box - Harry Potter                 | R$100,00 |");
        printf("\n| 4 | Box - Duna                         | R$200,00 |");
        printf("\n| 5 | Box - Fundação                     | R$180,00 |");
        printf("\n| 6 | Box - Star Wars                    | R$130,00 |");
        printf("\n+----------------------------------------------------------+");
        printf("\nOpção de compra: ");
        scanf(" %s", opcao);

        if (strcmp(opcao, "1") == 0) {
            strcpy(boxEscolhido, boxesNomes[0]);
            valorDoBox = boxesPrecos[0]; 
            escolhendoBoxRodando = false;
        } else if (strcmp(opcao, "2") == 0) {
            strcpy(boxEscolhido, boxesNomes[1]);
            valorDoBox = boxesPrecos[1];
            escolhendoBoxRodando = false;
        } else if (strcmp(opcao, "3") == 0) {
            strcpy(boxEscolhido, boxesNomes[2]);
            valorDoBox = boxesPrecos[2];
            escolhendoBoxRodando = false;
        } else if (strcmp(opcao, "4") == 0) {
            strcpy(boxEscolhido, boxesNomes[3]);
            valorDoBox = boxesPrecos[3];
            escolhendoBoxRodando = false;
        } else if (strcmp(opcao, "5") == 0) {
            strcpy(boxEscolhido, boxesNomes[4]);
            valorDoBox = boxesPrecos[4];
            escolhendoBoxRodando = false;
        } else if (strcmp(opcao, "6") == 0) {
            strcpy(boxEscolhido, boxesNomes[5]);
            valorDoBox = boxesPrecos[5];
            escolhendoBoxRodando = false;
        } else {
            printf("\nOpção inválida. Tente novamente.\n");
        }

        if (!escolhendoBoxRodando) {
             printf("\n>> Você selecionou o box: %s de R$%.2f", boxEscolhido, valorDoBox);
        }
    }
}

void imprimirTempo() {
    time_t mytime;
    mytime = time(NULL);
    printf("\nData e hora da compra: %s", ctime(&mytime));
    printf("Data prevista de entrega: Entre 2-5 dias.");
}

void resumoCompraLivroEBox(char *regiao, int frete) {
    printf("\n--- RESUMO FINAL DA SUA COMPRA ---");
    printf("\nCódigo dos produtos: N493-FJD9-948D-9999");
    printf("\nNome dos produtos: %s + %s", livroEscolhido, boxEscolhido);
    printf("\nPeso do produto: 3Kg"); 
    printf("\nPreço do produto: R$%.2f + R$%.2f", valorDoLivro, valorDoBox);
    printf("\nLocal de entrega: %s", regiao);
    printf("\nPreço do frete: R$%d,00", frete);
    printf("\nPreço total da compra: R$%.2f", precoTotal);
    imprimirTempo();
}

void resumoCompraLivro(char *regiao, int frete) {
    printf("\n--- RESUMO FINAL DA SUA COMPRA ---");
    printf("\nCódigo do produto: L001-UUW5-948D-333"); 
    printf("\nNome do produto: %s", livroEscolhido);
    printf("\nPeso do produto: 0,5Kg"); 
    printf("\nPreço do produto: R$%.2f", valorDoLivro);
    printf("\nLocal de entrega: %s", regiao);
    printf("\nPreço do frete: R$%d,00", frete);
    printf("\nPreço total da compra: R$%.2f", precoTotal);
    imprimirTempo();
}

void resumoCompraBox(char *regiao, int frete) {
    printf("\n--- RESUMO FINAL DA SUA COMPRA ---");
    printf("\nCódigo do produto: Q920-PMH2-105C-555"); 
    printf("\nNome do produto: %s", boxEscolhido);
    printf("\nPeso do produto: 2,5Kg"); 
    printf("\nPreço do produto: R$%.2f", valorDoBox);
    printf("\nLocal de entrega: %s", regiao);
    printf("\nPreço do frete: R$%d,00", frete);
    printf("\nPreço total da compra: R$%.2f", precoTotal);
    imprimirTempo();
}

void finalizarCompra() {
    if (valorDoLivro <= 0 && valorDoBox <= 0) {
        printf("\nNenhum item no carrinho.");
        return;
    }

    printf("\n\nInforme sua região para entrega:\n[1] Sul | [2] Sudeste | [3] Norte | [4] Nordeste: ");
    scanf(" %s", opcao);

    char *nomeRegiao = "";
    int frete = 0;
    
    bool temBox = (valorDoBox > 0);

    if (strcmp(opcao, "1") == 0) {
        nomeRegiao = "Sul";
        if(temBox) frete = regiaoSulPesado; else frete = regiaoSulPadrao;
    } 
    else if (strcmp(opcao, "2") == 0) {
        nomeRegiao = "Sudeste";
        if(temBox) frete = regiaoSudestePesado; else frete = regiaoSudestePadrao;
    } 
    else if (strcmp(opcao, "3") == 0) {
        nomeRegiao = "Norte";
        if(temBox) frete = regiaoNortePesado; else frete = regiaoNortePadrao;
    } 
    else if (strcmp(opcao, "4") == 0) {
        nomeRegiao = "Nordeste";
        if(temBox) frete = regiaoNordestePesado; else frete = regiaoNordestePadrao;
    } 
    else {
        printf("\nRegião inválida!");
        return;
    }

    precoTotal = valorDoLivro + valorDoBox + frete;

    if (valorDoLivro > 0 && valorDoBox > 0) {
        resumoCompraLivroEBox(nomeRegiao, frete);
    } else if (valorDoLivro > 0) {
        resumoCompraLivro(nomeRegiao, frete);
    } else {
        resumoCompraBox(nomeRegiao, frete);
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); 
    
    while(sistemaRodando) {
        valorDoLivro = 0.0;
        valorDoBox = 0.0;
        strcpy(livroEscolhido, "");
        strcpy(boxEscolhido, "");

        printf("\n==============================================");
        printf("\nBem-vindo(a) ao Fantatífica");
        printf("\n[0] Sair | [1] Comprar Livro | [2] Comprar Box: ");
        scanf(" %s", opcao);

        if (strcmp(opcao, "0") == 0) {
            printf("\nFinalizando o sistema...");
            sistemaRodando = false;

        } else if (strcmp(opcao, "1") == 0) {
            comprarLivro();
            
            printf("\nDeseja comprar também um Box? [1] Sim | [0] Não (Finalizar): ");
            scanf(" %s", opcao);

            if (strcmp(opcao, "1") == 0) {
                comprarBox();
            }
            finalizarCompra();

        } else if (strcmp(opcao, "2") == 0) {
            comprarBox();

            printf("\nDeseja comprar também um Livro avulso? [1] Sim | [0] Não (Finalizar): ");
            scanf(" %s", opcao);

            if (strcmp(opcao, "1") == 0) {
                comprarLivro();
            }
            finalizarCompra();

        } else {
            printf("\nOpção inválida.");
        }
    }

    return 0;
}