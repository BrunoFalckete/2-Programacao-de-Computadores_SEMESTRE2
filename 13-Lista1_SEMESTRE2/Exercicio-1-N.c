//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//n)Receba dois números inteiros e mostre o menor

#include <stdio.h>
#include <stdlib.h>
   
    void main(){
       
        int num1, num2;

        printf("Entre com os Numeros para comparacao: \n");
        printf("Entre com o primeiro numero: ");
            scanf("%d", &num1);
        
        printf("Entre com o segundo numero: ");
            scanf("%d", &num2);

        if(num1 < num2){
            printf("O numero menor e o primeiro numero %d", num1);
        }else{
            printf("O numero menor e o segundo numero %d", num2);
        }

        return 0;
    }