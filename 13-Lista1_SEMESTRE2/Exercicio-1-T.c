//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//t)Receba três valores A, B e C que representam os lados de um triângulo. Emita uma mensagem informando que os valores recebidos não formam um triângulo OU verifique o tipo desse triângulo em função do comprimento dos seus lados (escaleno, equilátero ou isósceles). O programa deve repetir até que o usuário não deseje mais executar.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
void main(){
    int lado1, lado2, lado3, contador, saida;

    while(1 ==1){

        printf("Entre com os lados do Triangulo: \n");
        printf("Entre com o primeiro lado: ");
            scanf("%d" , &lado1);
        printf("Entre com o segundo lado: ");
            scanf("%d" , &lado2);
        printf("Entre com o terceiro lado: ");
            scanf("%d" , &lado3);

        if(lado1 + lado2 < lado3){
            printf("Os lados nao formao um triangulo ");
        }else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
            printf("Triangulo ESCALENO\n\n");
        }else if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
            printf("Triangulo EQUILATERO\n\n");
        }else if(lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2){
            printf("Triangulo ISOSCELES\n\n");
        }

        printf("Deseja parar ?\nSe sim digite: 1\nSe nao digite: 0\n");
            scanf("%d", &saida);

        if(saida == 1){
            break;
        }
    }
    return 0;
}