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
        printf("pergunta 1\n\n");
        printf("Onde serao realizados os Jogos Olimpicos de Verao de 2024?\n\n");
        printf("[1] Paris, Franca\n");
        printf("[2] Rio de Janeiro, Brasil\n");
        printf("[3] Tóquio, Japao\n");
        printf("[4] Los Angeles, EUA\n");
        scanf("%d", &modalidade1);
}
case 2:
	
if (modalidade2 ){
        printf("pergunta 2\n\n");
        printf("Qual e o nome oficial do evento esportivo que incluira os Jogos Olimpicos de 2024?\n\n");
        printf("[1] Jogos Olimpicos de Verao 2024\n");
        printf("[2] Jogos Olimpicos Paris 2024\n");
        printf("[3] Paris 2024: Celebracao Esportiva\n");
        printf("[4] Olimpiadas de Paris\n");
        scanf("%d", &modalidade2);
        
        

}

case 3:
	
if (modalidade3 ){
        printf("pergunta 3\n\n");
        printf("Em que ano Paris havia sediado os Jogos Olimpicos de Verão anteriormente?\n\n");
        printf("[1] 1968\n");
        printf("[2] 1976\n");
        printf("[3] 1988\n");
        printf("[4] 2000\n");
        scanf("%d", &modalidade3);
        
        

}

case 4:
	
if (modalidade4){
        printf("pergunta 4\n\n");
        printf("Qual e o lema oficial dos Jogos Olimpicos de Paris 2024?\n\n");
        printf("[1] Unidos Pelo Esporte\n");
        printf("[2] Mais Rapido, Mais Alto, Mais Forte\n");
        printf("[3] Amizade, Respeito, Excelencia\n");
        printf("[4] Legado Olimpico\n");
        scanf("%d", &modalidade4);

}


case 5:	
if (modalidade5){
		printf("pergunta 5\n\n");
        printf("Quantos esportes diferentes estao programados para serem disputados nos Jogos Olimpicos de 2024?\n\n");
        printf("[1]  28\n");
        printf("[2]  32\n");
        printf("[3]  36\n");
        printf("[4]  40\n");
        scanf("%d", &modalidade5);
    
}
case 6:	
if (modalidade6){
        printf("pergunta 6\n\n");
        printf("Alem de Paris, em que outra cidade francesa alguns eventos olimpicos serao realizados?\n\n");
        printf("[1] LYON\n");           
        printf("[2] Bordeaux\n");       
        printf("[3] Marselha\n");        
        printf("[4] Cannes\n");
        scanf("%d", &modalidade6);     }
            
case 7:	
if (modalidade7){
        printf("pergunta 7\n\n");
        printf("Quem sera o país anfitriao dos Jogos Olimpicos de Inverno de 2024?\n\n");
        printf("[1] Suíça\n");           
        printf("[2] Itália\n");       
        printf("[3] França\n");        
        printf("[4] Áustria\n");
        scanf("%d", &modalidade7);  }
            
case 8:	
if (modalidade8){
        printf("pergunta 8\n\n");
        printf("O que Santos-Dumont afirmou ser mais importante do que a invenção do aviao?\n\n");
        printf("[1] O desenvolvimento do dirigivel\n");           
        printf("[2] A conquista do espaco\n");       
        printf("[3]  A paz mundial\n");        
        printf("[4] O desenvolvimento do helicoptero\n");
        scanf("%d", &modalidade8);   } 
case 9:	
if (modalidade9){
        printf("pergunta 9\n\n");
        printf("Qual e o local iconico que sera usado como plano de fundo para as competicoes de triatlo nos Jogos de Paris 2024?\n\n");
        printf("[1] A Torre Eiffel\n");           
        printf("[2] O Museu do Louvre\n");       
        printf("[3] O Rio Sena\n");        
        printf("[4] O Palácio de Versalhes\n");
        scanf("%d", &modalidade9);    } 			
case 10:	
if (modalidade10){
        printf("pergunta 10\n");
        printf("Qual esporte fará sua estreia olimpica nos Jogos de Paris 2024?\n\n");
        printf("[1] Escalada esportiva\n");           
        printf("[2] Skate\n");       
        printf("[3] Softbol\n");        
        printf("[4] Futebol de areia\n");
        scanf("%d", &modalidade10);    } 			
			           
 }
                 {
                printf("muito obrigado!!!\n");
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