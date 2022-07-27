//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//31/05/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//INCLUINDO AS BIBLIOTECAS NO CODIGO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <dirent.h>


//DECLARACAO DAS FUNCOES E PROCEDIMENTOS

//PROFESSOR
void professor();
    void cadastro();
    void login();
        void sessao(char* cpf);
            void cadastroUC(char* cpf);
                int geraID();
            void cadastroEstudante();
            void cadastroTurma();
                int consultaEstudanteCPF(char* cpfEstudante);
            void relatorioTurma();
//DECLARACAO DOS STRUCTS
struct professor{
    char email[100];
    char senha[30];
    char nome[50];
    char sobrenome[50];
    char cpf[20];
};
typedef struct professor Prof;//APELIDO DA STRUCT

struct unidadeCurricular{
    int id;
    char nome[30];
    int semestre;
    char turno[20];
    int cargaHoraria;
    int quantidadeEstudante;
    char cpfProf[20];
};
typedef struct unidadeCurricular UC;//APELIDO DA STRUCT

struct estudante{
    char cpf[20];
    char nome[50];
    char sobrenome[50];
    char ra[20];
};
typedef struct estudante Estudante;//APELIDO DA STRUCT

struct turma{
    int idUC;
    int quantidadeEstudante;
    char cpfEstudante[20];
    char nome[100];
};
typedef struct turma Turma;//APELIDO DA STRUCT


//SISTEMA PRINCIPAL 
int main(){

    //DEFININDO A LOCALIDADE
    setlocale(LC_ALL, "portuguese-brazilian");
    //DECLARACAO DE VARIAVEIS GLOBAIS
    int escolha, contador_geral = 1;

    //LACO DE REPETICAO INFINTO ATE SELECAO DA OPCAO QUE ATUALIZA O VALOR DA VARIAVEL
    while(contador_geral == 1){

        //LIMPANDO OS CODIGOS ACIMA
        system("cls"); 

        //MENU DE SELECAO
        printf("\t-----SISTEMA DE REGISTROS-----\n\n");
        printf("\t------------------------------\n");
        printf("\t1 - Area do Professor\n");
        printf("\t0 - SAIR\n");
        printf("\t------------------------------\n\n");

        //ENTRADA DO VALOR DE SELECAO
        printf("Escolha: ");
            scanf("%d", &escolha);

        switch(escolha){
            case 1:
                //CHAMADA DE FUNCAO
                professor();
            break;

            case 0:
                //ATUALIZANDO VALOR DA VARIAVEL PARA SAIDA DO LACO
                contador_geral++;
            break;

            default:
            //MENSAGEM DE ERRO CASO ENTRADA SEJE INVALIDA
                printf("\nOpcao Invalida !!\n\n");
        }
    }
    //RETORNO DA FUNCAO MAIN
    return 0;
}

//FUNCOES PRIMARIAS
void professor(){

    //DECLARACAO DE VARIAVEIS LOCAIS
    char valida[100];
    int contador = 1, escolha;

    //LACO DE REPETICAO INFINTO ATE SELECAO DA OPCAO QUE ATUALIZA O VALOR DA VARIAVEL
    while(contador == 1){

        //LIMPANDO OS CODIGOS ACIMA
        system("cls"); 

        //MENU DE SELECAO
        printf("\t-----SISTEMA DE REGISTROS-----\n\n");
        printf("\t-------AREA DO PROFESSOR------\n");
        printf("\t------------------------------\n");
        printf("\t1 - Cadastro\n");
        printf("\t2 - Login\n");
        printf("\t0 - VOLTAR\n");
        printf("\t------------------------------\n\n");

        //ENTRADA DO VALOR DE SELECAO
        printf("Escolha: ");
            scanf("%d", &escolha);

        //ESTRUTURAS DE ESCOLHAS
        switch(escolha){
            case 1:
                //CHAMADA DE FUNCAO
                cadastro();
            break;
            
            case 2:
                //CHAMADA DE FUNCAO
                login();
            break;

            case 0:
                //ATUALIZANDO VALOR DA VARIAVEL PARA SAIDA DO LACO
                contador++;
            break;

            default:
                //MENSAGEM DE ERRO CASO ENTRADA SEJE INVALIDA
                printf("\nOpcao Invalida !!\n\n");
        }
    }
}

    void cadastro(){

        //LIMPANDO OS CODIGOS ACIMA
        system("cls"); 

        //CABECARIO DO SISTEMA
        printf("\t-----SISTEMA DE REGISTROS-----\n\n");
        printf("\t----CADASTRO DE PROFESSOR-----\n");
        printf("\t------------------------------\n");

        Prof *novo;//NOVO É A VARIAVEL DO TIPO PROFESSOR
        novo = (Prof*)malloc(sizeof(Prof)); //ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT PROFESSOR

        //MENSAGEM SOLICITANDO ENTRADA DOS DADOS
        printf("Entre com os dados:\n\n");

        //LIMPANDO CACHE DO TECLADO
        fflush(stdin);

        //ENTRADA DOS DADOS
        printf("Nome: ");
            scanf("%s", &novo -> nome);// "->" ANOTACAO DE ACESSO AO PONTEIRO
        printf("Sobrenome: ");
            scanf("%s", &novo -> sobrenome);
        printf("CPF(somente numeros): ");
            scanf("%s", &novo -> cpf);
        printf("Email: ");
            scanf("%s", &novo -> email);
        printf("Senha: ");
            scanf("%s", &novo -> senha);
            

        FILE *arq;//ARQ VARIAVEL DO TIPO FILE
        arq = fopen("professores.txt", "a"); //ABERTURA DO ARQUIVO MODO A(APPEND) ESCRITA DEPOIS DO \N

            //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
            if (arq == NULL){ 
                printf("Erro ao abrir o arquivo!\n"); 
                return 1;
            }

            //ARMAZENANDO AS VARIAVEIS NO ARQUIVO
            fprintf(arq, "%s ", novo -> cpf);
            fprintf(arq, "%s ", novo -> nome);
            fprintf(arq, "%s ", novo -> sobrenome);
            fprintf(arq, "%s ", novo -> email);
            fprintf(arq, "%s\n", novo -> senha);

        //FECHANDO O ARQUIVO
        fclose(arq);

        //MENSAGEM DE SUACESSO DO CADASTRO
        printf("Professor: %s, Cadastrado !", novo -> nome);
    }

    void login(){

        //DECLARACAO DE VARIAVEIS LOCAIS
        char email[100];
        char senha[30];
        
        Prof *consulta;//CONSULTA VARIAVEL DO TIPO PROFESSOR
        consulta = (Prof*)malloc(sizeof(Prof)); //ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT PROFESSOR

        //LIMPANDO OS CODIGOS ACIMA
        system("cls");

        //CABECARIO DO SISTEMA
        printf("\t-----SISTEMA DE REGISTROS-----\n\n");
        printf("\t------LOGIN DE PROFESSOR------\n");
        printf("\t------------------------------\n");

        //LIMPANDO CACHE DO TECLADO
        fflush(stdin);

        //ENTRADA DE DADOS
        printf("\nEmail: ");
            scanf("%s", &email);
        printf("Senha: ");
            scanf("%s", &senha);


        FILE *arq;//ARQ VARIAVEL DO TIPO FILE
        arq = fopen("professores.txt", "r");//ABERTURA DO ARQUIVO MODO R(READ) LEITURA

            //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
            if (arq == NULL){
                printf("Erro ao abrir o arquivo!\n");
                return;
            }

            //LACO DE REPETICAO PARA LEITURA DO ARQUIVO ATE O FIM
            while (fscanf(arq, "%s ", &consulta -> cpf) != EOF){

                fscanf(arq, "%s ", &consulta -> nome); 
                fscanf(arq, "%s ", &consulta -> sobrenome);
                fscanf(arq, "%s ", &consulta -> email);
                fscanf(arq, "%s ", &consulta -> senha);

                //CONDICIONAL PARA COMPARA O EMAIL E SENHA COM O ARQUIVO
                //STRCMP FUNCAO PARA COMPARAR STRINGS E RETORNA UM INTEIRO
                if((strcmp(email , consulta -> email) == 0) && (strcmp(senha , consulta -> senha) == 0)){

                    char* cpf; //CPF VARIAVEL DO TIPO CHAR
                    cpf = (char *)malloc(strlen(consulta -> cpf)*(sizeof(char))); //PASSANDO O ESPADDO ALOCANDO EXATO DA CONSULTA CPF PARA O PONTEIRO CPF
                    strcpy(cpf, consulta -> cpf);//STRCPY FUNCAO PARA COPIAR OS DADOS DE CONSULTA -> CPF PARA CPF
                    sessao(cpf);//PASSANDO A VARIAVEL CPF PARA FUNCAO SESSAO
                }
            }
        //FECHANDO O ARQUIVO 
        fclose(arq);
    }

        //FUNCAO COM PARAMETRO RECEBIDO NA FUNCAO LOGIN()
        void sessao(char* cpf){
        
        //DECLARACAO DE VARIAVEIS LOCAIS
        int contador = 1, escolha;

            //LACO DE REPETICAO INFINTO ATE SELECAO DA OPCAO QUE ATUALIZA O VALOR DA VARIAVEL
            while(contador == 1){

                //LIMPANDO OS CODIGOS ACIMA
                system("cls"); 

                //MENU DE SELECAO
                printf("\t-----SISTEMA DE REGISTROS-----\n\n");;
                printf("\t-------AREA DO PROFESSOR------\n");
                printf("\t------------------------------\n");
                printf("\t1 - Cadastro de Unidade Curricular\n");
                printf("\t2 - Cadastro de Aluno\n");
                printf("\t3 - Cadastro de Turma\n");
                printf("\t4 - Relatorio de Turma\n");
                printf("\t0 - VOLTAR\n");
                printf("\t------------------------------\n\n");

                //ENTRADA DO VALOR DE SELECAO
                printf("Escolha: ");
                    scanf("%d", &escolha);

                //ESTRUTURA DE ESCOLHAS
                switch(escolha){
                    case 1:
                        //CHAMADA DE FUNCAO COM PARAMENTO CPF
                        cadastroUC(cpf);
                    break;
                    
                    case 2:
                        //CHAMADA DE FUNCAO
                        cadastroEstudante();
                    break;

                    case 3:
                        //CHAMADA DE FUNCAO
                        cadastroTurma();
                    break;

                    case 4:
                        //CHAMADA DE FUNCAO
                        relatorioTurma();
                    break;

                    case 0:
                        //ATUALIZANDO VALOR DA VARIAVEL PARA SAIDA DO LACO
                        contador++;
                    break;

                    default:
                        //MENSAGEM DE ERRO CASO ENTRADA SEJE INVALIDA
                        printf("\nOpcao Invalida !!\n\n");
                }
            }
        }

            //FUNCAO COM PARAMETRO RECEBIDO NA FUNCAO SESSAO()
            void cadastroUC(char* cpf){

                //VARIAVEL RECEVE O VALOR GERADO PELA FUNCAO GERAID()
                int idGerado = geraID();

                //LIMPANDO OS CODIGOS ACIMA
                system("cls"); 

                //CABECARIO DO SISTEMA
                printf("\t-----SISTEMA DE REGISTROS-----\n\n");
                printf("\t-------AREA DO PROFESSOR------\n");
                printf("\tCADASTRO DE UINDADE CURRICULAR\n");
                printf("\t------------------------------\n");
                printf("\tEntre com os dados: \n");

                UC *novo;//NOVO É A VARIAVEL DO TIPO UNIDADE CURRICULAR
                novo = (UC*)malloc(sizeof(UC)); // ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                //LIMPANDO CACHE DO TECLADO
                fflush(stdin);

                //ENTRADA DE DADOS
                printf("Nome: ");
                    scanf("%s", &novo -> nome);// "->" ANOTACAO DE ACESSO AO PONTEIRO
                printf("Semestre: ");
                    scanf("%d", &novo -> semestre);
                printf("Turno: ");
                    scanf("%s", &novo -> turno);
                printf("Carga Horaria: ");
                    scanf("%d", &novo -> cargaHoraria);
                printf("Quantidade de estudantes: ");
                    scanf("%d", &novo -> quantidadeEstudante);
                   

                FILE *arq;//ARQ VARIAVEL DO TIPO FILE
                arq = fopen("unidadecurricular.txt", "a");//ABERTURA DO ARQUIVO MODO A(APPEND) ESCRITA DEPOIS DO \N

                    //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                    if (arq == NULL){
                        printf("Erro ao abrir o arquivo!\n");
                        return 1;
                    }                

                //ARMAZENANDO AS VARIAVEIS NO ARQUIVO
                fprintf(arq, "%d ", idGerado);//PASSANDO VALOR GERADO PELA FUNCAO GERAID()
                fprintf(arq, "%s ", novo -> nome); // "->" ANOTACAO DE ACESSO AO PONTEIRO
                fprintf(arq, "%d ", novo -> semestre);
                fprintf(arq, "%s ", novo -> turno);
                fprintf(arq, "%d ", novo -> cargaHoraria);
                fprintf(arq, "%d ", novo -> quantidadeEstudante);
                fprintf(arq, "%s \n", cpf);// PASSANDO O VALOR RECEBIDO PELA FUNCAO SESSAO()

                //FECHANDO O ARQUIVO 
                fclose(arq);

                //MENSAGEM DE SUACESSO DO CADASTRO
                printf("Unidade Curricular: %s, Cadastrada !", novo -> nome);
            }

                int geraID(){
                    
                    //DECLARACAO DE VARIAVEIS LOCAIS
                    int idGerado = 0;
                    int ids[100];

                    UC *consulta;//CONSULTA É A VARIAVEL DO TIPO UNIDADE CURRICULAR
                    consulta = (UC*)malloc(sizeof(UC));// ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                    FILE *arq;//ARQ VARIAVEL DO TIPO FILE

                    arq = fopen("unidadecurricular.txt", "r");//ABERTURA DO ARQUIVO MODO R(READ) LEITURA
                        //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                        if (arq == NULL){
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                        }
                    
                    //VARIACEL IDGERADO RECEBE UM NUMERO ALEATORIO DE 0 A 100 ADICIONANDO 1 PARA NAO SER 0
                    idGerado = rand()%100+1;

                    //LACO DE REPETICAO PARA LEITURA DO ARQUIVO ATE O FIM
                    while (fscanf(arq, "%d ", &consulta -> id) != EOF){
                        
                        fscanf(arq, "%s ", &consulta -> nome); // "->" ANOTACAO DE ACESSO AO PONTEIRO
                        fscanf(arq, "%d ", &consulta -> semestre);
                        fscanf(arq, "%s ", &consulta -> turno);
                        fscanf(arq, "%d ", &consulta -> cargaHoraria);
                        fscanf(arq, "%d ", &consulta -> quantidadeEstudante);
                        fscanf(arq, "%s ", &consulta -> cpfProf);

                        //CONDICIONAL PARA VERIFICAR SE O VALOR GERADO EXISTE NO BANCO DE DADOS
                        if(idGerado == consulta->id){
                            //VARIACEL IDGERADO RECEBE UM NUMERO ALEATORIO DE 0 A 100 ADICIONANDO 1 PARA NAO SER 0
                            idGerado = rand()%100+1;
                        }
                    }
                    //FECHANDO O ARQUIVO 
                    fclose(arq);

                    //RETORNANDO O VALOR GERADO PARA FUNCAO ACIMA
                    return(idGerado);
                }

            void cadastroEstudante(){

                //LIMPANDO OS CODIGOS ACIMA
                system("cls"); 

                //CABECARIO DO SISTEMA
                printf("\t-----SISTEMA DE REGISTROS-----\n\n");
                printf("\t-------AREA DO PROFESSOR------\n");
                printf("\t-----CADASTRO DE ESTUDANTE----\n");
                printf("\t------------------------------\n");
                printf("\tEntre com os dados: \n");

                Estudante *novo;//NOVO É A VARIAVEL DO TIPO ESTUDANTE
                novo = (Estudante*)malloc(sizeof(Estudante)); //ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                //MENSAGEM SOLICITANDO ENTRADA DE DADOS
                printf("Entre com os dados:\n\n");

                //LIMPANDO CACHE DO TECLADO
                fflush(stdin);

                //ENTRADA DE DADOS
                printf("CPF: ");
                    scanf("%s", &novo -> cpf);
                printf("Nome: ");
                    scanf("%s", &novo -> nome);
                printf("Sobrenome: ");
                    scanf("%s", &novo -> sobrenome);
                printf("RA: ");
                    scanf("%s", &novo -> ra);

                FILE *arq;//ARQ VARIAVEL DO TIPO FILE
                arq = fopen("estudante.txt", "a");//ABERTURA DO ARQUIVO MODO A(APPEND) ESCRITA DEPOIS DO \N
                    //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                    if (arq == NULL){
                        printf("Erro ao abrir o arquivo!\n");
                        return 1;
                    }

                //ARMAZENANDO AS VARIAVEIS NO ARQUIVO
                fprintf(arq, "%s ", novo -> cpf);
                fprintf(arq, "%s ", novo -> nome);
                fprintf(arq, "%s ", novo -> sobrenome);
                fprintf(arq, "%s \n", novo -> ra);

                //FECHANDO O ARQUIVO 
                fclose(arq);

                //MENSAGEM DE SUACESSO DO CADASTRO
                printf("Estudante %s, Cadastrado !", novo -> nome);

            }

            void cadastroTurma(){

                //DECLARACAO DE VARIAVEIS LOCAIS
                char nomeArquivo[100];
                int idUC, qntAlunos, contador = 0;

                Turma *novo;//NOVO É A VARIAVEL DO TIPO TURMA
                novo = (Turma *)malloc(sizeof(Turma));// ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                UC *consulta;//CONSULTA É A VARIAVEL DO TIPO uNIDADE CURRICULAR
                consulta = (UC*)malloc(sizeof(UC));// ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                //LIMPANDO OS CODIGOS ACIMA
                system("cls"); 
                
                //CABECARIO DO SISTEMA
                printf("\t-----SISTEMA DE REGISTROS-----\n\n");
                printf("\t-------AREA DO PROFESSOR------\n");
                printf("\t-------CADASTRO DE TURMA------\n");
                printf("\t------------------------------\n");
                printf("\tUnidades Curriculares: \n");


                FILE *arqUC, *arqEST;//ARQUC e ARQEST VARIAVEL DO TIPO FILE

                arqUC = fopen("unidadecurricular.txt", "r");//ABERTURA DO ARQUIVO MODO R(READ) LEITURA
                    //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                    if (arqUC == NULL){
                        printf("Erro ao abrir o arquivo!\n");
                        return 1;
                    }
                printf("\t------------------------------\n");
                //CABECARIO DA TABELA PUXADA DO BANCO DE DADOS
                printf("\tID\tNome\n\n");

                //LACO DE REPETICAO PARA LEITURA DO ARQUIVO ATE O FIM
                while (fscanf(arqUC, "%d ", &consulta -> id) != EOF){

                    fscanf(arqUC, "%s ", &consulta -> nome); 
                    fscanf(arqUC, "%d ", &consulta -> semestre);
                    fscanf(arqUC, "%s ", &consulta -> turno);
                    fscanf(arqUC, "%d ", &consulta -> cargaHoraria);
                    fscanf(arqUC, "%d ", &consulta -> quantidadeEstudante);
                    fscanf(arqUC, "%s ", &consulta -> cpfProf);

                    printf("\t%d\t%s\n", consulta -> id, consulta -> nome);
                    
                }
                //FECHANDO O ARQUIVO 
                fclose(arqUC);
                printf("\t------------------------------\n");

                //ENTRADA DE DADOS
                printf("\nEntre com o ID da Unidade Curricular: ");
                    scanf("%d", &novo -> idUC);

                arqUC = fopen("unidadecurricular.txt", "r");//ABERTURA DO ARQUIVO MODO R(READ) LEITURA
                    //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                    if (arqUC == NULL){
                        printf("Erro ao abrir o arquivo!\n");
                        return 1;
                    }

                //LACO DE REPETICAO PARA LEITURA DO ARQUIVO ATE O FIM
                while (fscanf(arqUC, "%d ", &consulta -> id) != EOF){

                    fscanf(arqUC, "%s ", &consulta -> nome); 
                    fscanf(arqUC, "%d ", &consulta -> semestre);
                    fscanf(arqUC, "%s ", &consulta -> turno);
                    fscanf(arqUC, "%d ", &consulta -> cargaHoraria);
                    fscanf(arqUC, "%d ", &consulta -> quantidadeEstudante);
                    fscanf(arqUC, "%s ", &consulta -> cpfProf);

                    //CONDICIONAL PARA VERIFICAR SE O ID DE ENTRADA EXISTE NO BANDO
                    if(novo -> idUC == consulta -> id){
                        //SPRINTF ATRIBUI O NOME DA UNIDADE CURRICULAR NO ARQUIVO
                        sprintf(nomeArquivo, "./turmas/%s.txt", &consulta -> nome);
                        //STRCPY COPIA O VALOR DE UMA STRING PARA OUTRA
                        strcpy(&novo -> nome, &consulta -> nome);
                    }
                    
                }
                //FECHANDO O ARQUIVO 
                fclose(arqUC);

                //ENTRADA DE DADOS
                printf("Entre com a Quantidade de alunos: ");
                    scanf("%d", &novo -> quantidadeEstudante);

                Estudante *consulta2;//CONSULTA2 É A VARIAVEL DO TIPO ESTUDANTE
                consulta2 = (Estudante*)malloc(sizeof(Estudante));// ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                //LIMPANDO OS CODIGOS ACIMA
                system("cls"); 

                //CABECARIO DO SISTEMA
                printf("\t-----SISTEMA DE REGISTROS-----\n\n");
                printf("\t-------AREA DO PROFESSOR------\n");
                printf("\t-------CADASTRO DE TURMA------\n");
                printf("\t------------------------------\n");
                printf("\tEstudantes: \n");

                arqEST = fopen("estudante.txt", "r");//ABERTURA DO ARQUIVO MODO R(READ) LEITURA
                    //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                    if (arqUC == NULL){
                        printf("Erro ao abrir o arquivo!\n");
                        return 1;
                }
                printf("\t------------------------------\n");
                //CABECARIO DA TABELA PUXADA DO BANCO DE DADOS
                printf("\tCPF\t\tNome\n\n");

                //LACO DE REPETICAO PARA LEITURA DO ARQUIVO ATE O FIM
                while (fscanf(arqEST, "%s ", &consulta2 -> cpf) != EOF){

                    fscanf(arqEST, "%s ", &consulta2 -> nome); 
                    fscanf(arqEST, "%s ", &consulta2 -> sobrenome);
                    fscanf(arqEST, "%s ", &consulta2 -> ra);

                    //IMPRIMINDO O CPF E NOME NA TELA
                    printf("\t%s\t\t%s\n", consulta2 -> cpf, consulta2 -> nome);
                }
                //FECHANDO O ARQUIVO 
                fclose(arqEST);
                printf("\t------------------------------\n");
                
                //LACO DE REPETICAO PARA CADASTRO DA QUANTIDADE DE ALUNO LIDA ANTERIORMENTE
                for(contador = 0; contador < novo -> quantidadeEstudante; contador++){
                    
                    //ENTRADA DE DADOS
                    printf("\nInsira CPF o(a) %d estudante: ", contador+1);
                        scanf("%s", &novo -> cpfEstudante);

                    //CONDICIONAL PARA VERIFICAR SE O ALUNO EXISTE
                    if(consultaEstudanteCPF(novo -> cpfEstudante) == 0){
                        contador--;
                        printf("Estudante INVALIDO!\n");
                    }else{

                        FILE *arq;//ARQ VARIAVEL DO TIPO FILE

                        arq = fopen(nomeArquivo, "w");//ABERTURA DO ARQUIVO MODO W(WRITE) ESCRITA
                            //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                            if (arq == NULL){
                                printf("Erro ao abrir o arquivo!\n");
                                return 1;
                            }

                            //ESCREVENDO OS DADOS NO ARQUIVO
                            fprintf(arq, "%d ", novo -> idUC);
                            fprintf(arq, "%s ", novo -> nome);
                            fprintf(arq, "%d ", novo -> quantidadeEstudante);
                            fprintf(arq, "%s \n", novo -> cpfEstudante);
                            
                        //FECHANDO O ARQUIVO 
                        fclose(arq);
                    }

                }
            }

                int consultaEstudanteCPF(char* cpfEstudante){
                  
                    Estudante *consulta;//CONSULTA É A VARIAVEL DO TIPO ESTUDANTE
                    consulta = (Estudante*)malloc(sizeof(Estudante));// ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                    FILE *arq;//ARQ VARIAVEL DO TIPO FILE

                    arq = fopen("estudante.txt", "r");//ABERTURA DO ARQUIVO MODO R(READ) LEITURA
                        //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                        if (arq == NULL){
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                        }

                    //LACO DE REPETICAO PARA LEITURA DO ARQUIVO ATE O FIM
                    while (fscanf(arq, "%s ", &consulta -> cpf) != EOF){

                        fscanf(arq, "%s ", &consulta -> nome); 
                        fscanf(arq, "%s ", &consulta -> sobrenome);
                        fscanf(arq, "%s ", &consulta -> ra);

                        //CONDICIONAL PARA VERIFICAR SE OS DADOS CONFEREM
                        if(strcmp(consulta -> cpf, cpfEstudante) == 0){
                            return 1;
                        }
                    }
                    //FECHANDO O ARQUIVO 
                    fclose(arq);

                    return 0;
                }

            void relatorioTurma(){

                //DECLARACAO DE VARIAVEL LOCAL
                char arquivo[100];
                char nomeArquivo[100]; //ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                //LIMPANDO OS CODIGOS ACIMA
                system("cls"); 

                //CABECARIO DO SISTEMA
                printf("\t-----SISTEMA DE REGISTROS-----\n\n");
                printf("\t-------AREA DO PROFESSOR------\n");
                printf("\t-----RELATORIO DE TURMAS------\n");
                printf("\t------------------------------\n");
                printf("\tSelecione a turma: \n");

                DIR *dir;//DIR É A VARIAVEL DO TIPO DIR
                struct dirent *listaDIR;

                    dir = opendir("./turmas");//ABRINDO O DIRETORIO SELECIONADO

                while((listaDIR = readdir(dir)) != NULL ){
                    printf ("\t%s\n", listaDIR->d_name);
                }
                closedir(dir);//FECHANDO O DIRETORIO
                printf("\t------------------------------\n");

                //ENTRADA DE DADOS
                printf("Turma: ");
                    scanf("%s", &arquivo);

                Turma *consultaT;//CONSULTA É A VARIAVEL DO TIPO TURMA
                consultaT = (Turma *)malloc(sizeof(Turma));// ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                Estudante *consultaEST;//NOVO É A VARIAVEL DO TIPO TURMA
                consultaEST = (Estudante *)malloc(sizeof(Estudante));// ALOCA DINAMICAMENTE O ESPACO DE MEMORIA DO TAMANHO DA STRUCT

                FILE *arqT, *arqEST, *arq;//ARQ VARIAVEL DO TIPO FILE
                sprintf(nomeArquivo, "./turmas/%s.txt", &arquivo);

                arqT = fopen(nomeArquivo, "r");//ABERTURA DO ARQUIVO MODO R(READ) LEITURA
                    //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                    if (arqT == NULL){
                        printf("Erro ao abrir o arquivo!\n");
                        return 1;
                    }

                //LACO DE REPETICAO DE LEITURA NO ARQUIVO TURMA
                while (fscanf(arqT, "%d ", &consultaT -> idUC) != EOF){

                    fscanf(arqT, "%s ", &consultaT -> nome);
                    fscanf(arqT, "%d ", &consultaT -> quantidadeEstudante); 
                    fscanf(arqT, "%s ", &consultaT -> cpfEstudante);
                
                    //CONDICIONAL PARA VERIFICAR SE O NOME DA ENTRADA CONDIZ COM O NOME DE UM ARQUIVO
                    if(strcmp(consultaT -> nome, arquivo) == 0){

                        arqEST = fopen("estudante.txt", "r");//ABERTURA DO ARQUIVO MODO R(READ) LEITURA
                        //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                        if (arqEST == NULL){
                            printf("Erro ao abrir o arquivo!\n");
                            return 1;
                        }  
                        
                        //LACO DE REPETICAO DE LEITURA NO ARQUIVO ESTUDANTE
                        while(fscanf(arqEST, "%s ", &consultaEST -> cpf) != EOF){

                            fscanf(arqEST, "%s ", &consultaEST -> nome);
                            fscanf(arqEST, "%s ", &consultaEST -> sobrenome); 
                            fscanf(arqEST, "%s ", &consultaEST -> ra);
                    
                            //CONDICIONAL PARA VERIFICAR SE O CPF DO ESTUDANTE E DA TURMA SAO IGUAIS
                            if(strcmp(consultaEST -> cpf, consultaT -> cpfEstudante) == 0){

                                //SPRINTF ATRIBUI O NOME DA TURMA NO ARQUIVO
                                sprintf(nomeArquivo, "./relatorios/%s.txt", &consultaT -> nome);

                                arq = fopen(nomeArquivo, "w");//ABERTURA DO ARQUIVO MODO W(WRITE) ESCRITA
                                    //TRATAMENTO CASO O ARQUIVO NAO SEJE VALIDO
                                    if (arq == NULL){
                                        printf("Erro ao abrir o arquivo!\n");
                                        return 1;
                                    }
                                
                                //ESCREVENDO OS DADOS NO ARQUIVO
                                fprintf(arq, "%d ", consultaT -> idUC);
                                fprintf(arq, "%s ", consultaT -> nome);
                                fprintf(arq, "%s ", consultaEST -> ra);
                                fprintf(arq, "%s ", consultaEST -> nome);
                                fprintf(arq, "%s \n", consultaEST -> sobrenome);

                            }
                            //FECHANDO O ARQUIVO 
                            fclose(arq);
                        }
                        //FECHANDO O ARQUIVO 
                        fclose(arqEST);
                    }
                }
                //FECHANDO O ARQUIVO 
                fclose(arqT);
            }
            

        






