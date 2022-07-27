//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//b)100 99 98 … 80

#include <stdio.h>
    
    void main(){
       
       int contador , numero = 100 ;

        for (contador = 0; contador < 21; contador++){
           
            printf("%d ", numero);

            numero = numero - 1 ;
        }
        return 0;
    }