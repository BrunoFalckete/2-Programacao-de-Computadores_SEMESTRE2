//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//24/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

    //PROTOTIPOS PROCEDIMENTOS
void dobro();
void maior();
void maior_500();
void entre_10_50();
void entre_x_y();
void aleatorios();
void aleatorios_quant();
void calc(float num1, float num2, char operacao);

    //PROTOTIPOS FUNCOES
float triplo(float numero);
float menor(float num1, float num2);
float soma(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float divisao(float num1, float num2);
int testa_calc(int i, int n, char operacao);



int main(){

    int escolha, contador_geral = 1 , i, n;
    float resultado, num1, num2, c1, c2, c3, c4;

    while(contador_geral == 1){

        printf("\n\n-----------------------------------------------------------\nPROCEDIMENTOS:		| FUNCOES:  \n01 - dobro()		| 09 - triplo() \n02 - maior()		| 10 - menor() \n03 - maior_500()	| 11 - soma() \n04 - entre_10_50()	| 12 - sub() \n05 - ente_x_y()		| 13 - mult() \n06 - aleatorios() 	| 14 - div() \n07 - aleatorios_quant()	| 15 - testa_calc() \n08 - calc() \n  -----------------------------------------------------------\n			16 - SAIR\n  -----------------------------------------------------------\nEscolha: ");

            scanf("%d" , &escolha);

        switch(escolha){

                // PROCEDIMENTOS
            case 1:
                printf("\n\ndobro() leia um numero inteiro e imprima o dobro dele\n");
                    dobro();
              break;

            case 2:
                printf("\n\nmaior() leia dois numeros e imprima o valor do maior\n");
                    maior();
            break;

            case 3:
                printf("\n\nmaior_500() leia um numero e imprima se ele e maior que 500 ou nao\n");
                    maior_500();
            break;

            case 4:
                printf("\n\nentre_10_50() imprima todos os numeros entre 10 e 50\n");
                    entre_10_50();
            break;

            case 5:
                printf("\n\nentre_x_y() receba dois numeros inteiros x e y e imprima todos os numeros entre x e y.\n");
                    entre_x_y();
            break;

            case 6:
                printf("\n\naleatorios() leia um numero n e entao sorteie e imprima n numeros aleatorios.\n");
                    aleatorios();
            break;

            case 7:
                printf("\n\naleatorios_quant() receba um numero X como parametro. Sorteie numeros aleatorios ate que o numero sorteado for igual a X. Imprima a quantidade de numeros sorteados.\n");
                    aleatorios_quant();
            break;

            case 8:
                printf("\n\ncalc() recebe dois numeros reais E um caractere que representa o calculo a relizar: '+', '-', '*' ou '/'. Faça chamadas para as funcoes anteriores e retorne o valor correto dependendo da operacao.\n");

                char operacao;

                printf("Entre com o Primeiro numero: ");
                    scanf("%f", &num1);

                printf("Entre com o Segundo numero: ");
                    scanf("%f", &num2);

                printf("Escolha a operacao matematica:\n");
                printf("SOMA: + \t SUBTRACAO: - \t MULTIPLICACAO: * \t DIVISAO: /\nEscolha: ");
                    scanf("%s" , &operacao);

                calc(num1 , num2 , operacao);
            break;

                // FUNCOES
            case 9:
                printf("\n\ntriplo() leia um numero inteiro e retorne o triplo dele\n");

                    float numero;

                    printf("Entre com o numero: ");
                        scanf("%f", &numero);

                        resultado = triplo(numero);

                        printf("o resultado do triplo de %.f e %.2f\n", numero, resultado);

                        resultado = 0;
            break;

            case 10:
                printf("\n\nmenor() leia dois nmeros e retorne o valor do menor\n");
                    
                    printf("Entre com o Primeiro numero: ");
                        scanf("%f", &num1);

                    printf("Entre com o Segundo numero: ");
                        scanf("%f", &num2);

                    resultado = menor(num1 , num2);

                    if(num1 == num2){
                        printf("Os numeros sao iguais\n");
                    } else{
                        printf("Entre %.2f e %.2f o menor 1: %.2f\n", num1 , num2 , resultado);
                    }

                    resultado = 0;
                    num1 = 0;
                    num2 = 0;
            break;

            case 11:
                printf("\n\nsoma() receba dois numeros reais e retorne a soma deles\n");

                printf("Entre com o Primeiro numero: ");
                    scanf("%f", &num1);

                printf("Entre com o Segundo numero: ");
                    scanf("%f", &num2);

                resultado = soma(num1 , num2);

                printf("%.f + %.f = %.f\n", num1 , num2 , resultado);

                resultado = 0;
                num1 = 0;
                num2 = 0;
            break;

            case 12:
                printf("\n\nsub() receba dois numeros reais e retorne a subtracao do primeiro pelo segundo\n");

                printf("Entre com o Primeiro numero: ");
                    scanf("%f", &num1);

                printf("Entre com o Segundo numero: ");
                    scanf("%f", &num2);

                resultado = sub(num1 , num2);

                printf("%.f - %.f = %.f\n", num1 , num2 , resultado);

                resultado = 0;
                num1 = 0;
                num2 = 0;
            break;

             case 13:
                printf("\n\nmult() receba dois numeros reais e retorne a multiplicacao deles\n");

                printf("Entre com o Primeiro numero: ");
                    scanf("%f", &num1);

                printf("Entre com o Segundo numero: ");
                    scanf("%f", &num2);

                resultado = mult(num1 , num2);

                printf("%.f * %.f = %.f\n", num1 , num2 , resultado);

                resultado = 0;
                num1 = 0;
                num2 = 0;
            break;

            case 14:
                printf("\n\ndiv() receba dois numeros reais e retorne a divisao do primeiro pelo segundo\n");

                printf("Entre com o Primeiro numero: ");
                    scanf("%f", &num1);

                printf("Entre com o Segundo numero: ");
                    scanf("%f", &num2);

                resultado = divisao(num1 , num2);

                printf("%.f / %.f = %.f\n", num1 , num2 , resultado);

                resultado = 0;
                num1 = 0;
                num2 = 0;
            break;

            case 15:            

                printf("informe um numero inteiro: ");
                    scanf("%d", &n);
                printf("\nSOMA \t\tSUB \t\tMULT \t\tDIV\n");

                for (i=1; i<=10; i++){
                    c1 = testa_calc(i, n, '+');
                    c2 = testa_calc(i, n, '-');
                    c3 = testa_calc(i, n, '*');
                    c4 = testa_calc(i, n, '/');

                printf("%f \t%f \t%f \t%f \n", c1, c2, c3, c4);
                }
            break;

                // SAIDA
            case 16:
                contador_geral++;
            break;


                //OPCAO INVALIDA
            default:
                printf("Opcao Invalida !!");
        }

    }
    return 0;
}

    // PROCEDIMENTOS
    void dobro(){
        int numero, resultado;

        printf("Entre com o Numero: ");
            scanf("%d",&numero);
        
        resultado = numero * 2;

        printf("O dobro de %d e: %d \n\n", numero, resultado);
        
    }
    void maior(){

        float num1 , num2 ;

        printf("Entre com os numeros\n");
        printf("Primeiro Numero: ");
            scanf("%f",&num1);
        
        printf("Segundo Numero: ");
            scanf("%f",&num2);

        if(num1 > num2){
            printf("O numero %.f e maior que o numero %.f\n\n", num1, num2);
        } else{
            printf("O numero %.f e maior que o numero %.f\n\n", num2, num1);
        }
    }
    void maior_500(){
        float numero;

        printf("Entre com o Numero: ");
            scanf("%f",&numero);
        
        if(numero == 500){
            printf("O numero e 500\n\n");
        } else if(numero > 500){
            printf("O numero %.f e MAIOR que 500\n\n", numero);
        } else{
            printf("O numero %.f e menor que 500\n\n", numero);
        }
    }
    void entre_10_50(){
         
         int numero;

         for(numero = 10; numero <=50; numero++){

             printf("%d " , numero);

             if(numero % 50 == 0){
                 printf("\n");
             }
         }
    }  
    void entre_x_y(){
         
        int x, y, contador;

        printf("Entre com os numeros:\n");
        printf("Entre com o PRIMEIRO numero: ");
            scanf("%d", &x);
        printf("Entre com o SEGUNDO numero: ");
            scanf("%d", &y);

         for(contador = x; contador <= y; contador++){

                 printf("%d ", contador);
         }

         printf("\n");
    }
    void aleatorios(){

        int contador, numero_aleatorio, comparado;
        
        printf("Entre com o numero: ");
            scanf("%d", &numero_aleatorio);

        for(contador = 1; contador <= numero_aleatorio; contador++){

            comparado = rand();
            printf("%d " , comparado);
        }

        printf("\n");
    }
    void aleatorios_quant(){

        int numero_aleatorio;
        int comparado;
        int contador = 0;
        printf("Entre com o numero: ");
            scanf("%d", &numero_aleatorio);

        do{
            comparado = rand();
            printf("%d " , comparado);
            contador++;
            
        }while(numero_aleatorio != comparado);
        printf("\n quantidade de numeros sorteados foi %d\n", contador);
    }
    void calc(float num1, float num2, char operacao){

        float resultado;              

        switch(operacao){

            case '+':
                resultado = soma(num1 , num2);
                printf("%.f + %.f = %.f\n", num1 , num2 , resultado);
            break;

            case '-':
                resultado = sub(num1 , num2);
                printf("%.f - %.f = %.f\n", num1 , num2 , resultado);
            break;

            case '*':
                resultado = mult(num1 , num2);
                printf("%.f * %.f = %.f\n", num1 , num2 , resultado);
            break;

            case '/':
                resultado = divisao(num1 , num2);
                printf("%.f / %.f = %.f\n", num1 , num2 , resultado);
            break;

            default:
                printf("Opcao Invalida !!");
         }
    }

    // FUNCOES
    float triplo(float numero){

        float resultado;

        resultado = numero * 3;

        return resultado;
    }
    float menor(float num1, float num2){

        float resultado;

        if(num1 < num2){
            resultado = num1;
            return resultado;
        } else{
            resultado = num2;
            return resultado;
        }
    }
    float soma(float num1, float num2){

        float resultado;

        resultado = num1 + num2;

        return resultado;
    }
    float sub(float num1, float num2){

        float resultado;

        resultado = num1 - num2;

        return resultado;
    }
    float mult(float num1, float num2){

        float resultado;

        resultado = num1 * num2;

        return resultado;
    }
    float divisao(float num1, float num2){

        float resultado;

        resultado = num1 / num2;

        return resultado;
    }
    int testa_calc(int i, int n, char operacao){

        int resultado;              

        switch(operacao){

            case '+':
                resultado = soma(i , n);
                return resultado;
            break;

            case '-':
                resultado = sub(i , n);
                return resultado;
            break;

            case '*':
                resultado = mult(i , n);
                return resultado;
            break;

            case '/':
                resultado = divisao(i , n);
                return resultado;
            break;
         }
    }

