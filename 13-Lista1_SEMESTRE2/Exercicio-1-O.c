//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//o)Receba três números inteiros e mostre o maior

#include <stdio.h>
#include <stdlib.h>
   
    void main(){
       
        int num1, num2 , num3;

        printf("Entre com os Numeros para comparacao: \n");
        printf("Entre com o primeiro numero: ");
            scanf("%d", &num1);
        
        printf("Entre com o segundo numero: ");
            scanf("%d", &num2);

        printf("Entre com o terceiro numero: ");
            scanf("%d", &num3);

        if(num1 > num2 && num1 > num3){
            printf("O numero maior e o primeiro numero %d", num1);
        }else if (num2 > num1 && num2 > num3){
            printf("O numero maior e o segundo numero %d", num2);
        }else if (num3 > num1 && num3 > num2){
            printf("O numero maior e o terceiro numero %d", num3);
        }

        return 0;
    }