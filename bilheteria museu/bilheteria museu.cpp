#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int resposta = 1;
    int opcao, opc, quantidade, modalidade, forma_pagamento;
    float valor_ticket = 16.00, total, meia_entrada = 8.00,insento = 0.00;
    int num;
    int escolha_anterior= 0;
    int soma;

    do {
        // Interface principal
        printf("Seja bem-vindo ao museu multitematico\n\n");
        printf("Obras em exposicao\n\n");
        printf("Por favor, informe qual ticket voce ira comprar\n\n");
        printf("[1] 100 anos da arte moderna\n");           
        printf("[2] 150 anos Santos Dumont\n");       
        printf("[3] Jogos olimpicos de Paris 2024\n");        
        printf("[4] Tema a definir\n");
        printf("[5] Sair\n\n");
        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao, &opc);
        printf("\n");
switch(opcao){

                

                case 5:
                // Sair do programa
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opçao invalida. Tente novamente.\n\n");
                break;
case 1:
case 2:
case 3:
case 4:
    if (opcao == 1,2,3,4){
        printf("\nEscolha a modalidade de ticket: ");
        printf("\n\n[1] Inteiro\n[2] Meia Entrada\n[3] Insento\n: ");
        scanf("%d", &modalidade);

        if (modalidade == 1){

            total = valor_ticket;
            printf("\nValor total: R$ %.2f\n\n", total);
        } else if (modalidade == 2){
            total = meia_entrada;
            printf("\nValor total: R$ %.2f\n\n", total);
        } else if (modalidade == 3){
            total = insento;
            printf("\nValor total: R$ %.2f\n\n", total);
            printf("Gerando Ticket aguarde...");
        }
    }
    }



        int resposta = 1; // Inicialize resposta para evitar loops infinitos

        // Menu de forma de pagamento
        do {
            printf("Escolha a forma de pagamento\n\n");
            printf("[1] Debito\n");
            printf("[2] Credito\n");
            printf("[3] Dinheiro\n");
            
            printf("[4] Voltar\n\n");
            printf("Digite a opcao desejada: ");
            scanf("%d", &num);
            printf("\n");

            switch (num) {
                case 1:
                    printf("Voce escolheu Debito.\n\n");
                    break;
                case 2:
                    printf("Voce escolheu Credito.\n\n");
                    break;
                case 3:
                    printf("Voce escolheu Dinheiro.\n\n");
                    break;
                case 4:
                    printf("Continuando sem voltar ao menu anterior...\n\n");
                    resposta = 1; // Continuar sem voltar
                    break;
                default:
                    printf("Opção inválida. Tente novamente.\n\n");
                    break;
            }
                FILE *fptr; // o arquivo sai na pasta output 
                fptr = fopen ("arqv.csv","w");
                while (EOF != fscanf(fptr, "%[^\n]\n, S"));
                srand(time(NULL));

                // Gera e imprime 5 números aleatórios
                for (int i = 0; i < 1; i++) {
                int numero_aleatorio = rand();
            
                printf("seu ticket: %d\n", numero_aleatorio);
                if (opcao == 1, 2, 3 , 4 )
                printf("tema escolhido   ""%d", opcao);
                 printf ("\n");
                
                
                }

            if (num != 4 && num != 5) {
                
                escolha_anterior = num; // Atualize a escolha anterior
                printf("Confirmar pagamento\n\n");
                printf("1 = Confirmar | 2 = Cencelar\n\n--> ");
                scanf("%d", &resposta);
                printf("\n");
                
            }
            
        } while (resposta != 1);
    } while (opcao != 0);

    return 0;
}