//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//22/04/2022
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

int main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int escolha, contador_geral = 1;

    while(contador_geral == 1){

        printf("\n1 - um() Faça um programa que carregue uma matriz 3x4 com números inteiros informados pelo usuário. Imprima a matriz, calcule e mostre a quantidade total de elementos negativos.\n");

        printf("\n2 - dois()  Faça um programa que carregue uma matriz 2x4 com números inteiros, calcule e mostre\n- a quantidade de elementos negativos em cada linha;\n- a média dos elementos em cada linha da matriz;\n- a média dos elementos em cada coluna da matriz;\n");

        printf("\n3 - tres() Faça um programa que leia um vetor contendo 15 elementos. A seguir distribua esses elementos em uma matriz 3x5. Ao final mostre o vetor e a matriz gerada. Veja a seguir um exemplo do que seu programa deve fazer\n");

        printf("\n4 - quatro() Veja na figura a seguir um exemplo do que seu programa deve fazer. Faça um programa que receba as notas de 15 estudantesem cinco provas diferentes e armazene-as em uma matriz 15x5. Para facilitar gere notas aleatórias ? rand() %101/10.0. Daí:\na) Imprima todos os elementos da matriz;\nb)Declare também dois vetores de 15 posições. A partir dos dados da matriz armazene no primeiro vetor a média ritmética das provas e no segundo apenas um inteiro que representa a situação do estudante (1 = Aprovado, 0 = Reprovado). Para ser aprovado o estudante necessita obter média 5\nc) Para todos os estudantes, imprima o número do estudante, seguido de suas notas, média das notas e situação.\nd) Imprima o número de estudantes, o número de aprovados e o número de reprovados\n");

        printf("\n5 - cinco() Declare três matrizes M1, M2 e R de ordem 20x4. Veja na figura a seguir um exemplo do que seu programa deve fazer:\n- Armazene um número aleatório em cada elemento de M1 e M2;\n- A matriz resultante R deve receber a soma das matrizes M1 e M2;\n- Imprima as matrizes exatamente conforme figura exemplo\n");

        printf("\n0 - SAIR !!\n");

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

            case 0:
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
    int numeros[3][4], contador1 = 0, contador2 = 0, soma_negativos = 0, quantidade_negativos = 0;

        for(contador1 = 0; contador1 < 3; contador1++){
            for(contador2 = 0; contador2 < 4; contador2++){
                printf("Entre com os numeros inteiros: ");
                    scanf("%d", &numeros[contador1][contador2]);

                if (numeros[contador1][contador2] < 0){
                    soma_negativos = soma_negativos + numeros[contador1][contador2];
                    quantidade_negativos++;
                }
            } 
        }

        printf("\n");

        for(contador1 = 0; contador1 < 3; contador1++){
            for(contador2 = 0; contador2 < 4; contador2++){
                printf("%d\t", numeros[contador1][contador2]);
            }
            printf("\n");
        }

        printf("\n");

        printf("O total de numeros negativos sao: %d. A soma deles é: %d", quantidade_negativos, soma_negativos);

        printf("\n");
}

void two(){
    int numeros[2][4], contador1 = 0, contador2 = 0, media_linha = 0, media_coluna = 0, quantidade_negativos = 0, aux = 0;

        for(contador1 = 0; contador1 < 2; contador1++){
            for(contador2 = 0; contador2 < 4; contador2++){
                printf("Entre com os numeros inteiros: ");
                    scanf("%d", &numeros[contador1][contador2]);
            } 
        }

        printf("\n");

        for(contador1 = 0; contador1 < 2; contador1++){
            for(contador2 = 0; contador2 < 4; contador2++){
                printf("%d\t", numeros[contador1][contador2]);
            }
            printf("\n");
        }

        printf("\n");

        for(contador1 = 0; contador1 < 2; contador1++){
            for(contador2 = 0; contador2 < 4; contador2++){
                if (numeros[contador1][contador2] < 0){

                    quantidade_negativos++;

                }
            }

            printf("A quantidades de negativos na linha %d é: %d\n", contador1, quantidade_negativos);
            quantidade_negativos = 0;
        }

        printf("\n");

        for(contador1 = 0; contador1 < 2; contador1++){
            for(contador2 = 0; contador2 < 4; contador2++){ 

                aux = aux + numeros[contador1][contador2];

            }

            media_linha = (aux / 4); 
            printf("A media da linha %d é: %d\n", contador1, media_linha);
            media_linha = 0;
            aux = 0;
        }

        printf("\n");

        for(contador2 = 0; contador2 < 4; contador2++){
            for(contador1 = 0; contador1 < 2; contador1++){ 

                aux = aux + numeros[contador1][contador2];
            }

            media_coluna = (aux / 2);
            printf("A media da coluna %d é %d\n", contador2, media_coluna);
            media_coluna = 0;
            aux = 0;
        }
                               
    printf("\n");
}

void three(){
    int numeros_v[15], numeros[3][5], contador1 = 0, contador2 = 0, contador3 = 0;

    for(contador1 = 0; contador1 < 15; contador1++){
        printf("Entre com o %d° numeros no vetor: ",contador1+1);
            scanf("%d", &numeros_v[contador1]);
    }

    printf("Vetor:\n");

    for(contador1 = 0; contador1 < 15; contador1++){
        printf("%d ",numeros_v[contador1]);
    }

    printf("\n");

    for(contador1 = 0; contador1 < 3; contador1++){
        for(contador2 = 0; contador2 < 5; contador2++){

            numeros[contador1][contador2] = numeros_v[contador3];
            contador3++;
        }
    }

    printf("\n");

    printf("Matriz:\n");
    for(contador1 = 0; contador1 < 3; contador1++){
            for(contador2 = 0; contador2 < 5; contador2++){
                printf("%d\t", numeros[contador1][contador2]);
            }
            printf("\n");
    }

    printf("\n");
}

void four(){
    float notas[15][5], media[15], aux;
    int contador1 = 0, contador2 = 0, situacao[15], aprovados = 0, reprovados = 0, estudante = 0;

    for(contador1 = 0; contador1 < 15; contador1++){
        for(contador2 = 0; contador2 < 5; contador2++){
            notas[contador1][contador2] = rand()%101/10.0;
        }
    }

    printf("Notas: \n");
    for(contador1 = 0; contador1 < 15; contador1++){
        for(contador2 = 0; contador2 < 5; contador2++){
            printf("%.2f\t", notas[contador1][contador2]);
        }
        printf("\n");
    }

    for(contador1 = 0; contador1 < 15; contador1++){
        for(contador2 = 0; contador2 < 5; contador2++){
            aux = aux + notas[contador1][contador2];
        }

        media[contador1] = aux / 5;

        if(media[contador1] > 5){
            situacao[contador1] = 1;
        }else{
            situacao[contador1] = 0;
        }

        aux = 0;
    }

    printf("\n");

    printf("===================================================================\n");
    printf("#\tNota1\tNota2\tNota3\tNota4\tNota5\tMedia\tSituacao\n");
    printf("-------------------------------------------------------------------\n");

    
    for(contador1 = 0; contador1 < 15; contador1++){

        printf("%d\t",contador1+1);
        estudante++;

        for(contador2 = 0; contador2 < 5; contador2++){
            printf("%.2f\t", notas[contador1][contador2]);
        }

        printf("%.2f\t",media[contador1]);

        if(situacao[contador1] == 1){
            printf("Aprovado\t");
            aprovados++;
        }else{
            printf("Reprovado\t");
            reprovados++;
        }

        printf("\n");
    }

    printf("-------------------------------------------------------------------\n");
    printf("Estudantes: %d\n", estudante);
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("===================================================================\n");
}

void five(){
    int matriz1[20][4], matriz2[20][4], resultado[20][4], contador1 = 0, contador2 = 0;

    for(contador1 = 0; contador1 < 20; contador1++){
        for(contador2 = 0; contador2 < 4; contador2++){
            matriz1[contador1][contador2] = rand() % 100;
        }
    }

    for(contador1 = 0; contador1 < 20; contador1++){
        for(contador2 = 0; contador2 < 4; contador2++){
            matriz2[contador1][contador2] = rand() % 100;
        }
    }

    for(contador1 = 0; contador1 < 20; contador1++){
        for(contador2 = 0; contador2 < 4; contador2++){
            resultado[contador1][contador2] = matriz1[contador1][contador2] + matriz2[contador1][contador2];
        }
    }

    printf("Matriz1: \n");
    for(contador1 = 0; contador1 < 15; contador1++){
        for(contador2 = 0; contador2 < 5; contador2++){
            printf("%d\t", matriz1[contador1][contador2]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matriz2: \n");
    for(contador1 = 0; contador1 < 15; contador1++){
        for(contador2 = 0; contador2 < 5; contador2++){
            printf("%d\t", matriz2[contador1][contador2]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Soma: \n");
    for(contador1 = 0; contador1 < 15; contador1++){
        for(contador2 = 0; contador2 < 5; contador2++){
            printf("%d+%d\t",matriz1[contador1][contador2], matriz2[contador1][contador2]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Resultado: \n");
    for(contador1 = 0; contador1 < 15; contador1++){
        for(contador2 = 0; contador2 < 5; contador2++){
            printf("%d\t", resultado[contador1][contador2]);
        }
        printf("\n");
    }
}

