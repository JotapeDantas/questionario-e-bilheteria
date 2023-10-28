#include <stdio.h>
#include <stdlib.h>


int main() {
	int resposta = 1;
    int opcao, modalidade;
    int num;
    int escolha_anterior= 0;
    int modalidade1, modalidade2, modalidade3, modalidade4, modalidade5;
    int modalidade6, modalidade7, modalidade8, modalidade9, modalidade10;
   
do{
        // Interface principal
        printf("Seja bem-vindo ao questionario\n\n");
        printf("Aperte [1] para continuar\n\n");
        scanf("%d", &modalidade);
        printf("\n");
  switch (modalidade){
	
	 
               
 

case 1:

if (modalidade1){
        printf("pergunta 1\n");
        printf("Quando e onde Alberto Santos-Dumont nasceu?\n ");
        printf("[1] 20 de julho de 1873, Paris, França\n");
        printf("[2] 15 de agosto de 1888, Rio de Janeiro, Brasil\n");
        printf("[3] 30 de junho de 1869, Lisboa, Portugal\n");
        printf("[4] 25 de dezembro de 1903, Kitty Hawk, EUA\n");
        scanf("%d", &modalidade1);
}
case 2:
	
if (modalidade2 ){
        printf("pergunta 2\n");
        printf("Qual foi a primeira aeronave bem-sucedida de Santos-Dumont?\n: ");
        printf("[1] 14-bis\n");
        printf("[2] Spirit of St. Louis\n");
        printf("[3] Wright Flyer\n");
        printf("[4] Blériot XI\n");
        scanf("%d", &modalidade2);
        
        

}

case 3:
	
if (modalidade3 ){
        printf("pergunta 3\n");
        printf("Em que ano Santos-Dumont voou o 14-bis no primeiro voo homologado do mundo?\n: ");
        printf("[1] 1903\n");
        printf("[2] 1906\n");
        printf("[3] 1907\n");
        printf("[4] 1910\n");
        scanf("%d", &modalidade3);
        
        

}

case 4:
	
if (modalidade4){
        printf("pergunta 4\n");
        printf("Qual foi o prêmio que Santos-Dumont ganhou ao completar o primeiro voo público bem-sucedido em Paris?\n: ");
        printf("[1] Prêmio Pulitzer\n");
        printf("[2] Prêmio Nobel da Física\n");
        printf("[3] Prêmio Deutsch de la Meurthe\n");
        printf("[4] Prêmio da Academia de Ciências da França\n");
        scanf("%d", &modalidade4);

}


case 5:	
if (modalidade5){
		printf("pergunta 5\n");
        printf("Qual foi o apelido dado a Santos-Dumont pelos franceses após seu sucesso na aviação?\n: ");
        printf("[1]  O Mágico dos Céus\n");
        printf("[2]  O Pai da Aviação\n");
        printf("[3]  O Poeta dos Ares\n");
        printf("[4]  O Rei das Alturas\n");
        scanf("%d", &modalidade5);
    
}
case 6:	
if (modalidade6){
        printf("pergunta 6\n");
        printf("Qual aeronave foi a primeira a decolar, voar por uma distância determinada e pousar sem ajuda externa, de acordo com os padrões da Federação Aeronáutica Internacional?\n\n");
        printf("[1] 14-bis\n");           
        printf("[2] Wright Flyer\n");       
        printf("[3] Blériot XI\n");        
        printf("[4] Spirit of St. Louis\n");
        scanf("%d", &modalidade6);     }
            
case 7:	
if (modalidade7){
        printf("pergunta 7\n");
        printf("O que levou Santos-Dumont a abandonar a aviação?\n\n");
        printf("[1] O medo de que suas invenções fossem usadas para fins de guerra\n");           
        printf("[2] Problemas de saúde\n");       
        printf("[3] Falta de recursos financeiros\n");        
        printf("[4] Conflitos com outros pioneiros da aviação\n");
        scanf("%d", &modalidade7);  }
            
case 8:	
if (modalidade8){
        printf("pergunta 8\n");
        printf("O que Santos-Dumont afirmou ser mais importante do que a invenção do avião?\n\n");
        printf("[1] O desenvolvimento do dirigível\n");           
        printf("[2] A conquista do espaço\n");       
        printf("[3]  A paz mundial\n");        
        printf("[4] O desenvolvimento do helicóptero\n");
        scanf("%d", &modalidade8);   } 
case 9:	
if (modalidade9){
        printf("pergunta 9\n");
        printf("Qual cidade brasileira abriga o Museu Casa de Santos Dumont, onde muitos de seus objetos pessoais e experimentos estão em exposição?\n\n");
        printf("[1] Belo Horizonte\n");           
        printf("[2] São Paulo\n");       
        printf("[3] Petrópolis\n");        
        printf("[4] Brasília\n");
        scanf("%d", &modalidade9);    } 			
case 10:	
if (modalidade10){
        printf("pergunta 10\n");
        printf("Como Santos-Dumont é lembrado atualmente no Brasil e em outros lugares do mundo?\n\n");
        printf("[1] Como um pioneiro da aviação internacionalmente reconhecido\n");           
        printf("[2] Como um político de destaque\n");       
        printf("[3] Como um autor renomado\n");        
        printf("[4] Como um renomado cientista de foguetes\n");
        scanf("%d", &modalidade10);    } 			
			           
 }
                 {
                printf("muito obrigado\n");
                if (modalidade)
                printf("\nsua resposta pergunta 1\n""%d", modalidade1);
                printf("\nsua resposta pergunta 2\n""%d", modalidade2);
                printf("\nsua resposta pergunta 3\n""%d", modalidade3);
                printf("\nsua resposta pergunta 4\n""%d", modalidade4);
                printf("\nsua resposta pergunta 5\n""%d", modalidade5);
                printf("\nsua resposta pergunta 6\n""%d", modalidade6);
                printf("\nsua resposta pergunta 7\n""%d", modalidade7);
                printf("\nsua resposta pergunta 8\n""%d", modalidade8);
                printf("\nsua resposta pergunta 9\n""%d", modalidade9);
                printf("\nsua resposta pergunta 10\n""%d", modalidade10);
                 printf ("\n");
                }
                {
                        {
                            
                            printf("Avaliacao do Museu\n\n");
                            printf("[1]Muito boa \n");
                            printf("[2]Boa \n");
                            printf("[3]Media \n");
                            printf("[4]Baixa \n");
                            printf("[5]Sair\n\n");
                            printf("Escolha uma das opcoes: ");
                            scanf("%d", &opcao);
                            printf("\n");
                            switch(opcao){

                            case 5:
                            printf("Muito obrigado, tenha um bom dia.\n");
                            return 0;
                            default:
                            printf("Opcao invalida, Tente novamente.\n\n");
                            break;

                            case 1:
                             if (opcao == 1){
                            printf("[%d]""---sua avaliacao sobre a obra e muito boa!!!  ", opcao);
                            printf ("\n");
                            printf("Muito obrigado, tenha um bom dia.");}
                            case 2:
                             if (opcao == 2){
                            printf("[%d]""---sua avaliacao sobre a obra e boa!  ", opcao);
                            printf ("\n");
                            printf("Muito obrigado, tenha um bom dia.");}
                            case 3:
                             if (opcao == 3){
                            printf("[%d]""---sua avaliacao sobre a obra e media.  ", opcao);
                            printf ("\n");
                            printf("Muito obrigado, tenha um bom dia.");}
                            case 4:
                             if (opcao == 4){
                            printf("[%d]""---sua avaliacao sobre a obra foi ruim. ", opcao);
                            printf ("\n");
                            printf("Muito obrigado, tenha um bom dia.");}

}
        
                                FILE *fptr; // o arquivo sai na pasta output 
                                fptr = fopen ("avaliacao.csv","w");
                                while (EOF != fscanf(fptr, "%[^\n]\n, S"));

}
                }
      if (num != 4 && num != 5) {

                
                escolha_anterior = num; // Atualize a escolha anterior
                printf("\n\n");
                printf("1 = Confirmar \n\n--> ");
                scanf("%d", &resposta);
                printf("\n");
                
            }
            
        } while (modalidade != 0);
   
    return 0;
}