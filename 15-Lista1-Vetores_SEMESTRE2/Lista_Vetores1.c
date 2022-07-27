//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//07/04/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

//PROTOTIPOS PROCEDIMENTOS
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();

int main(){

    setlocale(LC_ALL, "portuguese-brazilian");
    int escolha, contador_geral = 1;

    while(contador_geral == 1){

        printf("\n1 - um() APENAS declare vetores ou matrizes para armazenar as seguintes situações:\n     a)idade de 50 pessoas;\n     b)ano de nascimento de 20 cientistas;\n     c)salário de 30 pessoas;\n     d)altura de 1000 estudantes;\\n     e)temperatura diária dos últimos 7 dias;\n     f)48 últimas temperaturas registradas para uma caldeira;\n     g)notas de 30 estudantes;\n     h)notas de 25 estudantes em três provas;\n     i)coeficiente de rendimento de 25 estudantes;\n     j)para 20 famílias, a quantidade de pessoas em cada uma;\n     k)ano de nascimento de 20 pessoas;\n     l)para 20 modelos de carro, o consumo (km/l) de gasolina e álcool.\n     m)Valor dos gastos diários no último ano;\n     n)vazão (litros/segundo) de 5 líquidos diferentes;\n     o)medidas de volume e pressão de 20 gases;\n");

        printf("\n2 - dois() Faça um programa que declare um vetor de cinco números inteiros. O usuário deve informar, um a um, todos os valores a serem armazenados no vetor. Ao final seu programa deverá imprimir todos os elementos do vetor.\n");

        printf("\n3 - tres() Faça um programa que declare um vetor de cinco números inteiros. Inicialize todas as posições do vetor com o valor zero e imprima o vetor.\n");

        printf("\n4 - quatro() Faça um programa que declare um vetor de vinte números inteiros. O programa deverá atribuir em cada posição um número aleatório entre 1 e 10. Ao final seu programa deverá imprimir todos os elementos do vetor, com suas respectivas posições.\nOBS: para gerar números aleatórios utilize a função rand() da biblioteca stdlib.h\n");

        printf("\n5 - cinco() Faça um programa que declare um vetor de vinte números inteiros. O programa deverá atribuir em cada posição um número aleatório entre 0 e 150. Ao final seu programa deverá imprimir todos os elementos do vetor.\n");

        printf("\n6 - seis() Faça um programa que declare um vetor de vinte números inteiros. O programa deverá atribuir em cada posição um número aleatório entre 10 e 20. Ao final seu programa deverá imprimir todos os elementos do vetor, com suas respectivas posições.\n");

        printf("\n7 - sete() Faça um programa que declare um vetor de 100 posições e preencha-o com números sequenciais de 1 até 100. Imprima o vetor.\n");

        printf("\n8 - oito() Faça um programa que declare um vetor de 10 posições e preencha-o com números sequenciais decrescentes, iniciando em 99. Imprima o vetor.\n");

        printf("\n9 - SAIR !!\n");

        printf("\nEscolha: ");

            scanf("%d" , &escolha);

        switch(escolha){

            case 1:
                one();
            break;

            case 2:
               two();
            break;

            case 3:
                three();
            break;

            case 4:
                four();
            break;

            case 5:
                five();
            break;

            case 6:
                six();
            break;

            case 7:
                seven();
            break;

            case 8:
               eight(); 
            break;

            case 9:
                contador_geral++;
            break;

            //OPCAO INVALIDA
            default:
                printf("Opcao Invalida !!");
        }

    }
    return 0;
}

void one(){
    int contador_a_saida = 1, contador, contador2;
    char escolha;
    
        while(contador_a_saida == 1){

        printf("\n1 - um() APENAS declare vetores ou matrizes para armazenar as seguintes situações:\n     a)idade de 50 pessoas;\n     b)ano de nascimento de 20 cientistas;\n     c)salário de 30 pessoas;\n     d)altura de 1000 estudantes;\\n     e)temperatura diária dos últimos 7 dias;\n     f)48 últimas temperaturas registradas para uma caldeira;\n     g)notas de 30 estudantes;\n     h)notas de 25 estudantes em três provas;\n     i)coeficiente de rendimento de 25 estudantes;\n     j)para 20 famílias, a quantidade de pessoas em cada uma;\n     k)ano de nascimento de 20 pessoas;\n     l)para 20 modelos de carro, o consumo (km/l) de gasolina e álcool.\n     m)Valor dos gastos diários no último ano;\n     n)vazão (litros/segundo) de 5 líquidos diferentes;\n     o)medidas de volume e pressão de 20 gases;\n     p)SAIR\n\n");

        printf("Escolha uma letra para continuar: ");

            scanf("%s" , &escolha);

        switch(escolha){

            int idade[50];
            char nome_pessoa[50][200];

                case 'a':
                    printf("\na)idade de 50 pessoas;\n\n");

                    for(contador = 0; contador <= 49; contador++){
                        printf("Entre com o nome da %d° pessoa: ", contador+1);
                            scanf("%s", &nome_pessoa[contador]);
                        printf("Entre com a idade do(a) %s: ", nome_pessoa[contador]);
                            scanf("%d", &idade[contador]);
                    }

                    for(contador = 0; contador <= 49; contador++){
                        printf("\nA idade do(a) %s é: %d", nome_pessoa[contador], idade[contador]);
                    }

                    contador = 0;
                    printf("\n\n");   
                break;

        //---------------------------------------------------------------------------------------------------------

            int ano_cientistas[20], ano_atual;
            char nome_cientista[20][200];

                case 'b':
                    printf("\nb)ano de nascimento de 20 cientistas;\n\n");

                    printf("Entre com o Ano que estamos: ");
                        scanf("%d", &ano_atual);

                    for(contador = 0; contador <= 1; contador++){
                        printf("Entre com o nome do %d° cientista: ", contador+1);
                            scanf("%s", &nome_cientista[contador]);
                        printf("Entre com o ano de nascimento do cientista %s: ", nome_cientista[contador]);
                            scanf("%d", &ano_cientistas[contador]);
                    }

                    for(contador = 0; contador <= 1; contador++){
                        printf("\nO cientista %s nascido em %d tem atualmente %d anos.", nome_cientista[contador], ano_cientistas[contador], ano_atual-ano_cientistas[contador]);
                    }

                    contador = 0;
                    printf("\n\n");    
                break;

        //---------------------------------------------------------------------------------------------------------

            float salario[30];
            char nome_colaborador[30][200];

                case 'c':
                    printf("\nc)salário de 30 pessoas;\n\n");

                    for(contador = 0; contador <= 29; contador++){
                        printf("Entre com o nome do %d° colaborador: ", contador+1);
                            scanf("%s", &nome_colaborador[contador]);
                        printf("Entre com o salario do colaborador %s: ", nome_colaborador[contador]);
                            scanf("%f", &salario[contador]);
                    }

                    for(contador = 0; contador <= 29; contador++){
                        printf("\nO salario do colaborador %s é %.2f.", nome_colaborador[contador], salario[contador]);
                    }
                    
                    contador = 0;
                    printf("\n\n"); 
                break;

        //---------------------------------------------------------------------------------------------------------

            float altura[1000];
            char nome_estudante[1000][200];

                case 'd':
                    printf("\nd)altura de 1000 estudantes;\n\n");

                    for(contador = 0; contador <= 999; contador++){
                        printf("Entre com o nome do %d° estudante: ", contador+1);
                            scanf("%s", &nome_estudante[contador]);
                        printf("Entre com a altura do estudante %s: ", nome_estudante[contador]);
                            scanf("%f", &altura[contador]);
                    }

                    for(contador = 0; contador <= 999; contador++){
                        printf("\nA altura do estudante %s é %.2f.",nome_estudante[contador], altura[contador]);
                    }
                    
                    contador = 0;
                    printf("\n\n"); 
                break;

        //---------------------------------------------------------------------------------------------------------

            float temperatura[7];

                case 'e':
                    printf("\ne)temperatura diária dos últimos 7 dias;\n\n");

                    for(contador = 0; contador <= 6; contador++){
                        printf("Entre com a temperatura do %d° dia: ", contador+1);
                            scanf("%f", &temperatura[contador]);
                    }

                    printf("\nAs Temperaturas foram:\n");
                    for(contador = 0; contador <= 6; contador++){
                        printf("\ntemperatura do %d° dia foi: %.2f.",contador+1, temperatura[contador]);
                    }
                    
                    contador = 0;
                    printf("\n\n"); 
                break;

        //---------------------------------------------------------------------------------------------------------

            float caldeira[48];

                case 'f':
                    printf("\nf)48 últimas temperaturas registradas para uma caldeira;\n\n");

                    for(contador = 0; contador <= 47; contador++){
                        printf("Entre com a %d° temperatura: ", contador+1);
                            scanf("%f", &caldeira[contador]);
                    }

                    printf("\nAs Temperaturas foram:\n");
                    for(contador = 0; contador <= 47; contador++){
                        printf("\n%d° temperatura: %.2f °C.",contador+1, caldeira[contador]);
                    }
                    
                    contador = 0;
                    printf("\n\n"); 
                break;
        
        //---------------------------------------------------------------------------------------------------------

            float nota[30];
            char nome_estudante_nota[30][200];

                case 'g':
                    printf("\ng)notas de 30 estudantes;\n\n");

                    for(contador = 0; contador <= 29; contador++){
                        printf("Entre com o nome do %d° estudante: ", contador+1);
                            scanf("%s", &nome_estudante_nota[contador]);
                        printf("Entre com a nota do estudante %s: ", nome_estudante_nota[contador]);
                            scanf("%f", &nota[contador]);
                    }

                    for(contador = 0; contador <= 47; contador++){
                        printf("\nA nota estudante %s foi %.2f.",nome_estudante_nota[contador], nota[contador]);
                    }

                    contador = 0;
                    printf("\n\n"); 
                break;

        //---------------------------------------------------------------------------------------------------------

            float notas[25][2];
            char nome_estudante_notas[25][200];
            
                case 'h':
                    printf("\nh)notas de 25 estudantes em três provas;\n\n");

                    for(contador = 0; contador <= 24; contador++){
                        printf("Entre com o nome do %d° estudante: ", contador+1);
                            scanf("%s", &nome_estudante_notas[contador]);

                            for(contador2 = 0; contador2 <= 2; contador2++){
                                printf("Entre com as notas do estudante %s, %d° Nota: ", nome_estudante_notas[contador], contador2+1);
                                    scanf("%f", &notas[contador][contador2]);
                            } 
                    }

                    for(contador = 0; contador <= 24; contador++){
                        printf("\nAs notas do estudante %s\n", nome_estudante_notas[contador]);

                        for(contador2 = 0; contador2 <= 2; contador2++){
                                printf("%d° nota: %.2f\n", contador2+1, notas[contador][contador2]);
                        }
                    }
                    
                    contador = 0;
                    contador2 = 0;
                    printf("\n\n"); 
                break;

        //--------------------------------------------------------------------------------------------------------- 

            float cr[25], nota_cr[20], carga_horaria[20], calculo[24], carga_horaria_total, aux_calculo;
            int quantidade_materia = 0;
            char materias[20][100]; 
            char nome_cr[24][200]; 

                case 'i':
                    printf("\ni)coeficiente de rendimento de 25 estudantes;\n\n");

                    printf("Entre com a quantidade de materias (1 a 20): ");
                        scanf("%d", &quantidade_materia);

                    carga_horaria_total = 0;

                    for(contador = 0; contador <= quantidade_materia - 1; contador++){
                        printf("Entre com as materias: ");
                            scanf("%s", &materias[contador]);

                        printf("Entre com a carga horaria da materia %s: ", materias[contador]);
                            scanf("%f", &carga_horaria[contador]);

                        carga_horaria_total = carga_horaria_total + carga_horaria[contador];
                    }

                    contador = 0;
                    aux_calculo = 0;
                    printf("\n\n");

                    for(contador = 0; contador <= 24; contador++){
                        printf("Entre com o nome do Estudante: ");
                            scanf("%s", &nome_cr[contador]);
                        for(contador = 0; contador <= quantidade_materia - 1; contador++){
                            printf("Entre com a nota de %s: ", materias[contador]);
                                scanf("%f", &nota_cr[contador]);;

                            calculo[contador] = carga_horaria[contador] * nota_cr[contador];
                            aux_calculo = aux_calculo + calculo[contador];
                        }
                    } 

                    for(contador = 0; contador <= 24; contador++){
                        cr[contador] =  aux_calculo / carga_horaria_total;
                        printf("\no cr do estudante %s foi de: %.2f", nome_cr[contador], cr[contador]);
                    }

                    contador = 0;
                    printf("\n\n");
                break;
            
        //---------------------------------------------------------------------------------------------------------

            int quantidade_familia[20];
            char nome_familia[20][200];

                case 'j':
                    printf("\nj)para 20 famílias, a quantidade de pessoas em cada uma;\n\n");

                    for(contador = 0; contador <= 19; contador++){
                        printf("Entre com o nome da %d° familia: ", contador+1);
                            scanf("%s", &nome_familia[contador]);
                        printf("Entre com a quantidade de membros da familia %s: ", nome_familia[contador]);
                            scanf("%d", &quantidade_familia[contador]);
                    }

                    printf("\n)a quantidade de cada familia foi:\n");
                    for(contador = 0; contador <= 19; contador++){
                        printf("\nFamilia %s tem %d membros",nome_familia[contador], quantidade_familia[contador]);
                    }

                    contador = 0;
                    printf("\n\n");
                break;
        
        //---------------------------------------------------------------------------------------------------------
        
            int ano_pessoa[20], ano_atual_j;
            char nome_pessoa_j[20][200];
            
                case 'k':
                    printf("\nk)ano de nascimento de 20 pessoas;\n\n");

                    
                    printf("Entre com o Ano que estamos: ");
                        scanf("%d", &ano_atual_j);

                    for(contador = 0; contador <= 19; contador++){
                        printf("Entre com o nome da %d° pessoa: ", contador+1);
                            scanf("%s", &nome_pessoa_j[contador]);
                        printf("Entre com o ano de nascimento do(a) %s: ", nome_pessoa_j[contador]);
                            scanf("%d", &ano_pessoa[contador]);
                    }

                    for(contador = 0; contador <= 19; contador++){
                        printf("\nO(a) %s nasceu em %d, idade atual em %d: %d",nome_pessoa_j[contador], ano_pessoa[contador], ano_atual_j, ano_atual_j-ano_pessoa[contador]);
                    }

                    contador = 0;
                    printf("\n\n");    
                break;

        //---------------------------------------------------------------------------------------------------------

            float consumo[20], km_inicio, km_final, valor_gasolina, valor_pago, litros;
            char modelo[20][200];
            
                case 'l':
                    printf("\nl)para 20 modelos de carro, o consumo (km/l) de gasolina e álcool.\n\n");

                    for(contador = 0; contador <= 19; contador++){
                        printf("Entre com do %d° modelo de carro: ", contador+1);
                            scanf("%s", modelo[contador]);
                        printf("Entre com os Dados para o calculo:\n");
                        printf("Entre com o KM inicial: ");
                            scanf("%f", &km_inicio);
                        printf("Entre com o valor da Gasolina: ");
                            scanf("%f", &valor_gasolina);
                        printf("Entre com o pago: ");
                            scanf("%f", &valor_pago);

                        litros = valor_pago / valor_gasolina;

                        printf("A litragem foi de %.2fL\n", litros);
                        printf("Entre com o KM final: ");
                            scanf("%f", &km_final);

                        consumo[contador] = (km_final - km_inicio) / litros;
                    }

                    printf("\nOs Modelos e seus consumos:\n");
                    for(contador = 0; contador <= 19; contador++){
                        printf("\nModelo: %s consumiu %.3f (km/l) ", modelo[contador], consumo[contador]);
                    }

                    contador = 0;
                    printf("\n\n");    
                break;

        //---------------------------------------------------------------------------------------------------------

            float gastos[365], aux_gastos;

                case 'm':
                    printf("\nm)Valor dos gastos diários no último ano;\n\n");

                    for(contador = 0; contador <= 364; contador++){
                        printf("Entre com o gasto diario, dia %d: ", contador+1);
                            scanf("%f", &gastos[contador]);
                    }

                    printf("\nOs gastos diarios foram:\n");
                    for(contador = 0; contador <= 364; contador++){
                        printf("\ngasto dia %d: %.2f",contador+1, gastos[contador]);
                        aux_gastos = aux_gastos + gastos[contador];
                    }

                    printf("o gasto no ano foi de %.2f", aux_gastos);
                    
                    contador = 0;
                    printf("\n\n");    
                break;

        //---------------------------------------------------------------------------------------------------------

            float vazao[5], litros_vazao[5], segundos_vazao[5];
            char liquido[5][200];

                case 'n':
                    printf("\nn)vazão (litros/segundo) de 5 líquidos diferentes;\n\n");

                    for(contador = 0; contador <= 4; contador++){
                        printf("Entre com do %d° liquido: ", contador+1);
                            scanf("%s", liquido[contador]);
                        printf("Entre com a quantidade de litros do %s: ", liquido[contador]);
                            scanf("%f", &litros_vazao[contador]);
                        printf("Entre com o tempo (Segundos) que demorou para %.2f litros acabar: ", litros_vazao[contador]);
                            scanf("%f", &segundos_vazao[contador]);

                        vazao[contador] = litros_vazao[contador] / segundos_vazao[contador];
                    }

                    printf("\nA vazao dos liquidos foram:\n");
                    for(contador = 0; contador <= 4; contador++){
                        printf("\nO(a) %s com %.2f demorou %.2f segundos e teve umas vazão de %f", liquido[contador], litros_vazao[contador], segundos_vazao[contador], vazao[contador]);
                    }

                    contador = 0;
                    printf("\n\n");    
                break;


        //---------------------------------------------------------------------------------------------------------

                float volume[20], pressao[20];
                char gases[20][200];

                case 'o':
                    printf("\no)medidas de volume e pressão de 20 gases;\n\n");

                    for(contador = 0; contador <= 19; contador++){
                        printf("Entre com do %d° Gás: ", contador+1);
                            scanf("%s", gases[contador]);
                        printf("Entre com o volume do gás %s: ", gases[contador]);
                            scanf("%f", &volume[contador]);
                        printf("Entre com a pressão do gás %s: ", gases[contador]);
                            scanf("%f", &pressao[contador]);
                    }

                    printf("\nOs gases foram:\n");
                    for(contador = 0; contador <= 19; contador++){
                        printf("\nO gas: %s tem o volume %f e Pressao %f",gases[contador], volume[contador], pressao[contador]);
                    }
                    
                    contador = 0;
                    printf("\n\n");    
                break;

        //---------------------------------------------------------------------------------------------------------

                case 'p':
                    contador_a_saida++;
                break;

        //---------------------------------------------------------------------------------------------------------

                //OPCAO INVALIDA
                default:
                    printf("Opcao Invalida !!");
        }
    }
}

void two(){
    int numeros[5], contador;

    printf("Entre com os numeros:\n");
    
    for(contador = 0; contador <= 4; contador++){
        printf("Entre com o %d° numero: ", contador+1);
            scanf("%d", &numeros[contador]);
    }

    printf("\n");

    for(contador = 0; contador <= 4; contador++){
        printf("O numero na %d° posição é: %d\n", contador+1 , numeros[contador]);
    }
}

void three(){
    int numeros[5], contador;
    
    for(contador = 0; contador <= 4; contador++){
       numeros[contador] = 0;
    }

    printf("\n");

    for(contador = 0; contador <= 4; contador++){
        printf("%d° posição é: %d\n", contador+1 , numeros[contador]);
    }
}

void four(){
    int numeros[20], contador;

    for(contador = 0; contador <= 19; contador++){
        numeros[contador] = rand() % 10;
    }

    printf("\n");

    for(contador = 0; contador <= 19; contador++){
        printf("%d° posição é: %d\n", contador+1 , numeros[contador]);
    }
}

void five(){
    int numeros[20], contador;

    for(contador = 0; contador <= 19; contador++){
        numeros[contador] = rand() % 150;
    }

    printf("\n");

    for(contador = 0; contador <= 19; contador++){
        printf("%d° posição é: %d\n", contador+1 , numeros[contador]);
    }
}

void six(){
    int numeros[20], contador;

    for(contador = 0; contador <= 19; contador++){
        numeros[contador] = (rand() % 10) + 10;
    }

    printf("\n");

    for(contador = 0; contador <= 19; contador++){
        printf("%d° posição é: %d\n", contador+1 , numeros[contador]);
    }
}

void seven(){
    int numeros[100], contador;
    
    for(contador = 0; contador <= 99; contador++){
       numeros[contador] = contador + 1;
    }

    printf("\n");

    for(contador = 0; contador <=99; contador++){
        printf("%d° posição é: %d\n", contador+1 , numeros[contador]);
    }
}

void eight(){
    int numeros[10], contador, aux = 100;

    for(contador = 0; contador <= 9; contador++){
        aux = aux -1;
        numeros[contador] = aux;
    }

    printf("\n");

    for(contador = 0; contador <= 9; contador++){
        printf("%d° posição é: %d\n", contador+1 , numeros[contador]);
    }
}