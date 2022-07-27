//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//r)Calcule as raízes reais de uma equação de segundo grau, ou emita uma mensagem caso as mesmas não existam.

#include <stdio.h>
//INCLUSAO DE BIBLIOTECA MATEMATICA
#include <math.h>

void main(){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;

    printf("Equacao base -> 'ax^2 + bx + c =0'\n");
    printf("Entre com os valores:\n");
    printf("Entre com o valor de A: ");
        scanf("%f" , &a);
    printf("Entre com o valor de B: ");
        scanf("%f" , &b);
    printf("Entre com o valor de C: ");
        scanf("%f" , &c);

    if (a == 0) {
        if (b != 0) {  
            printf("EQUACAO DE PRIMEIRO GRAU");
        }else{
            if (c == 0) {
	            printf("VALORES ZERADOS!\n");
            }
        }
    }else{

    delta = (b*b) - (4*a*c);
    printf("DELTA vale: %.1f\n", delta);

    if (delta < 0) {
      printf("NAO EXISTE SOLUCAO");
    }else{
        x1 = ((-b) + sqrt(delta)) / (2*a);
        x2 = ((-b) - sqrt(delta)) / (2*a);
        printf("O valor de x1: %.3f\nO valor de x2: %.3f" , x1 , x2);
    }
    }
}