//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//k)    //1
        //2 3
        //4 5 6
        //7 8 9 10
        //…
        //… completar até 15 linhas

#include <stdio.h>
#include <stdlib.h>

int main (){
    int contador = 1, contador2, num = 1;

    while (contador <= 15){

        contador2 = 1;

        while (contador2 <= contador){
            printf("%d\t", num);
            num++;
            contador2++;
        }

        contador++;

        printf("\n");
    }
    
    return 0;
}