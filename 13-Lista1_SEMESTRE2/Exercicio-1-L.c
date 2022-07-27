//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//l)    1 2 3 4 5
//      10 20 30 40 50
//      6 7 8 9 10
//      60 70 80 90 100
//      11 12 13…
//      …
//      26 27 28 29 30
//      260 270 280 290 300


#include <stdio.h>
#include <stdlib.h>
  
int main(){
       
    int num2 = 1, num, contador;

    for (contador = 0; contador < 6; contador++){

        num = 1;

        while (num <= 5){
            printf("%d\t", num2);
            num2++;
            num++;
        }

        printf("\n");

        num2-=5;

        num = 1;

        while (num <= 5){
            printf("%d\t", num2*10);
            num2++;
            num++;
        }
        printf("\n");
    }
    
    
    return 0;
}