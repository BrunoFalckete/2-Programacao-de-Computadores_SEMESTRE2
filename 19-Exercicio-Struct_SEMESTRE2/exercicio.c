//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//03/05/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

struct hora{
    int horas;
    int minutos;
    int segundos;
};

int main(){
    
    struct hora hora[6];
    int contador = 0;

    //COLOCANDO VALOR ZERO PARA RECEBER A SOMA
    hora[4].horas = 0;
    hora[4].minutos = 0;
    hora[4].segundos = 0;

    //COLOCANDO O MAIOR VALOR POSSIVEL PARA HORA
    hora[5].horas = 24;
    hora[5].minutos = 60;
    hora[5].segundos = 60;

    //ENTRADA DE DADOS
    while(contador < 4){

        printf("Entre com a hora: ");
            scanf("%d", &hora[contador].horas);
            fflush(stdin);

        printf("Entre com os minutos: ");
            scanf("%d", &hora[contador].minutos);
            fflush(stdin);
            
        printf("Entre com os segundos: ");
            scanf("%d", &hora[contador].segundos);
            fflush(stdin);

        //VALIDACAO DOS DADOS
        if(hora[contador].horas > 23 || hora[contador].minutos > 59 || hora[contador].segundos > 59){    
            printf("\n");
            printf("Dados Invalidos\n");
            continue;
            
        }else{
            contador++;
            printf("\n");
        }
    }

    //VERIFICACAO DA MENOR HORA
    for(contador = 0; contador < 4; contador++){

        if(hora[5].horas > hora[contador].horas){
            hora[5].horas = hora[contador].horas;
            hora[5].minutos = hora[contador].minutos;
            hora[5].segundos = hora[contador].segundos;

        }else if(hora[5].horas == hora[contador].horas){
            if(hora[5].minutos > hora[contador].minutos){
                hora[5].horas = hora[contador].horas;
                hora[5].minutos = hora[contador].minutos;
                hora[5].segundos = hora[contador].segundos;

            }else if(hora[5].minutos == hora[contador].minutos){
                if(hora[5].segundos > hora[contador].segundos){
                    hora[5].horas = hora[contador].horas;
                    hora[5].minutos = hora[contador].minutos;
                    hora[5].segundos = hora[contador].segundos;

                }
            }
        }
    }

    //IMPRIMINDO OS VALORES SOLICITADOS
    for(contador = 0; contador < 4; contador++){
        
        printf("Os dados do vetor sao posicao %d:  %d Horas %d Minutos %d Segundos\n",contador+1, hora[contador].horas, hora[contador].minutos, hora[contador].segundos);

        hora[4].horas = hora[4].horas + hora[contador].horas;
        hora[4].minutos = hora[4].minutos + hora[contador].minutos;
        hora[4].segundos = hora[4].segundos + hora[contador].segundos;
    }

    printf("\n");

    printf("A soma de todas as horas sao: %d Horas %d Minutos %d Segundos\n", hora[4].horas, hora[4].minutos, hora[4].segundos);

    printf("A menor hora foi: %d Horas %d Minutos %d Segundos\n", hora[5].horas, hora[5].minutos, hora[5].segundos);

    return 0;
}