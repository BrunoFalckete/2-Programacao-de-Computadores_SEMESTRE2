//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//j)     1 2 3 4 5
        //6 7 8 9 10
        //11 12…
        // …
        //996 997 998 999 1000

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num = 1;

    while (num <= 1000){

        printf("%d\t", num);

        if(num % 5 == 0){
            printf("\n");
        }

        num++;
    }
    
    return 0;
}