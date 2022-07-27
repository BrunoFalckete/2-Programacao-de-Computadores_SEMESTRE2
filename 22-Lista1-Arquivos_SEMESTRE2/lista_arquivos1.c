//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//27/05/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

void one();
void two();
void three();

int main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int escolha, contador_geral = 1;

    while(contador_geral == 1){

        printf("1 - Abra o arquivo de entrada e apresente na tela todos os dados do arquivo.\n\n");

        printf("2 - Peça para o usuário uma idade e apresente apenas as pessoas com idade inferior à fornecida.\n\n");

        printf("3 - Gere dois arquivos de saída, a partir dos dados do arquivo de entrada. No primeiro adicione todas as pessoas do gênero masculino e no segundo todas as pessoas do gênero feminino. Imprima na tela todos os dados dos dois arquivos gerados.\n\n");

        printf("4 - SAIR\n\n");

        printf("Escolha: ");
            scanf("%d", &escolha);

        switch(escolha){

            case 1:
                one();
            break;
            
            case 2:
                two();
            break;

            case 3:
                three();
            break;

            case 4:
                contador_geral++;
            break;

            default:
                printf("\nOpçao Invalida !!\n\n");
        }
    }

    return 0;
}

void one(){ 

    int id;
    char sexo;
    char nome[30];
    char sobrenome[30];
    int idade;

    FILE *arq;

        arq = fopen("pessoa1.txt", "r");

        if (arq == NULL){
            printf("Erro ao abrir o arquivo!");
            return 1;
        }


        while (fscanf(arq, "%d ", &id) != EOF){

            fscanf(arq, "%c ", &sexo);
            fscanf(arq, "%s ", &nome); 
            fscanf(arq, "%s ", &sobrenome);
            fscanf(arq, "%d ", &idade);

            printf("ID: %d \n", id);
            printf("Sexo: %c \n", sexo);
            printf("Nome: %s %s \n", nome, sobrenome);
            printf("Idade: %d \n", idade);
            printf("\n\n");
        }

        fclose(arq); 
}

void two(){

    int id;
    char sexo;
    char nome[30];
    char sobrenome[30];
    int idade;

    int entrada = 0;

    FILE *arq;

        arq = fopen("pessoa1.txt", "r");

        if (arq == NULL){
            printf("Erro ao abrir o arquivo!");
            return 1;
        }

        printf("Entre com a idade: ");
            scanf("%d", &entrada);

        printf("\n");

        while (fscanf(arq, "%d ", &id) != EOF){

            fscanf(arq, "%c ", &sexo);
            fscanf(arq, "%s ", &nome); 
            fscanf(arq, "%s ", &sobrenome);
            fscanf(arq, "%d ", &idade);

            if(entrada > idade){

                printf("ID: %d \n", id);
                printf("Sexo: %c \n", sexo);
                printf("Nome: %s %s \n", nome, sobrenome);
                printf("Idade: %d \n", idade);
                printf("\n\n");

            } else {

                printf("Nao tem nenhum pessoa com idade menor !!\n\n");
                break;

            }
        }

        fclose(arq); 
}

void three(){

    int id;
    char sexo;
    char nome[30];
    char sobrenome[30];
    int idade;

    int entrada = 0;

    FILE *arq, *arqF, *arqM;

        arq = fopen("pessoa1.txt", "r");

        if (arq == NULL){
            printf("Erro ao abrir o arquivo!\n");
            return 1;
        }

        while (fscanf(arq, "%d ", &id) != EOF){

            fscanf(arq, "%c ", &sexo);
            fscanf(arq, "%s ", &nome); 
            fscanf(arq, "%s ", &sobrenome);
            fscanf(arq, "%d ", &idade);

            if(sexo == 'F'){

                arqF = fopen("feminino.txt", "a");
                if (arqF == NULL){
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }

                fprintf(arqF, "%d ", id);
                fprintf(arqF, "%c ", sexo);
                fprintf(arqF, "%s ", nome);
                fprintf(arqF, "%s ", sobrenome);
                fprintf(arqF, "%d \n", idade);

                fclose(arqF);

            }else if(sexo == 'M'){

                arqM = fopen("masculino.txt", "a");
                if (arqM == NULL){
                    printf("Erro ao abrir o arquivo!\n");
                    return 1;
                }

                fprintf(arqM, "%d ", id);
                fprintf(arqM, "%c ", sexo);
                fprintf(arqM, "%s ", nome);
                fprintf(arqM, "%s ", sobrenome);
                fprintf(arqM, "%d \n", idade);

                fclose(arqM);
            }
        }
        fclose(arq);

        //IMPRIMINDO ARQUIVO DO SEXO FEMININO
        printf("Pessoas do Sexo: FEMININO\n");

        arq = fopen("feminino.txt", "r");
        if (arq == NULL){
            printf("Erro ao abrir o arquivo!\n");
            return 1;
        }

        while (fscanf(arq, "%d ", &id) != EOF){

            fscanf(arq, "%c ", &sexo);
            fscanf(arq, "%s ", &nome); 
            fscanf(arq, "%s ", &sobrenome);
            fscanf(arq, "%d ", &idade);

            printf("ID: %d \n", id);
            printf("ID: %c \n", sexo);
            printf("Nome: %s %s \n", nome, sobrenome);
            printf("Idade: %d \n", idade);
            printf("\n\n");
        }
        fclose(arq); 


        //IMPRIMINDO ARQUIVO DO SEXO MASCULINO
        printf("Pessoas do Sexo: MASCULINO\n");

        arq = fopen("masculino.txt", "r");
        if (arq == NULL){
            printf("Erro ao abrir o arquivo!\n");
            return 1;
        }

        while (fscanf(arq, "%d ", &id) != EOF){

            fscanf(arq, "%c ", &sexo);
            fscanf(arq, "%s ", &nome); 
            fscanf(arq, "%s ", &sobrenome);
            fscanf(arq, "%d ", &idade);

            printf("ID: %d \n", id);
            printf("ID: %c \n", sexo);
            printf("Nome: %s %s \n", nome, sobrenome);
            printf("Idade: %d \n", idade);
            printf("\n\n");
        }
        fclose(arq); 
}