//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//03/05/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct dados{
    char nome[20];
    char sobrenome[20];
    char sexo;
    float salario;
    Data nascimento;
    int filhos;
} Dados;

int main(){

    Dados populacao[8];
    int contador = 0, ano_atual = 0, validacao = 0;
    float aux, aux2, media;

    setlocale(LC_ALL, "portuguese-brazilian");

    //ENTRADA DE DADOS
    for(contador = 0; contador < 8; contador++){

        printf("Entre com os Dados do %d° cidadao: \n", contador+1);

        printf("Entre com o Nome: ");
            scanf("%s", &populacao[contador].nome);

        printf("Entre com o Sobrenome: ");
            scanf("%s", &populacao[contador].sobrenome);

        while(validacao == 0){
            printf("Entre com o Sexo (f: Feminino, m: masculino): ");
                scanf("%s", &populacao[contador].sexo);

                if(populacao[contador].sexo == 'f' || populacao[contador].sexo == 'm'){
                    validacao = 1;
                }else{
                    printf("Dados Invalidos %c\n", populacao[contador].sexo);
                }
        }
        validacao = 0;

        while(validacao == 0){
            printf("Entre com o Salario: R$ ");
                scanf("%f", &populacao[contador].salario);

                if(populacao[contador].salario < 0){
                    printf("Dados Invalidos\n");
                }else{
                    validacao = 1;
                }
        }
        validacao = 0;

        printf("Entre com o Ano atual: ");
            scanf("%d", &ano_atual);

        printf("Entre com a Data de Nascimento: \n");

        while(validacao == 0){
            printf("Entre com o Dia: ");
                scanf("%d", &populacao[contador].nascimento.dia);

                if(populacao[contador].nascimento.dia > 31){
                    printf("Dados Invalidos\n");
                }else{
                    validacao = 1;
                }
        }
        validacao = 0;

        while(validacao == 0){
            printf("Entre com o Mes: ");
                scanf("%d", &populacao[contador].nascimento.mes);

                if(populacao[contador].nascimento.mes > 12){
                    printf("Dados Invalidos\n");
                }else{
                    validacao = 1;
                }
        }
        validacao = 0;   

        while(validacao == 0){
            printf("Entre com o Ano: ");
                scanf("%d", &populacao[contador].nascimento.ano);

                if(populacao[contador].nascimento.ano < 1890 || populacao[contador].nascimento.ano > ano_atual){
                    printf("Dados Invalidos\n");
                }else{
                    validacao = 1;
                }
        }
        validacao = 0;

        while(validacao == 0){
            printf("Entre com a Quantidade de Filhos: ");
                scanf("%d", &populacao[contador].filhos);

                if(populacao[contador].filhos < 0){
                    printf("Dados Invalidos\n");
                }else{
                    validacao = 1;
                }
        }    

        printf("\n");
    }

    //IMPRIMINDO TODOS OS ENTREVISTADOS
    for(contador = 0; contador < 8; contador++){

        printf("O %d° entrevistado foi: %s %s do sexo: %c, tem %d filhos, nascido em %d/%d/%d e ganha R$ %.1f\n", contador+1, populacao[contador].nome, populacao[contador].sobrenome, populacao[contador].sexo, populacao[contador].filhos, populacao[contador].nascimento.dia, populacao[contador].nascimento.mes, populacao[contador].nascimento.ano, populacao[contador].salario);
    }

    printf("\n");

    //IMPRIMINDO O PRIMEIRO
    printf("O Primeiro entrevistado foi: %s %s do sexo: %c, tem %d filhos, nascido em %d/%d/%d e ganha R$ %.1f\n", populacao[0].nome, populacao[0].sobrenome, populacao[0].sexo, populacao[0].filhos, populacao[0].nascimento.dia, populacao[0].nascimento.mes, populacao[0].nascimento.ano, populacao[0].salario);

    printf("\n");

    //IMPRIMINDO O ULTIMO
    printf("O Ultimo entrevistado foi: %s %s do sexo: %c, tem %d filhos, nascido em %d/%d/%d e ganha R$ %.1f\n", populacao[7].nome, populacao[7].sobrenome, populacao[7].sexo, populacao[7].filhos, populacao[7].nascimento.dia, populacao[7].nascimento.mes, populacao[7].nascimento.ano, populacao[7].salario);

    printf("\n");

    //IMPRIMINDO SOMENTE ALGUNS DADOS DO QUINTO
    printf("O Quinto entrevistado tem o sobremo de %s nascido em %d/%d/%d\n", populacao[contador].sobrenome, populacao[contador].nascimento.dia, populacao[contador].nascimento.mes, populacao[contador].nascimento.ano);

    printf("\n");


    //IMPRIMINDO TODAS AS MULHERES
    for(contador = 0; contador < 8; contador++){

        if(populacao[contador].sexo == 'f'){
            printf("As Mulheres entrevistadas foram: %s %s do sexo: %c, tem %d filhos, nascido em %d/%d/%d e ganha R$ %.1f\n", populacao[contador].nome, populacao[contador].sobrenome, populacao[contador].sexo, populacao[contador].filhos, populacao[contador].nascimento.dia, populacao[contador].nascimento.mes, populacao[contador].nascimento.ano, populacao[contador].salario);
        }
    }

    printf("\n");

    //IMPRIMINDO TODAS AS PESSOAS COM SALARIO ACIMA DE 5000
    for(contador = 0; contador < 8; contador++){

        if(populacao[contador].salario > 5000){
            printf("O entrevistado(a): %s %s ganha R$ %.1f\n", populacao[contador].nome, populacao[contador].sobrenome, populacao[contador].salario);
        }
    }

    printf("\n");

    //IMPRIMINDO A MEDIA SALARIAL DA POPULACAO
    for(contador = 0; contador < 8; contador++){

        aux = populacao[contador].salario;
    }

    media = aux / 8;

    printf("A media salarial da populacao é: %.1f\n", media);

    aux = 0;
    media = 0;

    printf("\n");

    //IMPRIMINDO A MEDIA DE FILHOS
    for(contador = 0; contador < 8; contador++){

        aux = populacao[contador].filhos;
    }

    media = aux / 8;

    printf("A media de filhos da populacao é: %.1f\n", media);

    aux = 0;
    media = 0;

    printf("\n");

    //IMPRIMINDO QUANTIDADE DO SEXO MASCULINO
    for(contador = 0; contador < 8; contador++){

        if(populacao[contador].sexo == 'm'){
            aux = aux + 1;
        }
    }

    printf("A quantidade do sexo masculino na populacao entrevistada foi: %.f\n", aux);

    aux = 0;

    printf("\n");

    //IMPRIMINDO QUANTIDADE DO SEXO MASCULINO
    for(contador = 0; contador < 8; contador++){

        if(populacao[contador].sexo == 'm'){

            aux = populacao[contador].filhos;
            aux2 = aux2 + 1;
        }
    }

    media = aux / aux2;

    printf("A media de filhos dos entrevistados masculino foi: %.f\n", media);

    printf("\n");

    return 0;
}