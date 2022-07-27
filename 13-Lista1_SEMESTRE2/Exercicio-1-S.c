//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//21/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//s)Para cálculo do IMC (Índice de Massa Corporal) divide-se a massa (em Kg) de uma pessoa pela sua altura (em metros) elevada ao quadrado. Faça um programa que receba a massa (em Kg) e a altura (em cm) de várias pessoas e classifique-as conforme a tabela a seguir:
    //IMC abaixo de 18,5: abaixo do peso.
    //IMC entre 18,5 e 24,9: peso normal.
    //IMC entre 25 e 29,9: sobrepeso.
    //IMC entre 30 e 34,9: obesidade grau I.
    //IMC entre 35 e 39,9: obesidade grau II.
    //IMC acima de 40: obesidade grau III.am.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
   
void main(){
       
    int contador = 0, num_pessoas;
    char paciente[100];
    float kg, imc, altura_m, altura_cm;

    printf("Entre com a quantidade de pessoas: ");
        scanf("%d" , &num_pessoas);

    for (contador = 0; contador < num_pessoas; contador++){

        printf("Entre com o nome do paciente: ");
            scanf("%s" , &paciente[contador]);

        printf("Entre com o peso do %s: ", paciente);
            scanf("%f" , &kg);

        printf("Entre com a altura do %s em CM: ", paciente);
            scanf("%f" , &altura_cm);

        altura_m = altura_cm / 100;

        imc = (kg / (altura_m * altura_m));

        if(imc < 18.5){
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e esta ABAIXO DO PESO\n\n", paciente, altura_m, kg, imc);
        }else if(imc > 18.5 && imc < 24.9){
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e esta com PESO NORMAL\n\n", paciente, altura_m, kg, imc);
        }else if(imc > 25 && imc < 29.9){
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e com SOBREPESO\n\n", paciente, altura_m, kg, imc);
        }else if(imc > 30 && imc < 34.9){
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e esta com POBESIDADE GRAU I\n\n", paciente, altura_m, kg, imc);
        }else if(imc > 35 && imc < 39.9){
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e esta com OBESIDADE GRAU II\n\n", paciente, altura_m, kg, imc);
        }else if(imc > 40){
            printf("%s de altura %.2f e peso %.2f \ntem o imc de %.1f e com OBESIDADE GRAU III\n\n", paciente, altura_m, kg, imc);
        }
    }
        
    return 0;
    }