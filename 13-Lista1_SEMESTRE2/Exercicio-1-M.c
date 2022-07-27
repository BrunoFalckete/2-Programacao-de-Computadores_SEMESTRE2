//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//m)    1 10 100 1000
//      2 20 200 2000
//      3 30 300 3000
//      …
//      100 1000 10000 100000


#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 1;

    while (num <= 100){
        printf("%d\t%d\t%d\t%d\t", num, num*10, num*100, num*1000);
        printf("\n");
        num++;
    }
    
    return 0;
}