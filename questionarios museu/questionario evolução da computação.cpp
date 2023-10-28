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
        printf("Quais eram os primeiros computadores e em que periodo histórico surgiram?\n\n");
        printf("[1] Maquinas analogicas - seculo XVIII\n");
        printf("[2] Abacos - seculo V a.C.\n");
        printf("[3] ENIAC - decada de 1940\n");
        printf("[4] Relógios de sol - seculo XIII\n");
        scanf("%d", &modalidade1);
}
case 2:
	
if (modalidade2 ){
        printf("pergunta 2\n");
        printf("Quais foram os principais avanços tecnológicos que marcaram a primeira geracao de computadores?\n\n");
        printf("[1] Válvulas eletronicas e linguagem de maquina\n");
        printf("[2] Transistores e programacao em Assembly\n");
        printf("[3] Integracao de circuitos e linguagens de alto nível\n");
        printf("[4] Uso de cartoes perfurados e computadores pessoais\n");
        scanf("%d", &modalidade2);
        
        

}

case 3:
	
if (modalidade3 ){
        printf("pergunta 3\n");
        printf("O que diferencia a memória RAM da memória ROM em um computador?\n\n");
        printf("[1] RAM e volatil, ROM e nao volátil\n");
        printf("[2] RAM e somente para leitura, ROM e para escrita e leitura\n");
        printf("[3] RAM e permanente, ROM e temporaria\n");
        printf("[4] RAM e mais lenta que ROM\n");
        scanf("%d", &modalidade3);
        
        

}

case 4:
	
if (modalidade4){
        printf("pergunta 4\n");
        printf("Quais foram as contribuições fundamentais de personalidades como Alan Turing e Charles Babbage para o desenvolvimento da computação?\n\n");
        printf("[1] Babbage inventou o primeiro computador eletronico, e Turing desenvolveu o primeiro algoritmo\n");
        printf("[2] Babbage propos a máquina analitica, e Turing contribuiu para a teoria da computação e decifração de codigos\n");
        printf("[3] Babbage criou o primeiro sistema operacional, e Turing projetou o primeiro chip de computador\n");
        printf("[4] Babbage desenvolveu a teoria da inteligencia artificial, e Turing criou a teoria dos conjuntos computacionais\n");
        scanf("%d", &modalidade4);

}


case 5:	
if (modalidade5){
		printf("pergunta 5\n");
        printf("Explique a diferença entre o software e o hardware de um computador.\n\n");
        printf("[1]  O hardware sao os programas, e o software sao os componentes fisicos\n");
        printf("[2]  O hardware sao as instrucoes de uso, e o software sao os dispositivos perifericos\n");
        printf("[3]  O software sao os aplicativos, e o hardware sao os sistemas operacionais\n");
        printf("[4]  O hardware sao os componentes fisicos, e o software sao os programas e dados\n");
        scanf("%d", &modalidade5);
    
}
case 6:	
if (modalidade6){
        printf("pergunta 6\n");
        printf("Quais foram as inovacoes que permitiram a redução do tamanho e o aumento do poder de processamento dos computadores ao longo do tempo?\n\n");
        printf("[1] Uso de valvulas eletronicas e aumento do tamanho\n");           
        printf("[2] Desenvolvimento de circuitos integrados e miniaturizacao dos componentes\n");       
        printf("[3] Aumento do tamanho e da capacidade de armazenamento\n");        
        printf("[4] Redução do tamanho, mas sem impacto no poder de processamento\n");
        scanf("%d", &modalidade6);     }
            
case 7:	
if (modalidade7){
        printf("pergunta 7\n");
        printf("O que é a Lei de Moore e qual é o seu impacto na evolução dos computadores?\n\n");
        printf("[1] O medo de que suas invencoes fossem usadas para fins de guerra\n");           
        printf("[2] Problemas de saude\n");       
        printf("[3] Falta de recursos financeiros\n");        
        printf("[4] Previsão da reducao da capacidade de armazenamento\n");
        scanf("%d", &modalidade7);  }
            
case 8:	
if (modalidade8){
        printf("pergunta 8\n");
        printf("Descreva as diferenças entre os computadores da era analógica e os da era digital.\n\n");
        printf("[1] Computadores analogicos usavam transistores, enquanto os digitais usavam valvulas\n");           
        printf("[2] Computadores analogicos lidavam com dados continuos, enquanto os digitais trabalham com dados discretos\n");       
        printf("[3] Computadores analogicos eram maiores e mais lentos que os digitais\n");        
        printf("[4] Computadores digitais eram usados apenas para calculos matematicos, ao passo que os analogicos tinham multiplas funcoes\n");
        scanf("%d", &modalidade8);   } 
case 9:	
if (modalidade9){
        printf("pergunta 9\n");
        printf("Como a inteligencia artificial influenciou a evolucao dos computadores e qual e o seu papel nos computadores modernos?\n\n");
        printf("[1] A inteligEncia artificial nao teve impacto nos avanços computacionais\n");           
        printf("[2] A inteligencia artificial permitiu a automação de tarefas e a criacao de sistemas autonomos\n");       
        printf("[3] A inteligencia artificial foi responsável pela invenção dos primeiros computadores\n");        
        printf("[4] A inteligencia artificial limitou a capacidade de processamento dos computadores modernos\n");
        scanf("%d", &modalidade9);    } 			
case 10:	
if (modalidade10){
        printf("pergunta 10\n");
        printf("Quais sao as perspectivas futuras para a evolucao dos computadores?\n\n");
        printf("[1] Reducao da capacidade de processamento e aumento dos custos\n");           
        printf("[2] Maior integracao com a biotecnologia e avancos na computacao quantica\n");       
        printf("[3] stagnacao tecnologica e desinteresse na inovacao computacional\n");        
        printf("[4] Aumento da capacidade de armazenamento, mas sem avancos na velocidade\n");
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