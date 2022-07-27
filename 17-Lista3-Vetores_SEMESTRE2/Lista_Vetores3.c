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
void six();
void seven();
void eight();


int main(){
    setlocale(LC_ALL, "portuguese-brazilian");
    int escolha, contador_geral = 1;

    while(contador_geral == 1){

        printf("\n1 - um() Crie um vetor v de 15 números inteiros. Inicialize v com números aleatórios entre 1 e 20. Crie dois novos vetores v1 e v2. Copie os valores maiores que 14 de v para v1, e demais valores para v2.Exiba os três vetores.\n");

        printf("\n2 - dois() Crie um vetor v de 15 números inteiros. Inicialize v com números aleatórios entre 1 e 20. Crie dois novos vetores v1 e v2. Armazene em v1 as posições dos valores maiores que 12 de v1, e em v2 as posições dos demais valores. Exiba os três vetores.\n");

        printf("\n3 - tres() Leia um vetor de 8 posições com valores informados pelo usuário, em seguida, leia também dois valores X e Y que representam duas posições no vetor. Escreva a soma dos valores armazenados no vetor nas respectivas posições X e Y.\n");

        printf("\n4 - quatro() Leia um vetor de tamanho informado pelo usuário e um número x. Procure por x no vetor e exiba todos os índices em que x se encontra no vetor. Caso x não pertencer ao vetor uma mensagem de erro deve apresentada para o usuário.\n");

        printf("\n5 - cinco() Crie um vetor v de 15 números inteiros. Inicialize v com números aleatórios entre 20 e 50. Para cada número n presente em v apresente todas as posições em que n se encontra em v.\n");

        printf("\n6 - seis() Crie um vetor v de 10 números inteiros. Inicialize v com números aleatórios entre 1 e 5. Faça um programa que forneça uma saída análoga ao da seguente figura de exemplo. Não crie outros vetores.\n");

        printf("\n7 - sete() Crie um vetor v de 10 números inteiros. Inicialize v com números aleatórios entre 1 e 5. Faça um programa que forneça uma saída análoga ao da seguente figura de exemplo. Não crie outros vetores.\n");

        printf("\n8 - oito() Crie um vetor v de 10 números inteiros. Inicialize v com números aleatórios entre 1 e 5. Crie um vetor v2 de 5 caracteres. O usuário deve informar cada valor de v2. Faça um programa que Armazene em um vetor v3 uma saída análoga ao da seguinte figura de exemplo. Apresente o vetor v3. \n");

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

            case 6:
               six();
            break;

            case 7:
               seven();
            break;

            case 8:
               eight(); 
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
    int numeros[15], v1[15], v2[15], contador;

    for(contador = 0; contador <= 14; contador++){
        numeros[contador] = rand() % 20 +1;
    }

    printf("\n");

    for(contador = 0; contador <= 14; contador++){
       if(numeros[contador] > 14){
           v1[contador] = numeros[contador];
       }else{
           v2[contador] = numeros[contador];
       }
    }

    printf("\n");

    for(contador = 0; contador <= 14; contador++){
        printf("O vetor original posicao %d contem o numero: %d\n", contador, numeros[contador]);
    }

    printf("\n");

    for(contador = 0; contador <= 14; contador++){
        if(v1[contador] > 14 && v1[contador] < 20 ){
            printf("O vetor numero maiores que 14 na posicao %d contem o numero: %d\n", contador, v1[contador]);
        }
    }

    printf("\n");

    for(contador = 0; contador <= 14; contador++){
        if(v2[contador] > 0 && v2[contador] < 14 ){
            printf("O vetor numero menores ou igual a 14 na posicao %d contem o numero: %d\n", contador, v2[contador]);
        }
    }
}

void two(){
    int numeros[15], v1[15], v2[15], contador;

    for(contador = 0; contador <= 14; contador++){
        numeros[contador] = rand() % 20 + 1;
    }

    printf("\n");

    for(contador = 0; contador <= 14; contador++){
       if(numeros[contador] > 12){
           v1[contador] = numeros[contador];
       }else{
           v2[contador] = numeros[contador];
       }
    }

    printf("\n");

    for(contador = 0; contador <= 14; contador++){
        printf("O vetor original posicao %d contem o numero: %d\n", contador, numeros[contador]);
    }

    printf("\n");

    for(contador = 0; contador <= 14; contador++){
        if(v1[contador] > 12 && v1[contador] < 20 ){
            printf("O vetor numero maiores que 12 na posicao %d contem o numero: %d\n", contador, v1[contador]);
        }
    }

    printf("\n");

    for(contador = 0; contador <= 14; contador++){
        if(v2[contador] > 0 && v2[contador] < 12 ){
            printf("O vetor numero menores ou igual a 12 na posicao %d contem o numero: %d\n", contador, v2[contador]);
        }
    }
}

void three(){
    int numeros[8], contador = 0, posicao1, posicao2, soma;

    printf("Entre com os numeros:\n");

    for (contador = 0; contador <= 7; contador++){

        printf("Entre com o %d° numero: ", contador);
            scanf("%d", &numeros[contador]);
    }

    printf("Entre com a 1° posicao para somar: ");
            scanf("%d", &posicao1);

    printf("Entre com o 2° posicao para somar: ");
            scanf("%d", &posicao2);

    printf("\n");

    for(contador = 0; contador <= 7; contador++){
        if (posicao1 == contador){
            soma = numeros[contador];
            printf("Posicao %d contemo numero: %d\n",posicao1, numeros[contador]);
        }
        if (posicao2 == contador){
            soma = soma + numeros[contador];
            printf("Posicao %d contemo numero: %d\n",posicao2, numeros[contador]);
        }
    }

    printf("\n");

    printf("A soma é: %d\n", soma);
}

void four(){
    int tamanho = 0, entrada, contador, randon, teste = 0;

    printf("Entre com o tamanho do vetor: ");
        scanf("%d", &tamanho);

    tamanho = tamanho - 1;

    int numeros[tamanho];

    printf("Entre com o valor maximo para numeros aleatórios: ");
        scanf("%d", &randon);

    printf("Entre com o numero da pesquisa: ");
        scanf("%d", &entrada);

    printf("\n");

    for(contador = 0; contador <= tamanho; contador++){
        numeros[contador] = rand() % randon;
    }


    for(contador = 0; contador <= tamanho; contador++){
        numeros[contador] = rand() % randon;
    }

    for(contador = 0; contador <= tamanho; contador++){ 
            printf("Posição %d: %d\n",contador, numeros[contador]);
    }

    printf("\n");

    for(contador = 0; contador <= tamanho; contador++){
        if(entrada == numeros[contador]){
            printf("Tem o numero %d na posicao %d\n", entrada, contador);
            teste = 1;
        }
    }

    if(teste == 0){
         printf("Nao tem o numero %d no vetor\n", entrada);
    }
}

void five(){
    int numeros[15], contador, entrada;

    for(contador = 0; contador <= 14; contador++){
        numeros[contador] = (rand() % 20) + 30;
    }

    printf("Entre com o numero (20 a 50): ");
        scanf("%d", &entrada);

    for(contador = 0; contador <= 14; contador++){
        if(entrada == numeros[contador]){
            printf("Tem o numero %d na posicao %d\n", entrada, contador);
        }
    }
}

void six(){
    int numeros[10], contador, contador2 = 0, aux = 0;

    for(contador = 0; contador <= 9; contador++){
        numeros[contador] = (rand() % 5) + 1;
    }

    printf("V |");
    for(contador = 0; contador <= 9; contador++){
        printf("%d\t", numeros[contador]);
    }

    printf("\n");

    for(contador2 = 0; contador2 <= 4; contador2++){

        printf("\n");
        printf("%d |", contador2+1);
        aux = contador2+1;

        for(contador = 0; contador <= 9; contador++){
            if(aux == numeros[contador]){
                printf("X\t");
            }else{
                printf(" \t");
            }
        }
    }

    printf("\n");
}

void seven(){
        int numeros[10], contador, contador2 = 0, aux = 0;

    for(contador = 0; contador <= 9; contador++){
        numeros[contador] = (rand() % 5) + 1;
    }

    printf("V |");
    for(contador = 0; contador <= 9; contador++){
        printf("%d\t", numeros[contador]);
    }

    printf("\n");

    for(contador2 = 0; contador2 <= 4; contador2++){

        printf("\n");
        printf("%d |", contador2+1);
        aux = contador2+1;

        for(contador = 0; contador <= 9; contador++){
            if(aux == numeros[contador]){
                printf("X");
            }
        }
    }

    printf("\n");
}

void eight(){
    int numeros[10], contador;
    char letras[5], letras_saida[10];

    for(contador = 0; contador <= 9; contador++){
        numeros[contador] = (rand() % 5) + 1;
    }

    for(contador = 0; contador <= 4; contador++){
        printf("Entre com as letras:");
            scanf("%s", &letras[contador]);
    }

    printf("\n");
    printf("V  |");
    for(contador = 0; contador <= 9; contador++){
        printf("%d\t", numeros[contador]);
    }

    printf("\n");
    printf("V2 |");
    for(contador = 0; contador <= 4; contador++){
        printf("%c\t", letras[contador]);
    }

    for(contador = 0; contador <= 9; contador++){
        letras_saida[contador] = letras[numeros[contador]-1];
    }

    printf("\n");
    printf("V3 |");
    for(contador = 0; contador <= 9; contador++){
        printf("%c\t", letras_saida[contador]);
    }

    printf("\n");
}