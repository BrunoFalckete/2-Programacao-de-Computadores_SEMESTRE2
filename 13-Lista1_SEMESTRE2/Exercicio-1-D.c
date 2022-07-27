//INSTITUTO FEDERAL DO MATO GROSSO DO SUL
//ANALISE E DESENVOLVIMENTO DE SISTEMAS
//BRUNO MATHEUS FALCKETE FONSECA
//MATRICULA: 2021206476034-6
//16/03/2022
//BRUNO.FONSECA@ESTUDANTE.IFMS.EDU.BR

//Desenvolva programas na linguagem de programação C para gerar as seguintes sequências:
//d)1a 1b 1c 2a 2b 2c … 10a 10b 10c

#include <stdio.h>
    
    void main(){
       
        int numero = 1;

        while (1 == 1){
           
            printf("%da ", numero);
            printf("%db ", numero);
            printf("%dc ", numero);
            printf("%dd ", numero);

             numero = numero + 1 ;

            if (numero == 11){
               break ;
            }
        }
        return 0;
    }