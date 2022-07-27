//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//p)Leia dois números inteiros em variáveis A e B e efetue a troca entre os valores. Exiba os valores das variáveis antes e após a troca.

#include <stdio.h>
#include <stdlib.h>
   
    void main(){
       
        int a, b , aux;

        printf("Entre com os Numeros para troca: \n");
        printf("Entre com o A numero: ");
            scanf("%d", &a);
        
        printf("Entre com o B numero: ");
            scanf("%d", &b);

        aux = a;
        a = b;
        b = aux;

        printf("O valor de A era %d e de B era %d \nAgora sao A = %d e B = %d", b , a , a , b);

        return 0;
    }