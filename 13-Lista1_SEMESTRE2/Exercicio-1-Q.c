//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//q)Dois estudantes irão juntos ao cinema e fizeram uma aposta: “quem de nós tirar menor nota na prova de Linguagem de Programação pagará as nossas duas entradas pro cinema”. O valor de cada entrada inteira do cinema é R$25,00. Estudantes pagam meia entrada. Escreva um programa que leia as notas dos dois estudantes na prova de Linguagem de Programação e mostre os valores que eles gastarão.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   
    void main(){
       
        float nota1, nota2, valor_ingresso, meio_ingresso, total;
        char aluno1[50], aluno2[50];

        printf("Entre com os nomes e as Notas das provas de Linguagem de programacao \n");

        printf("Entre com o nome do primeiro aluno: ");
            scanf("%s", &aluno1);

        printf("Entre com o nome do segundo aluno: ");
            scanf("%s", &aluno2);

        printf("%s, Entre com sua nota: ", aluno1);
            scanf("%f", &nota1);
        
        printf("%s, Entre com sua nota: ", aluno2);
            scanf("%f", &nota2);

        printf("Entre com o valor do ingresso: ");
            scanf("%f", &valor_ingresso);

        meio_ingresso = valor_ingresso / 2;
        
        total = meio_ingresso * 2;

        if(nota1 < nota2){
            printf("%s voce tirou %.2f e voce pagara um total de R$%.2f,\no ingresso de R$%.2f saiu por R$%.2f porque sao estudantes", aluno1, nota1, total, valor_ingresso , meio_ingresso);
        }else{
            printf("%s voce tirou %.2f e voce pagara um total de R$%.2f,\no ingresso de R$%.2f saiu por R$%.2f porque sao estudantes", aluno2, nota2, total, valor_ingresso , meio_ingresso);
        }

        return 0;
    }